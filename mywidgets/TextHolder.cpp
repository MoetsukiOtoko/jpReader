#include "TextHolder.h"
#include <QMouseEvent>
#include <QAbstractTextDocumentLayout>
#include <QThreadPool>
#include <QPainter>
#include <QAction>
#include <QMenu>
#include "OverlayWidget.h"
#include <QDebug>
#include <QPoint>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonObject>
#include <QDir>
#include <QCoreApplication>
#include <QDesktopServices>

#include "../util/constants.h"
#include "../util/globalmediator.h"
#include "../util/utils.h"

#define MAX_QUERY_LENGTH 37

TextHolder::TextHolder(QWidget *parent)
        : QTextEdit(parent),
          m_dictionary(GlobalMediator::getGlobalMediator()->getDictionary()),
          m_findDelay(new QTimer(this))
{
    m_overlayWidget = new OverlayWidget(this);
    GlobalMediator::getGlobalMediator()->setTextHolder(this);
    initFuriganaCreationWidget();
    loadFuriganaExpressions();
    teFont = QFont("NotoSansCJK-Regular");
    setThemeStandard();
    setMouseTracking(true);
    setCursor(Qt::ArrowCursor);
    setText("あの老人もどうせ店員の愛想が悪かったとか、欲しい品物がなかったとか、あるいはもっと理不尽な理由で"
            "怒鳴っているのだろうと想像がつく。");
    m_findDelay->setSingleShot(true);
    setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
    setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
    if (m_dictionary == nullptr)
    {
        m_dictionary = new Dictionary;
    }
    setReadOnly(true);
//    teFont.setPointSize(30);
    styleText();
    move(pos() + QPoint(30,0));
    QTimer::singleShot(0, this, SLOT(setSavedFurigana()));

    connect(m_findDelay, &QTimer::timeout, this, &TextHolder::findTerms);
    connect(this, &QTextEdit::textChanged, GlobalMediator::getGlobalMediator(),
            [&]() {
                GlobalMediator::getGlobalMediator()->sendJpTextChanged(document()->toPlainText());
            });
    connect(GlobalMediator::getGlobalMediator(), &GlobalMediator::sendKanaClicked, this,
            &TextHolder::superscriptText);
    connect(GlobalMediator::getGlobalMediator(), &GlobalMediator::sendTermClicked, this,
            &TextHolder::subscriptText);
    connect(this, &QTextEdit::textChanged, m_overlayWidget, &OverlayWidget::clearOverlay);
    connect(furiganaCreationWidget, &FuriganaCreatorPopup::sendOkButtonPushed, this,
            &TextHolder::addFurigana);
    connect(this, &QTextEdit::textChanged, this, &TextHolder::setSavedFurigana);
    connect(GlobalMediator::getGlobalMediator(), &GlobalMediator::sendShuttdown, this,
            &TextHolder::saveFuriganaExpressions);
    connect(furiganaCreationWidget, &FuriganaCreatorPopup::sendClearButtonPushed, this,
            [&]() {
                furiganaCreationWidget->hide();
                furiMap.remove(furiganaCreationWidget->expression);
                m_overlayWidget->clearOverlay();
                setSavedFurigana();
            });
    connect(GlobalMediator::getGlobalMediator(), &GlobalMediator::sendChangeTheme, this,
            &TextHolder::handleThemeChange);
}

void TextHolder::mouseMoveEvent(QMouseEvent *event)
{
    QTextEdit::mouseMoveEvent(event);
    int position = getPosition(event->pos());
    if (position == -1)
    {
        m_currentIndex = -1;
        return;
    }
    else if (position == m_currentIndex)
    {
        return;
    }
    m_currentIndex = position;
    m_findDelay->start(200);
}

int TextHolder::getPosition(const QPoint &pos) const
{
    return document()->documentLayout()->hitTest(
            pos, Qt::ExactHit
    );
}

