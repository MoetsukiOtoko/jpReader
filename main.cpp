#include <QApplication>
#include <QGuiApplication>
#include <QPushButton>
#include <QDir>
#include <QFile>
#include <QMessageBox>
#include <QScreen>
#include <QHotkey>
#include <QWidget>

#include "mainwindow.h"
#include "util/globalmediator.h"
#include "definition/definitionwidget.h"
#include "audio/audioplayer.h"
#include "keyBinds.h"

static void registerMetaTypes()
{
    qRegisterMetaType<SharedTerm>("SharedTerm");
    qRegisterMetaType<SharedTermList>("SharedTermList");
    qRegisterMetaType<SharedKanji>("SharedKanji");
}


int main(int argc, char *argv[])
{
    QApplication App(argc, argv);

    QHotkey autoCaptureKey(QKeySequence("Ctrl+M"), true, &App);
    QHotkey areaCaptureKey(QKeySequence("Ctrl+N"), true, &App);
    QHotkey toggleShowKey(QKeySequence("Ctrl+,"), true, &App);

    QDir configDir(QString(getenv("HOME")) + "/.config/jpReader");
    configDir.rename("./dict/dictionaries.sqlite", "./dictionaries.sqlite");

    QDir dictDir(configDir.absolutePath() + "/dict");
    dictDir.removeRecursively();

    if (!QDir(DirectoryUtils::getDictionaryResourceDir()).exists() &&
        !QDir().mkdir(DirectoryUtils::getDictionaryResourceDir()))
    {
        QMessageBox message;
        message.critical(
                0, "Error Creating Resource Directory",
                "Could not make resource directory at " +
                DirectoryUtils::getDictionaryResourceDir()
        );
        return EXIT_FAILURE;
    }

    registerMetaTypes();
    setlocale(LC_NUMERIC, "C"); // mpv requires this



    GlobalMediator::createGlobalMediator();
    GlobalMediator::getGlobalMediator()->setAudioPlayer(new AudioPlayer);

    QWidget::connect(&autoCaptureKey, &QHotkey::activated, qApp,
                     [](){
        GlobalMediator::getGlobalMediator()->sendFFXIVAutoCaptureRequested();});

    QWidget::connect(&areaCaptureKey, &QHotkey::activated, qApp,
                     [](){
        GlobalMediator::getGlobalMediator()->sendAreaCaptureRequested();});

//    keyBinds *kb = new keyBinds();
//    App.installEventFilter(kb);

    mainwindow *main = new mainwindow();
    main->show();

    QWidget::connect(GlobalMediator::getGlobalMediator(), &GlobalMediator::sendHideRequested,
                     main, &mainwindow::handleHideRequested);
    QWidget::connect(GlobalMediator::getGlobalMediator(), &GlobalMediator::sendSelectedTextAudioRequested,
                     main, &mainwindow::handleSelectedTextAudioRequested);
    QWidget::connect(GlobalMediator::getGlobalMediator(), &GlobalMediator::sendFFXIVAutoCaptureRequested,
                     main, &mainwindow::handleCaptureLastArea);
    QWidget::connect(GlobalMediator::getGlobalMediator(), &GlobalMediator::sendAreaCaptureRequested,
                     main, &mainwindow::handleCaptureScreen);
    QWidget::connect(&toggleShowKey, &QHotkey::activated, main, &mainwindow::handleVisibilityToggled);
    QWidget::connect(&App, &QCoreApplication::aboutToQuit, GlobalMediator::getGlobalMediator(), [](){GlobalMediator::getGlobalMediator()->sendShuttdown();});

//    QString dic1 = "/home/phil/_cprojects/jpReader/dictionaries/[Bilingual] JMdict Extra (Recommended).zip";
//    QString dic2 = "/home/phil/_cprojects/jpReader/dictionaries/[Freq] JPDB (Recommended).zip";
//    QString dic3 = "/home/phil/_cprojects/jpReader/dictionaries/[Kanji] KANJIDIC (English) (Recommended).zip";
//    m_dictionary->addDictionary(dic1);
//    m_dictionary->addDictionary(dic2);
//    m_dictionary->addDictionary(dic3);

    int ret = App.exec();
    main->deleteLater();
    delete GlobalMediator::getGlobalMediator()->getAudioPlayer();
    delete GlobalMediator::getGlobalMediator()->getDictionary();
    delete GlobalMediator::getGlobalMediator();
    return ret;
}
