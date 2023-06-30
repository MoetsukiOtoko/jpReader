#include "mainwindow.h"
#include <QApplication>
#include <QScreen>
#include <QGuiApplication>
#include <QKeyEvent>
#include "pyScripts.h"
#include "util/utils.h"
#include "CaptureWindow.h"
#include <cstdlib>
#include <QProcess>
#include <QClipboard>

mainwindow::mainwindow(QWidget *parent)
        : QMainWindow(parent)
{

    m_contentwidget = new QWidget(this);
    m_contentlayout = new QHBoxLayout(m_contentwidget);
    m_contentlayout->setContentsMargins(50, 0, 50, 0);
    m_contentwidget->setLayout(m_contentlayout);
    setCentralWidget(m_contentwidget);
    m_anki = new AnkiClient(this);
    m_dictionary = new Dictionary(this);
    m_optionsWindow = new OptionsWindow;
    m_optionsWindow->hide();
    connect(GlobalMediator::getGlobalMediator(), &GlobalMediator::sendCloseOptions, this,
            [&]() { m_optionsWindow->hide(); });

    m_defHolder = new QWidget();
    m_defHolder->setWindowFlags(Qt::WindowStaysOnTopHint);
    m_defHolderLayout = new QHBoxLayout(m_defHolder);
    m_defHolder->setLayout(m_defHolderLayout);
    m_definition = new DefinitionWidget(m_defHolder);
    m_defHolderLayout->addWidget(m_definition);
    m_definition->layout()->setMargin(0);
    m_defHolder->setFixedSize(500, 400);
    m_defHolder->hide();

    m_textholder = new TextHolder(m_contentwidget);
    m_contentlayout->addWidget(m_textholder);

    topToolBar = new TopBar();
    topToolBar->setFixedSize(100, 30);
    topToolBar->show();

    rightBar = new RightBar();
    rightBar->setFixedSize(30, 50);
    rightBar->show();

    leftTopBar = new LeftTopBar();
    leftTopBar->setFixedSize(100, 30);
    leftTopBar->show();

    filledCircle = DirectoryUtils::getConfigDir() + "png/circleClosed.png";
    emptyCircle = DirectoryUtils::getConfigDir() + "png/circleOpen.png";

    initTranslationWidget();
    setThemeEnlarged();
    setThemeStandard();
    QTimer::singleShot(0, this, [&]() { setupButton(); });


    connect(GlobalMediator::getGlobalMediator(), &GlobalMediator::termsChanged,
            this, &mainwindow::setTerms);
    connect(GlobalMediator::getGlobalMediator(), &GlobalMediator::sendHideDefinition,
            this, [&]() { m_defHolder->hide(); });
    connect(GlobalMediator::getGlobalMediator(), &GlobalMediator::sendTranslationButtonPressed,
            this, &mainwindow::handleTranslationButtonPressed);
    connect(m_textholder, &TextHolder::sendNewSavedAreaRequested, this,
            &mainwindow::handleSetSavedArea);
    connect(GlobalMediator::getGlobalMediator(), &GlobalMediator::menuShowOptions, this, [&]() {
        m_optionsWindow->show();
    });
    connect(GlobalMediator::getGlobalMediator(), &GlobalMediator::sendChangeTheme, this,
            &mainwindow::handleThemeChange);

    connect(GlobalMediator::getGlobalMediator(), &GlobalMediator::sendSubstringButtonPressed, this,
            &mainwindow::handleSubstringButtonPressed);

}

void mainwindow::setDefinitionWidgetLocation()
{
    int offsetY = 60;
    QPoint mousepos = QCursor::pos();

    int widgetHeight = m_defHolder->height();

    int newWidgetX = mousepos.x() - 1920;
    int newWidgetY = 1440 - height() - widgetHeight - offsetY;

    m_defHolder->move(newWidgetX, newWidgetY);
}

void mainwindow::setTerms(SharedTermList terms, SharedKanji kanji)
{
    m_definition->setTerms(terms, kanji);
    m_defHolder->setVisible(terms || kanji);
    setDefinitionWidgetLocation();
}

void mainwindow::resizeEvent(QResizeEvent *event)
{
    QWidget::resizeEvent(event);
    if (rightArrow) rightArrow->move(1265, height() / 2);
    if (leftArrow) leftArrow->move(10, height() / 2);
}