void TextHolder::findTerms()
{
    if (m_currentIndex == -1) return;
    int index = m_currentIndex;
    QString queryStr = toPlainText();
    queryStr.remove(0, index);
    queryStr.truncate(MAX_QUERY_LENGTH);
    if (queryStr.isEmpty() || queryStr[0].isSpace())
    {
        return;
    }

    QString subtitleText = toPlainText();
    QThreadPool::globalInstance()->start(
            [=] {
                /* Look for Terms */
                SharedTermList terms = m_dictionary->searchTerms(
                        queryStr, subtitleText, index, &m_currentIndex
                );
                if (terms == nullptr)
                {
                    /* noop */
                }
                else if (index != m_currentIndex)
                {
                    /* Early Exit */
                    return;
                }
                else if (terms->isEmpty())
                {
                    /* No Terms */
                    terms = nullptr;
                }
                else
                {
                    m_lastEmittedIndex = index;
                    m_lastEmittedSize = terms->first()->clozeBody.size();
                }

                /* Look for Kanji */
                SharedKanji kanji = nullptr;
                if (CharacterUtils::isKanji(queryStr[0]))
                {
                    kanji = m_dictionary->searchKanji(queryStr[0]);
                    if (kanji)
                    {
                        kanji->sentence = subtitleText;
                        kanji->clozePrefix = subtitleText.left(index);
                        kanji->clozeBody = kanji->character;
                        kanji->clozeSuffix = subtitleText.mid(index + 1);
                        if (terms == nullptr)
                        {
                            m_lastEmittedIndex = index;
                            m_lastEmittedSize = 1;
                        }
                    }
                }

                Q_EMIT GlobalMediator::getGlobalMediator()
                    ->termsChanged(terms, kanji);
            }
    );
}

void TextHolder::leaveEvent(QEvent *event)
{
    QWidget::leaveEvent(event);
    m_findDelay->stop();
    m_currentIndex = -1;
}

QString TextHolder::selectText()
{
    QTextCursor q = textCursor();
    q.setPosition(m_lastEmittedIndex);
    q.setPosition(m_lastEmittedIndex + m_lastEmittedSize, QTextCursor::KeepAnchor);
    setTextCursor(q);
    return q.selectedText();
}

void TextHolder::styleText()
{
    setFont(teFont);
    QTextBlockFormat blockFormat = textCursor().blockFormat();
    blockFormat.setLineHeight(175, QTextBlockFormat::ProportionalHeight);
    textCursor().setBlockFormat(blockFormat);
}

void TextHolder::mousePressEvent(QMouseEvent *event)
{
    QTextEdit::mousePressEvent(event);
    if (event->button() == Qt::LeftButton)
    {
        Q_EMIT GlobalMediator::getGlobalMediator()->sendHideDefinition();
    }
    furiganaCreationWidget->hide();
}

void TextHolder::resizeEvent(QResizeEvent *event)
{
    QTextEdit::resizeEvent(event);
    m_overlayWidget->resize(size());
    m_overlayWidget->move(pos());
}

void TextHolder::subscriptText(const QString &script)
{
    if (m_lastEmittedIndex != -1)
    {
        QTextCursor q = textCursor();
        q.setPosition(m_lastEmittedIndex);
        QRect rect = cursorRect(q);
//        QPoint point = rect.bottomLeft() + QPoint(80, 31);
        QPoint point = rect.bottomLeft() + QPoint(-50, 60);
        m_overlayWidget->addOverlayText(script, point, false);
    }

}

void TextHolder::superscriptText(const QString &script)
{
    if (m_lastEmittedIndex != -1)
    {
        QTextCursor q = textCursor();
        q.setPosition(m_lastEmittedIndex);
        QRect rect = cursorRect(q);
        QPoint point = rect.topLeft() + QPoint(-50, 52);
        m_overlayWidget->addOverlayText(script, point, true);
    }
}

