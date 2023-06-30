#ifndef JPREADER_MAINWINDOW_H
#define JPREADER_MAINWINDOW_H

#include <QMainWindow>
#include <QHBoxLayout>
#include <QEventLoop>
#include <QPushButton>
#include "mywidgets/TextHolder.h"
#include "util/globalmediator.h"
#include "definition/definitionwidget.h"
#include "dict/dictionary.h"
#include "anki/ankiclient.h"
#include "mywidgets/TranslationHolder.h"
#include "gui/widgets/settings/optionswindow.h"
#include "TopBar.h"
#include "RightBar.h"
#include "LeftTopBar.h"
#include "SubStringButton.h"

class mainwindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit mainwindow(QWidget *parent = nullptr);
    ~mainwindow() override;

public
    Q_SLOTS:
    void setTerms(SharedTermList terms, SharedKanji kanji);
    void handleSelectedTextAudioRequested();
    void handleHideRequested();
    void handleFFXIVNextCaptureRequested();
    void handleTranslationButtonPressed();
    void handleVisibilityToggled();
    void handleCaptureScreen();
    void handleSetSavedArea();
    void handleCaptureLastArea();
    void handleThemeChange();


Q_SIGNALS:

protected:
    void resizeEvent(QResizeEvent *event) override;
    void moveEvent(QMoveEvent *event) override;
    void showEvent(QShowEvent *event) override;
    void hideEvent(QHideEvent *event) override;

private:

    bool standardTheme = true;
    OptionsWindow *m_optionsWindow;
    QWidget *m_translationWidget;
    TranslationHolder *m_translationHolder;
    QWidget *m_defHolder;
    QHBoxLayout *m_defHolderLayout;
    QWidget *m_contentwidget;
    QHBoxLayout *m_contentlayout;
    TextHolder *m_textholder;
    Dictionary *m_dictionary;
    DefinitionWidget *m_definition;
    AnkiClient *m_anki;
    QEventLoop m_loop;
    QPushButton *nextButton;
    QPushButton *minimizeButton;
    QPushButton *playAudioButton;
    QPushButton *translateButton;
    QPushButton *rightArrow = nullptr;
    QPushButton *leftArrow = nullptr;

    QRect savedCaptureArea;
    TopBar *topToolBar;
    RightBar *rightBar;
    LeftTopBar *leftTopBar;
    int characterCount = 0;

    QString lastTranslation = "";

    QString newInput;
    QStringList subStrings;
    QWidget *subStringButtonHolder = nullptr;
    SubStringButton *currentSubstringButton = nullptr;
    QVector<SubStringButton*>substringButtons;

    QPixmap filledCircle;
    QPixmap emptyCircle;

private:
    void setDefinitionWidgetLocation();
    void setThemeStandard();
    void setThemeEnlarged();
    void initTranslationWidget();
    void setupButton();
    void handleNewInput(const QString& inputString);
    void splitStringToFit(const QString& inputString);
    void handleSubstringButtonPressed(int index);
    void handleRightArrowPressed();
    void handleLeftArrowPressed();



};

#endif // JPREADER_MAINWINDOW_H