void mainwindow::setThemeStandard()
{

    standardTheme = true;
    QScreen *s = QGuiApplication::primaryScreen();
    QRect screenGeometry = s->geometry();
    int screenStartX = screenGeometry.topLeft().x();
    int sHeight = s->size().height();
    int sWidth = s->size().width();
    setFixedSize(QSize(1300, 250));
    setStyleSheet("background-color:#0c0c0c; border: 2px solid #44aaff");
    int toMoveX = screenStartX + sWidth / 4;
    int toMoveY = sHeight - height() - 10;
    move(toMoveX, toMoveY);

    QPalette pal;
    QColor darkColor(45, 45, 45);
    QColor disabledColor(127, 127, 127);
    QColor white(255, 255, 255);
    pal.setColor(QPalette::Window, darkColor);
    pal.setColor(QPalette::WindowText, white);
    pal.setColor(QPalette::Base, QColor(18, 18, 18));
    pal.setColor(QPalette::AlternateBase, darkColor);
    pal.setColor(QPalette::ToolTipBase, white);
    pal.setColor(QPalette::ToolTipText, darkColor);
    pal.setColor(QPalette::Text, white);
    pal.setColor(QPalette::Disabled, QPalette::Text, disabledColor);
    pal.setColor(QPalette::Button, darkColor);
    pal.setColor(QPalette::ButtonText, white);
    pal.setColor(QPalette::Disabled, QPalette::ButtonText, disabledColor);
    pal.setColor(QPalette::BrightText, Qt::red);
    pal.setColor(QPalette::Link, QColor(42, 130, 218));
    pal.setColor(QPalette::Highlight, QColor(31, 72, 94));
    pal.setColor(QPalette::HighlightedText, white);
    pal.setColor(
            QPalette::Disabled, QPalette::HighlightedText, disabledColor
    );
    QApplication::setPalette(pal);
}

void mainwindow::setThemeEnlarged()
{
    standardTheme = false;
    QScreen *s = QGuiApplication::primaryScreen();
    QRect screenGeometry = s->geometry();
    int screenStartX = screenGeometry.topLeft().x();
    int sHeight = s->size().height();
    int sWidth = s->size().width();
    setFixedSize(1300, sHeight / 2);
    setStyleSheet("background-color:#0c0c0c; border: 2px solid #44aaff");
    int toMoveX = screenStartX + sWidth / 4;
    int toMoveY = sHeight - height() - 10;
    move(toMoveX, toMoveY);

    QPalette pal;
    QColor darkColor(45, 45, 45);
    QColor disabledColor(127, 127, 127);
    QColor white(255, 255, 255);
    pal.setColor(QPalette::Window, darkColor);
    pal.setColor(QPalette::WindowText, white);
    pal.setColor(QPalette::Base, QColor(18, 18, 18));
    pal.setColor(QPalette::AlternateBase, darkColor);
    pal.setColor(QPalette::ToolTipBase, white);
    pal.setColor(QPalette::ToolTipText, darkColor);
    pal.setColor(QPalette::Text, white);
    pal.setColor(QPalette::Disabled, QPalette::Text, disabledColor);
    pal.setColor(QPalette::Button, darkColor);
    pal.setColor(QPalette::ButtonText, white);
    pal.setColor(QPalette::Disabled, QPalette::ButtonText, disabledColor);
    pal.setColor(QPalette::BrightText, Qt::red);
    pal.setColor(QPalette::Link, QColor(42, 130, 218));
    pal.setColor(QPalette::Highlight, QColor(31, 72, 94));
    pal.setColor(QPalette::HighlightedText, white);
    pal.setColor(
            QPalette::Disabled, QPalette::HighlightedText, disabledColor
    );
    QApplication::setPalette(pal);
}

mainwindow::~mainwindow()
{
    m_defHolder->deleteLater();
    m_translationWidget->deleteLater();
    nextButton->deleteLater();
    m_optionsWindow->deleteLater();
    topToolBar->deleteLater();
    rightBar->deleteLater();
    leftTopBar->deleteLater();
}


void mainwindow::handleSelectedTextAudioRequested()
{
    QString s = m_textholder->textCursor().selectedText();
    pyScripts::playSelectedAudio(s);
}

void mainwindow::handleHideRequested()
{
    hide();
    m_defHolder->hide();
    m_translationWidget->hide();
}