void TextHolder::contextMenuEvent(QContextMenuEvent *event)
{
    QMenu *menu = new QMenu();
    menu->setStyleSheet("background-color: rgba(69, 69, 69, 100%); color: white;");


    QAction *copyAction = menu->addAction(tr("Copy"));
    connect(copyAction, &QAction::triggered, this, &QTextEdit::copy);

    QAction *googleSearch = new QAction("Search Google", this);
    connect(googleSearch, &QAction::triggered, [this]() {
        QDesktopServices::openUrl(QUrl("https://www.google.com/search?q=" + textCursor().selectedText()));
    });

    QAction *addFuri = new QAction("Add Furigana", this);
    connect(addFuri, &QAction::triggered, [this]() {
        displayAddFuriganaWindow();
    });

    QAction *saveArea = new QAction("Select Capture Area", this);
    connect(saveArea, &QAction::triggered, [this]() { Q_EMIT sendNewSavedAreaRequested(); });

    QAction *changeTheme = new QAction("Change Theme", this);
    connect(changeTheme, &QAction::triggered,
            []() { Q_EMIT GlobalMediator::getGlobalMediator()->sendChangeTheme(); });

    QAction *settings = new QAction("Settings", this);
    connect(settings, &QAction::triggered,
            []() { Q_EMIT GlobalMediator::getGlobalMediator()->menuShowOptions(); });

    QAction *shutdown = new QAction("Shutdown", this);
    connect(shutdown, &QAction::triggered, []() {
        QCoreApplication::quit();
    });

    menu->addAction(googleSearch);
    menu->addAction(addFuri);
    menu->addAction(saveArea);
    menu->addAction(changeTheme);
    menu->addAction(settings);
    menu->addAction(shutdown);
    menu->exec(event->globalPos());
    delete menu;
}

void TextHolder::displayAddFuriganaWindow()
{
    QString text = textCursor().selectedText();
    if (text.isEmpty()) return;
    furiganaCreationWidget->setExpression(text);
    furiganaCreationWidget->move(QCursor::pos() - QPoint(0, furiganaCreationWidget->height()));
    system("ibus engine anthy");
    furiganaCreationWidget->show();
}

void TextHolder::initFuriganaCreationWidget()
{
    furiganaCreationWidget = new FuriganaCreatorPopup();
    furiganaCreationWidget->hide();
}

TextHolder::~TextHolder()
{
    furiganaCreationWidget->deleteLater();
    saveFuriganaExpressions();
}

void TextHolder::addFurigana()
{
    furiganaCreationWidget->hide();
    if (furiganaCreationWidget->furiMap.isEmpty()) return;
    QTextCursor q = document()->find(furiganaCreationWidget->expression);
    int index = q.selectionStart();
    QMap<int, QString> map;
    for (auto it = furiganaCreationWidget->furiMap.begin();
         it != furiganaCreationWidget->furiMap.end(); ++it)
    {
        QFontMetrics teMetrics(teFont);
        int keyWidth = teMetrics.horizontalAdvance(furiganaCreationWidget->expression[it.key()]);
        QFontMetrics superScriptMetrics(m_overlayWidget->superScriptFont);
        int superScriptWidth = superScriptMetrics.horizontalAdvance(it.value()->text());
        int x = (keyWidth - superScriptWidth) / 2;
        int innerIndex = index + it.key();
        q.setPosition(innerIndex);
        QRect rect = cursorRect(q);
//        QPoint point = rect.topLeft() + QPoint(80 + x, 30);
        QPoint point = rect.topLeft() + QPoint(x - 50, 52);
        m_overlayWidget->addOverlayText(it.value()->text(), point, true);
        map.insert(it.key(), it.value()->text());
    }
    furiMap.insert(furiganaCreationWidget->expression, map);
//    show(); //// (6/19/23) TODO: fix random hack. Why is this hiding?

}

void TextHolder::hideEvent(QHideEvent *event)
{
    QWidget::hideEvent(event);
}