void mainwindow::initTranslationWidget()
{
    m_translationWidget = new QWidget();
    m_translationWidget->hide();
    auto *widgetlayout = new QHBoxLayout(m_translationWidget);
    m_translationWidget->setLayout(widgetlayout);
    widgetlayout->setContentsMargins(90, 0, 0, 0);
    m_translationWidget->setStyleSheet("background: #0c0c0c;border: 2px solid #aaff44;");

//    QPixmap map(DirectoryUtils::getConfigDir() + "png/TlepathyCropped.png");
    m_translationWidget->setFixedSize(1300, 250);

    m_translationHolder = new TranslationHolder(m_translationWidget);
    widgetlayout->addWidget(m_translationHolder);
    m_translationHolder->document()->setPageSize(QSizeF(1300,250));

}

void mainwindow::handleTranslationButtonPressed()
{
    QString text = m_textholder->toPlainText();

    if (text != lastTranslation)
    {
        GlobalMediator::getGlobalMediator()->sendJpTextChanged(text);
        lastTranslation = text;
    }

    m_translationWidget->move(pos().x(), y() - m_translationWidget->height() - 50);
    m_translationWidget->setVisible(!m_translationWidget->isVisible());
//    m_translationHolder->show();

}

void mainwindow::handleVisibilityToggled()
{
    if (!isHidden())
    {
        hide();
        m_translationWidget->hide();
        m_defHolder->hide();
    }
    else
    {
        show();
    }
}

void mainwindow::setupButton()
{
    nextButton = new QPushButton(this);
    QPixmap pixmap(DirectoryUtils::getConfigDir() + "png/nextIcon.png");
    nextButton->move(geometry().topRight() + QPoint(570, 130));
    nextButton->setIcon(QIcon(pixmap));
    nextButton->setIconSize(pixmap.size());
    nextButton->setFixedSize(pixmap.size());
    nextButton->setStyleSheet("QPushButton { border: none; }");
    nextButton->show();


    playAudioButton = new QPushButton(topToolBar);
    pixmap = (DirectoryUtils::getConfigDir() + "png/speaker.png");
    playAudioButton->setCursor(Qt::PointingHandCursor);
    playAudioButton->move(10, 8);
    playAudioButton->setIcon(QIcon(pixmap));
    playAudioButton->setIconSize(QSize(15, 15));
    playAudioButton->setFixedSize(QSize(15, 15));
    playAudioButton->setStyleSheet("QPushButton { border: none; }");
    playAudioButton->show();

    translateButton = new QPushButton(topToolBar);
    translateButton->setCursor(Qt::PointingHandCursor);
    pixmap = (DirectoryUtils::getConfigDir() + "png/translate.png");
    translateButton->move(35, 7);
    translateButton->setIcon(QIcon(pixmap));
    translateButton->setIconSize(QSize(20, 20));
    translateButton->setFixedSize(QSize(20, 20));
    translateButton->setStyleSheet("QPushButton { border: none; }");
    translateButton->show();

    minimizeButton = new QPushButton(this);
    pixmap = (DirectoryUtils::getConfigDir() + "png/minimize.png");
    minimizeButton->move(geometry().topRight() + QPoint(627, 100));
    minimizeButton->setIcon(QIcon(pixmap));
    minimizeButton->setIconSize(QSize(15, 15));
    minimizeButton->setFixedSize(QSize(15, 15));
    minimizeButton->setStyleSheet("QPushButton { background: transparent; border: none; }");
    minimizeButton->show();

    rightArrow = new QPushButton(this);
    rightArrow->setCursor(Qt::PointingHandCursor);
    pixmap = (DirectoryUtils::getConfigDir() + "png/arrowRight.png");
    rightArrow->move(1265, height() / 2);
    rightArrow->setIcon(QIcon(pixmap));
    rightArrow->setIconSize(QSize(25, 25));
    rightArrow->setFixedSize(QSize(25, 25));
    rightArrow->setStyleSheet("QPushButton { background: transparent; border: none; }");
    rightArrow->hide();


    leftArrow = new QPushButton(this);
    leftArrow->setCursor(Qt::PointingHandCursor);
    QTransform transform;
    transform.scale(-1, 1);
    pixmap = pixmap.transformed(transform);
    leftArrow->move(10, height() / 2);
    leftArrow->setIcon(QIcon(pixmap));
    leftArrow->setIconSize(QSize(25, 25));
    leftArrow->setFixedSize(QSize(25, 25));
    leftArrow->setStyleSheet("QPushButton { background: transparent; border: none; }");
    leftArrow->hide();


    connect(rightArrow, &QPushButton::pressed, this, &mainwindow::handleRightArrowPressed);
    connect(leftArrow, &QPushButton::pressed, this, &mainwindow::handleLeftArrowPressed);
    connect(nextButton, &QPushButton::pressed, this, &mainwindow::handleFFXIVNextCaptureRequested);
    connect(minimizeButton, &QPushButton::pressed, this, &mainwindow::handleHideRequested);
    connect(translateButton, &QPushButton::pressed, GlobalMediator::getGlobalMediator(),
            &GlobalMediator::sendTranslationButtonPressed);
    connect(playAudioButton, &QPushButton::pressed, GlobalMediator::getGlobalMediator(),
            &GlobalMediator::sendSelectedTextAudioRequested);
}


void mainwindow::handleFFXIVNextCaptureRequested()
{
    hide();
    system("xdotool click 1");
    QTimer::singleShot(200, [this]() { handleCaptureLastArea(); });
}

void mainwindow::handleCaptureScreen()
{
    hide();
    topToolBar->hide();
    QTimer::singleShot(200, [this]() {
        CaptureWindow *capture = new CaptureWindow;
        connect(capture, &CaptureWindow::sendSelectionFinished, this, [&]() {
            m_textholder->setText(pyScripts::areaCapture());
            characterCount += m_textholder->toPlainText().size();
            leftTopBar->setCountText(QString::number(characterCount));
            m_textholder->styleText();
            show();
        });
        capture->showFullScreen();
    });
}

void mainwindow::handleSetSavedArea()
{
    hide();
    topToolBar->hide();
    QTimer::singleShot(200, [this]() {
        CaptureWindow *capture = new CaptureWindow;
        connect(capture, &CaptureWindow::sendSelectionFinished, this, [&](QRect rect) {
            savedCaptureArea = rect;
            m_textholder->setText(pyScripts::areaCapture());
            characterCount += m_textholder->toPlainText().size();
            leftTopBar->setCountText(QString::number(characterCount));
            m_textholder->styleText();
            show();
        });
        capture->showFullScreen();
    });
}

void mainwindow::handleCaptureLastArea()
{
    if (!standardTheme)
    {
        // not recommended due to potential security risks, such as shell injection attacks.
        system("timeout 2 xclip -selection primary -o | xclip -selection clipboard");
//        m_textholder->setText(QString::fromStdString(pyScripts::getClipboard()));
        handleNewInput(QString::fromStdString(pyScripts::getClipboard()));
        characterCount += m_textholder->toPlainText().size();
        leftTopBar->setCountText(QString::number(characterCount));
        m_textholder->styleText();
        show();
        return;
    }

    if (savedCaptureArea.isNull())
    {
        handleSetSavedArea();
        return;
    }
    QPoint cursorPos = QCursor::pos();
    QScreen *cursorScreen = QGuiApplication::screenAt(cursorPos);
    if (cursorScreen == nullptr)
    {
        cursorScreen = QGuiApplication::primaryScreen();
    }

    QPixmap desktopPixmap = cursorScreen->grabWindow(0);

    QPixmap capture = desktopPixmap.copy(savedCaptureArea);
    capture.save(DirectoryUtils::getConfigDir() + "capture.png");
    m_textholder->setText(pyScripts::areaCapture());
    characterCount += m_textholder->toPlainText().size();
    leftTopBar->setCountText(QString::number(characterCount));
    m_textholder->styleText();
    show();
}

void mainwindow::handleThemeChange()
{
    m_translationWidget->hide();
    m_defHolder->hide();
    if (standardTheme)
    {
        setThemeEnlarged();
    }
    else
    {
        setThemeStandard();
    }
}

void mainwindow::moveEvent(QMoveEvent *event)
{
    QWidget::moveEvent(event);
    topToolBar->move((this->geometry().topLeft()) - QPoint(688, 32));
    rightBar->move((this->geometry().topLeft()) - QPoint(618, 4));
    leftTopBar->move((this->geometry().topLeft()) - QPoint(1920, 32));
}