void TextHolder::setSavedFurigana()
{
    QTextCursor q(document());

    for (auto it = furiMap.begin(); it != furiMap.end(); ++it)
    {
        q = document()->find(it.key(), 0);
        while (!q.isNull())
        {
            q.setPosition(q.position() - it.key().length());
            int startPos = q.position();

            for (auto i = it.value().begin(); i != it.value().end(); ++i)
            {
                int innerIndex = startPos + i.key();
//                qDebug() << innerIndex;
                q.setPosition(innerIndex);
//                qDebug() << document()->toPlainText()[innerIndex];
                QRect rect = cursorRect(q);
                QFontMetrics teMetrics(teFont);
                int keyWidth = teMetrics.horizontalAdvance(it.key()[i.key()]);
                QFontMetrics superScriptMetrics(m_overlayWidget->superScriptFont);
                int superScriptWidth = superScriptMetrics.horizontalAdvance(i.value());
                int x = (keyWidth - superScriptWidth) / 2;
//                qDebug() << rect.topLeft().x();
                QPoint point = rect.topLeft() + QPoint(x - 50, 52);
                m_overlayWidget->addOverlayText(i.value(), point, true);
            }

            q = document()->find(it.key(), startPos + it.key().size());

        }
    }
}

void TextHolder::saveFuriganaExpressions()
{
    QString dir = DirectoryUtils::getConfigDir() + "settings/";
    QJsonObject jsonObj;
    for (auto it = furiMap.begin(); it != furiMap.end(); ++it)
    {
        QJsonObject innerObj;
        for (auto innerIt = it.value().begin(); innerIt != it.value().end(); ++innerIt)
        {
            innerObj[QString::number(innerIt.key())] = innerIt.value();
        }
        jsonObj[it.key()] = innerObj;
    }

    QJsonDocument jsonDoc(jsonObj);

    QFile saveFile(dir + "furiganaExpressions.json");
    if (saveFile.open(QIODevice::WriteOnly))
    {
        saveFile.write(jsonDoc.toJson());
        saveFile.close();
    }
}

void TextHolder::loadFuriganaExpressions()
{
    QString dir = DirectoryUtils::getConfigDir() + "settings/";
    QFile loadFile(dir + "furiganaExpressions.json");
    if (loadFile.open(QIODevice::ReadOnly))
    {
        QByteArray jsonData = loadFile.readAll();
        QJsonDocument jsonDoc(QJsonDocument::fromJson(jsonData));

        QJsonObject jsonObj = jsonDoc.object();
        for (auto it = jsonObj.begin(); it != jsonObj.end(); ++it)
        {
            QString key = it.key();
            QMap<int, QString> innerMap;
            QJsonObject innerObj = it.value().toObject();
            for (auto innerIt = innerObj.begin(); innerIt != innerObj.end(); ++innerIt)
            {
                int innerKey = innerIt.key().toInt();
                QString innerValue = innerIt.value().toString();
                innerMap[innerKey] = innerValue;
            }
            furiMap[key] = innerMap;
        }
        loadFile.close();
    }
}

void TextHolder::setThemeStandard()
{
    standardTheme = true;
    teFont.setPointSize(21);
    setStyleSheet(
            "color: #44aaff; background-color: transparent; padding-top: 50px; padding-bottom: 50px; border: 0px;");
}

void TextHolder::setThemeEnlarged()
{
    standardTheme = false;
    teFont.setPointSize(30);
    setStyleSheet(
            "color: #44aaff; background-color: transparent; padding-top: 50px; padding-bottom: 50px; border: 0px;");

}

void TextHolder::handleThemeChange()
{
    if (standardTheme)
    {
        setThemeEnlarged();
    }
    else
    {
        setThemeStandard();
    }
    styleText();
}

void TextHolder::moveEvent(QMoveEvent *event)
{
    QWidget::moveEvent(event);
}