void mainwindow::showEvent(QShowEvent *event)
{
    QWidget::showEvent(event);
    topToolBar->show();
    rightBar->show();
    leftTopBar->show();
}

void mainwindow::hideEvent(QHideEvent *event)
{
    QWidget::hideEvent(event);
    topToolBar->hide();
    rightBar->hide();
    leftTopBar->hide();
    m_translationWidget->hide();
    m_defHolder->hide();
}

void mainwindow::splitStringToFit(const QString &inputString)
{
    qDebug() << "Processing string: " << inputString;
    int maxWidth = m_textholder->viewport()->width();
    int maxHeight = m_textholder->viewport()->height() - 300;
    QFontMetrics fm(m_textholder->font());

    int currentWidth = 0;
    int currentHeight = fm.lineSpacing();
    int lastPunctIndex = -1;
    for (int i = 0; i < inputString.length(); ++i)
    {
        currentWidth += fm.horizontalAdvance(inputString[i]);


        qDebug() << "Index: " << i;
        qDebug() << "Current Width: " << currentWidth;
        qDebug() << "Current Height: " << currentHeight;
        qDebug() << "Current Character: " << inputString.at(i);

        if (inputString.at(i) == QChar(0x3002) || inputString.at(i) == QChar(0xFF01) ||
            inputString.at(i) == QChar(0xFF1F))
        {
            lastPunctIndex = i;
        }
        if (currentWidth >= maxWidth)
        {
            currentWidth = 0;
            currentHeight += fm.lineSpacing();
        }
        if (currentHeight > maxHeight)
        {
            int splitIndex = (lastPunctIndex != -1) ? lastPunctIndex : i;
            subStrings << inputString.left(splitIndex + 1);

            qDebug() << "Splitting at index: " << splitIndex;
            qDebug() << "Substring added: " << inputString.left(splitIndex + 1);

            splitStringToFit(inputString.mid(splitIndex + 1));
            return; // Since we're done splitting this part of the string, we can return
        }
    }
    subStrings << inputString;

    qDebug() << "Substring added: " << inputString;
}

void mainwindow::handleNewInput(const QString &inputString)
{
    if (inputString.isEmpty()) return;
    delete subStringButtonHolder;
    subStrings.clear();
    substringButtons.clear();

    splitStringToFit(inputString);
    if (subStrings.size() > 1)
    {
        subStringButtonHolder = new QWidget(this);
        subStringButtonHolder->setStyleSheet("border: 0px;");
        auto *subStringButtonLayout = new QHBoxLayout(subStringButtonHolder);
        subStringButtonHolder->setLayout(subStringButtonLayout);
        subStringButtonHolder->hide();

        for (int i = 0; i < subStrings.size(); i++)
        {
            auto *button = new SubStringButton(i, subStringButtonHolder);
            substringButtons.push_back(button);
            subStringButtonLayout->addWidget(button);
        }

        currentSubstringButton = substringButtons[0];

        subStringButtonHolder->move(width() / 2 - subStringButtonHolder->width() / 2,
                                    height() - 40);
        subStringButtonHolder->show();

        leftArrow->hide();
        rightArrow->show();
    }

    m_textholder->setText(subStrings[0]);
    m_textholder->styleText();
}

void mainwindow::handleSubstringButtonPressed(int index)
{
    if (currentSubstringButton->m_index == index) return;
    currentSubstringButton->setIcon(emptyCircle);
    if (!currentSubstringButton->m_index) leftArrow->show();
    if (currentSubstringButton->m_index == subStrings.size() - 1) rightArrow->show();
    currentSubstringButton = substringButtons[index];
    substringButtons[index]->setIcon(filledCircle);
    m_textholder->setText(subStrings[index]);
    m_textholder->styleText();
    if (!index) leftArrow->hide();
    if (index == subStrings.size() - 1) rightArrow->hide();
}

void mainwindow::handleRightArrowPressed()
{
    Q_EMIT GlobalMediator::getGlobalMediator()->sendSubstringButtonPressed(
            currentSubstringButton->m_index + 1);

}

void mainwindow::handleLeftArrowPressed()
{
    Q_EMIT GlobalMediator::getGlobalMediator()->sendSubstringButtonPressed(
            currentSubstringButton->m_index - 1);
}

