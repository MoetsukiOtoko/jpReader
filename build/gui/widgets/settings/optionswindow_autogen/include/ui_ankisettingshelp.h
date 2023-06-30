/********************************************************************************
** Form generated from reading UI file 'ankisettingshelp.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANKISETTINGSHELP_H
#define UI_ANKISETTINGSHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AnkiSettingsHelp
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *labelExplanation;
    QTabWidget *tabWidget;
    QWidget *tabTermMarkers;
    QVBoxLayout *verticalLayout_2;
    QGridLayout *layoutTerm;
    QLabel *labelTermClozePrefix;
    QLabel *labelTermScreenshotEx;
    QLabel *labelTermTitleEx;
    QLabel *labelTermGlossary;
    QLabel *labelTermPitchGraphEx;
    QLabel *labelTermReading;
    QLabel *labelTermContextEx;
    QLabel *labelTermSentence;
    QLabel *labelTermContext2Ex;
    QLabel *labelTermReadingEx;
    QLabel *labelTermExpression;
    QLabel *labelTermClozeBody;
    QLabel *labelTermScreenshotVideo;
    QLabel *labelTermContext;
    QLabel *labelTermSentence2Ex;
    QLabel *labelTermClipboardEx;
    QLabel *labelTermPitch;
    QLabel *labelTermClozeSuffix;
    QLabel *labelTermClipboard;
    QLabel *labelTermAudioContextEx;
    QLabel *labelTermAudio;
    QLabel *labelTermPitchPositionEx;
    QLabel *labelTermSentence2;
    QLabel *labelTermGlossaryEx;
    QLabel *labelTermClozePrefixEx;
    QLabel *labelTermFuriganaPlain;
    QLabel *labelTermAudioEx;
    QLabel *labelTermFrequenciesEx;
    QLabel *labelTermGlossaryBriefEx;
    QLabel *labelTermPitchGraph;
    QLabel *labelTermGlossaryBrief;
    QLabel *labelTermTagsEx;
    QLabel *labelTermFuriganaPlainEx;
    QLabel *labelTermAudioMediaEx;
    QLabel *labelTermAudioMedia;
    QLabel *labelTermAudioContext;
    QLabel *labelTermFrequencies;
    QLabel *labelTermPitchPosition;
    QLabel *labelTermScreenshotMedia;
    QLabel *labelTermClozeSuffixEx;
    QLabel *labelTermClozeBodyEx;
    QLabel *labelTermTitle;
    QLabel *labelTermPitchEx;
    QLabel *labelTermSentenceEx;
    QLabel *labelTermFurigana;
    QLabel *labelTermExpressionEx;
    QLabel *labelTermFuriganaEx;
    QLabel *labelTermTags;
    QLabel *labelTermScreenshot;
    QLabel *labelTermContext2;
    QLabel *labelGlossaryCompact;
    QLabel *labelGlossaryCompactEx;
    QWidget *tabKanjiMarkers;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *layoutKanji;
    QLabel *labelKanjiContext2Ex;
    QLabel *labelKanjiContextEx;
    QLabel *labelKanjiClozeBody;
    QLabel *labelKanjiContext;
    QLabel *labelKanjiContext2;
    QLabel *labelKanjiSentenceEx;
    QLabel *labelStrokeCount;
    QLabel *labelKanjiStrokesEx;
    QLabel *labelKanjiClozePrefixEx;
    QLabel *labelKanjiSentence2;
    QLabel *labelKanjiFrequencies;
    QLabel *labelKanjiAudioContext;
    QLabel *labelKanjiClozeSuffixEx;
    QLabel *labelKanjiTags;
    QLabel *labelKanjiFrequenciesEx;
    QLabel *labelKanjiScreenshot;
    QLabel *labelKanjiKunyomi;
    QLabel *labelKanjiCharacterEx;
    QLabel *labelKanjiScreenshotEx;
    QLabel *labelKanjiTagsEx;
    QLabel *labelKanjiCharacter;
    QLabel *labelKanjiScreenshotVideo;
    QLabel *labelKanjiClozeSuffix;
    QLabel *labelKanjiScreenshotMedia;
    QLabel *labelKanjiAudioMediaEx;
    QLabel *labelKanjiClozeBodyEx;
    QLabel *labelKanjiClozePrefix;
    QLabel *labelKanjiTitle;
    QLabel *labelKanjiAudioMedia;
    QLabel *labelKanjiOnyomiEx;
    QLabel *labelKanjiSentence;
    QLabel *labelKanjiGlossaryEx;
    QLabel *labelKanjiGlossary;
    QLabel *labelKanjiSentence2Ex;
    QLabel *labelKanjiAudioContextEx;
    QLabel *labelKanjiKunyomiEx;
    QLabel *labelKanjiTitleEx;
    QLabel *labelKanjiOnyomi;
    QLabel *labelKanjiClipboard;
    QLabel *labelKanjiClipboardEx;
    QSpacerItem *spacerKanji;

    void setupUi(QWidget *AnkiSettingsHelp)
    {
        if (AnkiSettingsHelp->objectName().isEmpty())
            AnkiSettingsHelp->setObjectName(QString::fromUtf8("AnkiSettingsHelp"));
        AnkiSettingsHelp->resize(858, 806);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AnkiSettingsHelp->sizePolicy().hasHeightForWidth());
        AnkiSettingsHelp->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(AnkiSettingsHelp);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        labelExplanation = new QLabel(AnkiSettingsHelp);
        labelExplanation->setObjectName(QString::fromUtf8("labelExplanation"));
        labelExplanation->setWordWrap(false);

        verticalLayout->addWidget(labelExplanation);

        tabWidget = new QTabWidget(AnkiSettingsHelp);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabTermMarkers = new QWidget();
        tabTermMarkers->setObjectName(QString::fromUtf8("tabTermMarkers"));
        verticalLayout_2 = new QVBoxLayout(tabTermMarkers);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        layoutTerm = new QGridLayout();
        layoutTerm->setObjectName(QString::fromUtf8("layoutTerm"));
        labelTermClozePrefix = new QLabel(tabTermMarkers);
        labelTermClozePrefix->setObjectName(QString::fromUtf8("labelTermClozePrefix"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelTermClozePrefix->setFont(font);
        labelTermClozePrefix->setAlignment(Qt::AlignCenter);
        labelTermClozePrefix->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermClozePrefix, 5, 0, 1, 1);

        labelTermScreenshotEx = new QLabel(tabTermMarkers);
        labelTermScreenshotEx->setObjectName(QString::fromUtf8("labelTermScreenshotEx"));

        layoutTerm->addWidget(labelTermScreenshotEx, 20, 1, 1, 1);

        labelTermTitleEx = new QLabel(tabTermMarkers);
        labelTermTitleEx->setObjectName(QString::fromUtf8("labelTermTitleEx"));

        layoutTerm->addWidget(labelTermTitleEx, 25, 1, 1, 1);

        labelTermGlossary = new QLabel(tabTermMarkers);
        labelTermGlossary->setObjectName(QString::fromUtf8("labelTermGlossary"));
        labelTermGlossary->setFont(font);
        labelTermGlossary->setAlignment(Qt::AlignCenter);
        labelTermGlossary->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermGlossary, 13, 0, 1, 1);

        labelTermPitchGraphEx = new QLabel(tabTermMarkers);
        labelTermPitchGraphEx->setObjectName(QString::fromUtf8("labelTermPitchGraphEx"));

        layoutTerm->addWidget(labelTermPitchGraphEx, 17, 1, 1, 1);

        labelTermReading = new QLabel(tabTermMarkers);
        labelTermReading->setObjectName(QString::fromUtf8("labelTermReading"));
        labelTermReading->setFont(font);
        labelTermReading->setAlignment(Qt::AlignCenter);
        labelTermReading->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermReading, 19, 0, 1, 1);

        labelTermContextEx = new QLabel(tabTermMarkers);
        labelTermContextEx->setObjectName(QString::fromUtf8("labelTermContextEx"));

        layoutTerm->addWidget(labelTermContextEx, 7, 1, 1, 1);

        labelTermSentence = new QLabel(tabTermMarkers);
        labelTermSentence->setObjectName(QString::fromUtf8("labelTermSentence"));
        labelTermSentence->setFont(font);
        labelTermSentence->setAlignment(Qt::AlignCenter);
        labelTermSentence->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermSentence, 22, 0, 1, 1);

        labelTermContext2Ex = new QLabel(tabTermMarkers);
        labelTermContext2Ex->setObjectName(QString::fromUtf8("labelTermContext2Ex"));

        layoutTerm->addWidget(labelTermContext2Ex, 8, 1, 1, 1);

        labelTermReadingEx = new QLabel(tabTermMarkers);
        labelTermReadingEx->setObjectName(QString::fromUtf8("labelTermReadingEx"));
        labelTermReadingEx->setWordWrap(false);

        layoutTerm->addWidget(labelTermReadingEx, 19, 1, 1, 1);

        labelTermExpression = new QLabel(tabTermMarkers);
        labelTermExpression->setObjectName(QString::fromUtf8("labelTermExpression"));
        labelTermExpression->setFont(font);
        labelTermExpression->setAlignment(Qt::AlignCenter);
        labelTermExpression->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermExpression, 9, 0, 1, 1);

        labelTermClozeBody = new QLabel(tabTermMarkers);
        labelTermClozeBody->setObjectName(QString::fromUtf8("labelTermClozeBody"));
        labelTermClozeBody->setFont(font);
        labelTermClozeBody->setAlignment(Qt::AlignCenter);
        labelTermClozeBody->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermClozeBody, 4, 0, 1, 1);

        labelTermScreenshotVideo = new QLabel(tabTermMarkers);
        labelTermScreenshotVideo->setObjectName(QString::fromUtf8("labelTermScreenshotVideo"));

        layoutTerm->addWidget(labelTermScreenshotVideo, 21, 1, 1, 1);

        labelTermContext = new QLabel(tabTermMarkers);
        labelTermContext->setObjectName(QString::fromUtf8("labelTermContext"));
        labelTermContext->setFont(font);
        labelTermContext->setAlignment(Qt::AlignCenter);
        labelTermContext->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermContext, 7, 0, 1, 1);

        labelTermSentence2Ex = new QLabel(tabTermMarkers);
        labelTermSentence2Ex->setObjectName(QString::fromUtf8("labelTermSentence2Ex"));

        layoutTerm->addWidget(labelTermSentence2Ex, 23, 1, 1, 1);

        labelTermClipboardEx = new QLabel(tabTermMarkers);
        labelTermClipboardEx->setObjectName(QString::fromUtf8("labelTermClipboardEx"));

        layoutTerm->addWidget(labelTermClipboardEx, 3, 1, 1, 1);

        labelTermPitch = new QLabel(tabTermMarkers);
        labelTermPitch->setObjectName(QString::fromUtf8("labelTermPitch"));
        labelTermPitch->setFont(font);
        labelTermPitch->setAlignment(Qt::AlignCenter);
        labelTermPitch->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermPitch, 16, 0, 1, 1);

        labelTermClozeSuffix = new QLabel(tabTermMarkers);
        labelTermClozeSuffix->setObjectName(QString::fromUtf8("labelTermClozeSuffix"));
        labelTermClozeSuffix->setFont(font);
        labelTermClozeSuffix->setAlignment(Qt::AlignCenter);
        labelTermClozeSuffix->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermClozeSuffix, 6, 0, 1, 1);

        labelTermClipboard = new QLabel(tabTermMarkers);
        labelTermClipboard->setObjectName(QString::fromUtf8("labelTermClipboard"));
        labelTermClipboard->setFont(font);
        labelTermClipboard->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermClipboard, 3, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        labelTermAudioContextEx = new QLabel(tabTermMarkers);
        labelTermAudioContextEx->setObjectName(QString::fromUtf8("labelTermAudioContextEx"));

        layoutTerm->addWidget(labelTermAudioContextEx, 2, 1, 1, 1);

        labelTermAudio = new QLabel(tabTermMarkers);
        labelTermAudio->setObjectName(QString::fromUtf8("labelTermAudio"));
        labelTermAudio->setFont(font);
        labelTermAudio->setAlignment(Qt::AlignCenter);
        labelTermAudio->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermAudio, 0, 0, 1, 1);

        labelTermPitchPositionEx = new QLabel(tabTermMarkers);
        labelTermPitchPositionEx->setObjectName(QString::fromUtf8("labelTermPitchPositionEx"));

        layoutTerm->addWidget(labelTermPitchPositionEx, 18, 1, 1, 1);

        labelTermSentence2 = new QLabel(tabTermMarkers);
        labelTermSentence2->setObjectName(QString::fromUtf8("labelTermSentence2"));
        labelTermSentence2->setFont(font);
        labelTermSentence2->setAlignment(Qt::AlignCenter);
        labelTermSentence2->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermSentence2, 23, 0, 1, 1);

        labelTermGlossaryEx = new QLabel(tabTermMarkers);
        labelTermGlossaryEx->setObjectName(QString::fromUtf8("labelTermGlossaryEx"));
        labelTermGlossaryEx->setWordWrap(false);

        layoutTerm->addWidget(labelTermGlossaryEx, 13, 1, 1, 1);

        labelTermClozePrefixEx = new QLabel(tabTermMarkers);
        labelTermClozePrefixEx->setObjectName(QString::fromUtf8("labelTermClozePrefixEx"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelTermClozePrefixEx->sizePolicy().hasHeightForWidth());
        labelTermClozePrefixEx->setSizePolicy(sizePolicy1);
        labelTermClozePrefixEx->setWordWrap(false);

        layoutTerm->addWidget(labelTermClozePrefixEx, 5, 1, 1, 1);

        labelTermFuriganaPlain = new QLabel(tabTermMarkers);
        labelTermFuriganaPlain->setObjectName(QString::fromUtf8("labelTermFuriganaPlain"));
        labelTermFuriganaPlain->setFont(font);
        labelTermFuriganaPlain->setAlignment(Qt::AlignCenter);
        labelTermFuriganaPlain->setWordWrap(false);
        labelTermFuriganaPlain->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermFuriganaPlain, 11, 0, 1, 1);

        labelTermAudioEx = new QLabel(tabTermMarkers);
        labelTermAudioEx->setObjectName(QString::fromUtf8("labelTermAudioEx"));
        labelTermAudioEx->setWordWrap(false);

        layoutTerm->addWidget(labelTermAudioEx, 0, 1, 1, 1);

        labelTermFrequenciesEx = new QLabel(tabTermMarkers);
        labelTermFrequenciesEx->setObjectName(QString::fromUtf8("labelTermFrequenciesEx"));

        layoutTerm->addWidget(labelTermFrequenciesEx, 12, 1, 1, 1);

        labelTermGlossaryBriefEx = new QLabel(tabTermMarkers);
        labelTermGlossaryBriefEx->setObjectName(QString::fromUtf8("labelTermGlossaryBriefEx"));

        layoutTerm->addWidget(labelTermGlossaryBriefEx, 14, 1, 1, 1);

        labelTermPitchGraph = new QLabel(tabTermMarkers);
        labelTermPitchGraph->setObjectName(QString::fromUtf8("labelTermPitchGraph"));
        labelTermPitchGraph->setFont(font);
        labelTermPitchGraph->setAlignment(Qt::AlignCenter);
        labelTermPitchGraph->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermPitchGraph, 17, 0, 1, 1);

        labelTermGlossaryBrief = new QLabel(tabTermMarkers);
        labelTermGlossaryBrief->setObjectName(QString::fromUtf8("labelTermGlossaryBrief"));
        labelTermGlossaryBrief->setFont(font);
        labelTermGlossaryBrief->setAlignment(Qt::AlignCenter);
        labelTermGlossaryBrief->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermGlossaryBrief, 14, 0, 1, 1);

        labelTermTagsEx = new QLabel(tabTermMarkers);
        labelTermTagsEx->setObjectName(QString::fromUtf8("labelTermTagsEx"));

        layoutTerm->addWidget(labelTermTagsEx, 24, 1, 1, 1);

        labelTermFuriganaPlainEx = new QLabel(tabTermMarkers);
        labelTermFuriganaPlainEx->setObjectName(QString::fromUtf8("labelTermFuriganaPlainEx"));
        labelTermFuriganaPlainEx->setWordWrap(false);

        layoutTerm->addWidget(labelTermFuriganaPlainEx, 11, 1, 1, 1);

        labelTermAudioMediaEx = new QLabel(tabTermMarkers);
        labelTermAudioMediaEx->setObjectName(QString::fromUtf8("labelTermAudioMediaEx"));

        layoutTerm->addWidget(labelTermAudioMediaEx, 1, 1, 1, 1);

        labelTermAudioMedia = new QLabel(tabTermMarkers);
        labelTermAudioMedia->setObjectName(QString::fromUtf8("labelTermAudioMedia"));
        labelTermAudioMedia->setFont(font);
        labelTermAudioMedia->setAlignment(Qt::AlignCenter);
        labelTermAudioMedia->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermAudioMedia, 1, 0, 1, 1);

        labelTermAudioContext = new QLabel(tabTermMarkers);
        labelTermAudioContext->setObjectName(QString::fromUtf8("labelTermAudioContext"));
        labelTermAudioContext->setFont(font);
        labelTermAudioContext->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermAudioContext, 2, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        labelTermFrequencies = new QLabel(tabTermMarkers);
        labelTermFrequencies->setObjectName(QString::fromUtf8("labelTermFrequencies"));
        labelTermFrequencies->setFont(font);
        labelTermFrequencies->setAlignment(Qt::AlignCenter);
        labelTermFrequencies->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermFrequencies, 12, 0, 1, 1);

        labelTermPitchPosition = new QLabel(tabTermMarkers);
        labelTermPitchPosition->setObjectName(QString::fromUtf8("labelTermPitchPosition"));
        labelTermPitchPosition->setFont(font);
        labelTermPitchPosition->setAlignment(Qt::AlignCenter);
        labelTermPitchPosition->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermPitchPosition, 18, 0, 1, 1);

        labelTermScreenshotMedia = new QLabel(tabTermMarkers);
        labelTermScreenshotMedia->setObjectName(QString::fromUtf8("labelTermScreenshotMedia"));
        labelTermScreenshotMedia->setFont(font);
        labelTermScreenshotMedia->setAlignment(Qt::AlignCenter);
        labelTermScreenshotMedia->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermScreenshotMedia, 21, 0, 1, 1);

        labelTermClozeSuffixEx = new QLabel(tabTermMarkers);
        labelTermClozeSuffixEx->setObjectName(QString::fromUtf8("labelTermClozeSuffixEx"));
        labelTermClozeSuffixEx->setWordWrap(false);

        layoutTerm->addWidget(labelTermClozeSuffixEx, 6, 1, 1, 1);

        labelTermClozeBodyEx = new QLabel(tabTermMarkers);
        labelTermClozeBodyEx->setObjectName(QString::fromUtf8("labelTermClozeBodyEx"));
        labelTermClozeBodyEx->setWordWrap(false);

        layoutTerm->addWidget(labelTermClozeBodyEx, 4, 1, 1, 1);

        labelTermTitle = new QLabel(tabTermMarkers);
        labelTermTitle->setObjectName(QString::fromUtf8("labelTermTitle"));
        labelTermTitle->setFont(font);
        labelTermTitle->setAlignment(Qt::AlignCenter);
        labelTermTitle->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermTitle, 25, 0, 1, 1);

        labelTermPitchEx = new QLabel(tabTermMarkers);
        labelTermPitchEx->setObjectName(QString::fromUtf8("labelTermPitchEx"));

        layoutTerm->addWidget(labelTermPitchEx, 16, 1, 1, 1);

        labelTermSentenceEx = new QLabel(tabTermMarkers);
        labelTermSentenceEx->setObjectName(QString::fromUtf8("labelTermSentenceEx"));
        labelTermSentenceEx->setWordWrap(false);

        layoutTerm->addWidget(labelTermSentenceEx, 22, 1, 1, 1);

        labelTermFurigana = new QLabel(tabTermMarkers);
        labelTermFurigana->setObjectName(QString::fromUtf8("labelTermFurigana"));
        labelTermFurigana->setFont(font);
        labelTermFurigana->setAlignment(Qt::AlignCenter);
        labelTermFurigana->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermFurigana, 10, 0, 1, 1);

        labelTermExpressionEx = new QLabel(tabTermMarkers);
        labelTermExpressionEx->setObjectName(QString::fromUtf8("labelTermExpressionEx"));
        labelTermExpressionEx->setWordWrap(false);

        layoutTerm->addWidget(labelTermExpressionEx, 9, 1, 1, 1);

        labelTermFuriganaEx = new QLabel(tabTermMarkers);
        labelTermFuriganaEx->setObjectName(QString::fromUtf8("labelTermFuriganaEx"));
        labelTermFuriganaEx->setWordWrap(false);

        layoutTerm->addWidget(labelTermFuriganaEx, 10, 1, 1, 1);

        labelTermTags = new QLabel(tabTermMarkers);
        labelTermTags->setObjectName(QString::fromUtf8("labelTermTags"));
        labelTermTags->setFont(font);
        labelTermTags->setAlignment(Qt::AlignCenter);
        labelTermTags->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermTags, 24, 0, 1, 1);

        labelTermScreenshot = new QLabel(tabTermMarkers);
        labelTermScreenshot->setObjectName(QString::fromUtf8("labelTermScreenshot"));
        labelTermScreenshot->setFont(font);
        labelTermScreenshot->setAlignment(Qt::AlignCenter);
        labelTermScreenshot->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermScreenshot, 20, 0, 1, 1);

        labelTermContext2 = new QLabel(tabTermMarkers);
        labelTermContext2->setObjectName(QString::fromUtf8("labelTermContext2"));
        labelTermContext2->setFont(font);
        labelTermContext2->setAlignment(Qt::AlignCenter);
        labelTermContext2->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelTermContext2, 8, 0, 1, 1);

        labelGlossaryCompact = new QLabel(tabTermMarkers);
        labelGlossaryCompact->setObjectName(QString::fromUtf8("labelGlossaryCompact"));
        labelGlossaryCompact->setFont(font);
        labelGlossaryCompact->setAlignment(Qt::AlignCenter);
        labelGlossaryCompact->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutTerm->addWidget(labelGlossaryCompact, 15, 0, 1, 1);

        labelGlossaryCompactEx = new QLabel(tabTermMarkers);
        labelGlossaryCompactEx->setObjectName(QString::fromUtf8("labelGlossaryCompactEx"));

        layoutTerm->addWidget(labelGlossaryCompactEx, 15, 1, 1, 1);


        verticalLayout_2->addLayout(layoutTerm);

        tabWidget->addTab(tabTermMarkers, QString());
        tabKanjiMarkers = new QWidget();
        tabKanjiMarkers->setObjectName(QString::fromUtf8("tabKanjiMarkers"));
        verticalLayout_3 = new QVBoxLayout(tabKanjiMarkers);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        layoutKanji = new QGridLayout();
        layoutKanji->setObjectName(QString::fromUtf8("layoutKanji"));
        labelKanjiContext2Ex = new QLabel(tabKanjiMarkers);
        labelKanjiContext2Ex->setObjectName(QString::fromUtf8("labelKanjiContext2Ex"));

        layoutKanji->addWidget(labelKanjiContext2Ex, 8, 1, 1, 1);

        labelKanjiContextEx = new QLabel(tabKanjiMarkers);
        labelKanjiContextEx->setObjectName(QString::fromUtf8("labelKanjiContextEx"));

        layoutKanji->addWidget(labelKanjiContextEx, 7, 1, 1, 1);

        labelKanjiClozeBody = new QLabel(tabKanjiMarkers);
        labelKanjiClozeBody->setObjectName(QString::fromUtf8("labelKanjiClozeBody"));
        labelKanjiClozeBody->setFont(font);
        labelKanjiClozeBody->setAlignment(Qt::AlignCenter);
        labelKanjiClozeBody->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiClozeBody, 4, 0, 1, 1);

        labelKanjiContext = new QLabel(tabKanjiMarkers);
        labelKanjiContext->setObjectName(QString::fromUtf8("labelKanjiContext"));
        labelKanjiContext->setFont(font);
        labelKanjiContext->setAlignment(Qt::AlignCenter);
        labelKanjiContext->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiContext, 7, 0, 1, 1);

        labelKanjiContext2 = new QLabel(tabKanjiMarkers);
        labelKanjiContext2->setObjectName(QString::fromUtf8("labelKanjiContext2"));
        labelKanjiContext2->setFont(font);
        labelKanjiContext2->setAlignment(Qt::AlignCenter);
        labelKanjiContext2->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiContext2, 8, 0, 1, 1);

        labelKanjiSentenceEx = new QLabel(tabKanjiMarkers);
        labelKanjiSentenceEx->setObjectName(QString::fromUtf8("labelKanjiSentenceEx"));
        labelKanjiSentenceEx->setWordWrap(false);

        layoutKanji->addWidget(labelKanjiSentenceEx, 15, 1, 1, 1);

        labelStrokeCount = new QLabel(tabKanjiMarkers);
        labelStrokeCount->setObjectName(QString::fromUtf8("labelStrokeCount"));
        labelStrokeCount->setFont(font);
        labelStrokeCount->setAlignment(Qt::AlignCenter);
        labelStrokeCount->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelStrokeCount, 17, 0, 1, 1);

        labelKanjiStrokesEx = new QLabel(tabKanjiMarkers);
        labelKanjiStrokesEx->setObjectName(QString::fromUtf8("labelKanjiStrokesEx"));

        layoutKanji->addWidget(labelKanjiStrokesEx, 17, 1, 1, 1);

        labelKanjiClozePrefixEx = new QLabel(tabKanjiMarkers);
        labelKanjiClozePrefixEx->setObjectName(QString::fromUtf8("labelKanjiClozePrefixEx"));
        sizePolicy1.setHeightForWidth(labelKanjiClozePrefixEx->sizePolicy().hasHeightForWidth());
        labelKanjiClozePrefixEx->setSizePolicy(sizePolicy1);
        labelKanjiClozePrefixEx->setWordWrap(false);

        layoutKanji->addWidget(labelKanjiClozePrefixEx, 5, 1, 1, 1);

        labelKanjiSentence2 = new QLabel(tabKanjiMarkers);
        labelKanjiSentence2->setObjectName(QString::fromUtf8("labelKanjiSentence2"));
        labelKanjiSentence2->setFont(font);
        labelKanjiSentence2->setAlignment(Qt::AlignCenter);
        labelKanjiSentence2->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiSentence2, 16, 0, 1, 1);

        labelKanjiFrequencies = new QLabel(tabKanjiMarkers);
        labelKanjiFrequencies->setObjectName(QString::fromUtf8("labelKanjiFrequencies"));
        labelKanjiFrequencies->setFont(font);
        labelKanjiFrequencies->setAlignment(Qt::AlignCenter);
        labelKanjiFrequencies->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiFrequencies, 9, 0, 1, 1);

        labelKanjiAudioContext = new QLabel(tabKanjiMarkers);
        labelKanjiAudioContext->setObjectName(QString::fromUtf8("labelKanjiAudioContext"));
        labelKanjiAudioContext->setFont(font);
        labelKanjiAudioContext->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiAudioContext, 1, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        labelKanjiClozeSuffixEx = new QLabel(tabKanjiMarkers);
        labelKanjiClozeSuffixEx->setObjectName(QString::fromUtf8("labelKanjiClozeSuffixEx"));
        labelKanjiClozeSuffixEx->setWordWrap(false);

        layoutKanji->addWidget(labelKanjiClozeSuffixEx, 6, 1, 1, 1);

        labelKanjiTags = new QLabel(tabKanjiMarkers);
        labelKanjiTags->setObjectName(QString::fromUtf8("labelKanjiTags"));
        labelKanjiTags->setFont(font);
        labelKanjiTags->setAlignment(Qt::AlignCenter);
        labelKanjiTags->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiTags, 18, 0, 1, 1);

        labelKanjiFrequenciesEx = new QLabel(tabKanjiMarkers);
        labelKanjiFrequenciesEx->setObjectName(QString::fromUtf8("labelKanjiFrequenciesEx"));

        layoutKanji->addWidget(labelKanjiFrequenciesEx, 9, 1, 1, 1);

        labelKanjiScreenshot = new QLabel(tabKanjiMarkers);
        labelKanjiScreenshot->setObjectName(QString::fromUtf8("labelKanjiScreenshot"));
        labelKanjiScreenshot->setFont(font);
        labelKanjiScreenshot->setAlignment(Qt::AlignCenter);
        labelKanjiScreenshot->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiScreenshot, 13, 0, 1, 1);

        labelKanjiKunyomi = new QLabel(tabKanjiMarkers);
        labelKanjiKunyomi->setObjectName(QString::fromUtf8("labelKanjiKunyomi"));
        labelKanjiKunyomi->setFont(font);
        labelKanjiKunyomi->setAlignment(Qt::AlignCenter);
        labelKanjiKunyomi->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiKunyomi, 11, 0, 1, 1);

        labelKanjiCharacterEx = new QLabel(tabKanjiMarkers);
        labelKanjiCharacterEx->setObjectName(QString::fromUtf8("labelKanjiCharacterEx"));

        layoutKanji->addWidget(labelKanjiCharacterEx, 2, 1, 1, 1);

        labelKanjiScreenshotEx = new QLabel(tabKanjiMarkers);
        labelKanjiScreenshotEx->setObjectName(QString::fromUtf8("labelKanjiScreenshotEx"));

        layoutKanji->addWidget(labelKanjiScreenshotEx, 13, 1, 1, 1);

        labelKanjiTagsEx = new QLabel(tabKanjiMarkers);
        labelKanjiTagsEx->setObjectName(QString::fromUtf8("labelKanjiTagsEx"));

        layoutKanji->addWidget(labelKanjiTagsEx, 18, 1, 1, 1);

        labelKanjiCharacter = new QLabel(tabKanjiMarkers);
        labelKanjiCharacter->setObjectName(QString::fromUtf8("labelKanjiCharacter"));
        labelKanjiCharacter->setFont(font);
        labelKanjiCharacter->setAlignment(Qt::AlignCenter);
        labelKanjiCharacter->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiCharacter, 2, 0, 1, 1);

        labelKanjiScreenshotVideo = new QLabel(tabKanjiMarkers);
        labelKanjiScreenshotVideo->setObjectName(QString::fromUtf8("labelKanjiScreenshotVideo"));

        layoutKanji->addWidget(labelKanjiScreenshotVideo, 14, 1, 1, 1);

        labelKanjiClozeSuffix = new QLabel(tabKanjiMarkers);
        labelKanjiClozeSuffix->setObjectName(QString::fromUtf8("labelKanjiClozeSuffix"));
        labelKanjiClozeSuffix->setFont(font);
        labelKanjiClozeSuffix->setAlignment(Qt::AlignCenter);
        labelKanjiClozeSuffix->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiClozeSuffix, 6, 0, 1, 1);

        labelKanjiScreenshotMedia = new QLabel(tabKanjiMarkers);
        labelKanjiScreenshotMedia->setObjectName(QString::fromUtf8("labelKanjiScreenshotMedia"));
        labelKanjiScreenshotMedia->setFont(font);
        labelKanjiScreenshotMedia->setAlignment(Qt::AlignCenter);
        labelKanjiScreenshotMedia->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiScreenshotMedia, 14, 0, 1, 1);

        labelKanjiAudioMediaEx = new QLabel(tabKanjiMarkers);
        labelKanjiAudioMediaEx->setObjectName(QString::fromUtf8("labelKanjiAudioMediaEx"));

        layoutKanji->addWidget(labelKanjiAudioMediaEx, 0, 1, 1, 1);

        labelKanjiClozeBodyEx = new QLabel(tabKanjiMarkers);
        labelKanjiClozeBodyEx->setObjectName(QString::fromUtf8("labelKanjiClozeBodyEx"));
        labelKanjiClozeBodyEx->setWordWrap(false);

        layoutKanji->addWidget(labelKanjiClozeBodyEx, 4, 1, 1, 1);

        labelKanjiClozePrefix = new QLabel(tabKanjiMarkers);
        labelKanjiClozePrefix->setObjectName(QString::fromUtf8("labelKanjiClozePrefix"));
        labelKanjiClozePrefix->setFont(font);
        labelKanjiClozePrefix->setAlignment(Qt::AlignCenter);
        labelKanjiClozePrefix->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiClozePrefix, 5, 0, 1, 1);

        labelKanjiTitle = new QLabel(tabKanjiMarkers);
        labelKanjiTitle->setObjectName(QString::fromUtf8("labelKanjiTitle"));
        labelKanjiTitle->setFont(font);
        labelKanjiTitle->setAlignment(Qt::AlignCenter);
        labelKanjiTitle->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiTitle, 19, 0, 1, 1);

        labelKanjiAudioMedia = new QLabel(tabKanjiMarkers);
        labelKanjiAudioMedia->setObjectName(QString::fromUtf8("labelKanjiAudioMedia"));
        labelKanjiAudioMedia->setFont(font);
        labelKanjiAudioMedia->setAlignment(Qt::AlignCenter);
        labelKanjiAudioMedia->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiAudioMedia, 0, 0, 1, 1);

        labelKanjiOnyomiEx = new QLabel(tabKanjiMarkers);
        labelKanjiOnyomiEx->setObjectName(QString::fromUtf8("labelKanjiOnyomiEx"));

        layoutKanji->addWidget(labelKanjiOnyomiEx, 12, 1, 1, 1);

        labelKanjiSentence = new QLabel(tabKanjiMarkers);
        labelKanjiSentence->setObjectName(QString::fromUtf8("labelKanjiSentence"));
        labelKanjiSentence->setFont(font);
        labelKanjiSentence->setAlignment(Qt::AlignCenter);
        labelKanjiSentence->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiSentence, 15, 0, 1, 1);

        labelKanjiGlossaryEx = new QLabel(tabKanjiMarkers);
        labelKanjiGlossaryEx->setObjectName(QString::fromUtf8("labelKanjiGlossaryEx"));
        labelKanjiGlossaryEx->setWordWrap(false);

        layoutKanji->addWidget(labelKanjiGlossaryEx, 10, 1, 1, 1);

        labelKanjiGlossary = new QLabel(tabKanjiMarkers);
        labelKanjiGlossary->setObjectName(QString::fromUtf8("labelKanjiGlossary"));
        labelKanjiGlossary->setFont(font);
        labelKanjiGlossary->setAlignment(Qt::AlignCenter);
        labelKanjiGlossary->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiGlossary, 10, 0, 1, 1);

        labelKanjiSentence2Ex = new QLabel(tabKanjiMarkers);
        labelKanjiSentence2Ex->setObjectName(QString::fromUtf8("labelKanjiSentence2Ex"));

        layoutKanji->addWidget(labelKanjiSentence2Ex, 16, 1, 1, 1);

        labelKanjiAudioContextEx = new QLabel(tabKanjiMarkers);
        labelKanjiAudioContextEx->setObjectName(QString::fromUtf8("labelKanjiAudioContextEx"));

        layoutKanji->addWidget(labelKanjiAudioContextEx, 1, 1, 1, 1);

        labelKanjiKunyomiEx = new QLabel(tabKanjiMarkers);
        labelKanjiKunyomiEx->setObjectName(QString::fromUtf8("labelKanjiKunyomiEx"));

        layoutKanji->addWidget(labelKanjiKunyomiEx, 11, 1, 1, 1);

        labelKanjiTitleEx = new QLabel(tabKanjiMarkers);
        labelKanjiTitleEx->setObjectName(QString::fromUtf8("labelKanjiTitleEx"));

        layoutKanji->addWidget(labelKanjiTitleEx, 19, 1, 1, 1);

        labelKanjiOnyomi = new QLabel(tabKanjiMarkers);
        labelKanjiOnyomi->setObjectName(QString::fromUtf8("labelKanjiOnyomi"));
        labelKanjiOnyomi->setFont(font);
        labelKanjiOnyomi->setAlignment(Qt::AlignCenter);
        labelKanjiOnyomi->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiOnyomi, 12, 0, 1, 1);

        labelKanjiClipboard = new QLabel(tabKanjiMarkers);
        labelKanjiClipboard->setObjectName(QString::fromUtf8("labelKanjiClipboard"));
        labelKanjiClipboard->setFont(font);
        labelKanjiClipboard->setTextInteractionFlags(Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        layoutKanji->addWidget(labelKanjiClipboard, 3, 0, 1, 1, Qt::AlignHCenter|Qt::AlignVCenter);

        labelKanjiClipboardEx = new QLabel(tabKanjiMarkers);
        labelKanjiClipboardEx->setObjectName(QString::fromUtf8("labelKanjiClipboardEx"));

        layoutKanji->addWidget(labelKanjiClipboardEx, 3, 1, 1, 1);


        verticalLayout_3->addLayout(layoutKanji);

        spacerKanji = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(spacerKanji);

        tabWidget->addTab(tabKanjiMarkers, QString());

        verticalLayout->addWidget(tabWidget);


        retranslateUi(AnkiSettingsHelp);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AnkiSettingsHelp);
    } // setupUi

    void retranslateUi(QWidget *AnkiSettingsHelp)
    {
        AnkiSettingsHelp->setWindowTitle(QCoreApplication::translate("AnkiSettingsHelp", "Anki Settings Help", nullptr));
        labelExplanation->setText(QCoreApplication::translate("AnkiSettingsHelp", "Below is the list of special expressions that can be entered in the value field.\n"
"These will expand to larger expressions in the final card.", nullptr));
        labelTermClozePrefix->setText(QCoreApplication::translate("AnkiSettingsHelp", "{cloze-prefix}", nullptr));
        labelTermScreenshotEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "Screenshot of the current frame.", nullptr));
        labelTermTitleEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "Title of the video. Filename if no title.", nullptr));
        labelTermGlossary->setText(QCoreApplication::translate("AnkiSettingsHelp", "{glossary}", nullptr));
        labelTermPitchGraphEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "Pitch graphs for the reading of the term.", nullptr));
        labelTermReading->setText(QCoreApplication::translate("AnkiSettingsHelp", "{reading}", nullptr));
        labelTermContextEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The selected subtitles in the subtitle list. The current subtitle is selected by default.", nullptr));
        labelTermSentence->setText(QCoreApplication::translate("AnkiSettingsHelp", "{sentence}", nullptr));
        labelTermContext2Ex->setText(QCoreApplication::translate("AnkiSettingsHelp", "The selected subtitles in the secondary subtitle list. The current subtitle is selected by default.", nullptr));
        labelTermReadingEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The reading of the word in kana.", nullptr));
        labelTermExpression->setText(QCoreApplication::translate("AnkiSettingsHelp", "{expression}", nullptr));
        labelTermClozeBody->setText(QCoreApplication::translate("AnkiSettingsHelp", "{cloze-body}", nullptr));
        labelTermScreenshotVideo->setText(QCoreApplication::translate("AnkiSettingsHelp", "Screenshot of the current frame without subtitles if visible.", nullptr));
        labelTermContext->setText(QCoreApplication::translate("AnkiSettingsHelp", "{context}", nullptr));
        labelTermSentence2Ex->setText(QCoreApplication::translate("AnkiSettingsHelp", "The current secondary subtitle.", nullptr));
        labelTermClipboardEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The text currently copied to the clipboard.", nullptr));
        labelTermPitch->setText(QCoreApplication::translate("AnkiSettingsHelp", "{pitch}", nullptr));
        labelTermClozeSuffix->setText(QCoreApplication::translate("AnkiSettingsHelp", "{cloze-suffix}", nullptr));
        labelTermClipboard->setText(QCoreApplication::translate("AnkiSettingsHelp", "{clipboard}", nullptr));
        labelTermAudioContextEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "Audio between the earliest selected subtitle and last selected subtitle in the subtitle list.", nullptr));
        labelTermAudio->setText(QCoreApplication::translate("AnkiSettingsHelp", "{audio}", nullptr));
        labelTermPitchPositionEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "Pitch positions for the reading of the term.", nullptr));
        labelTermSentence2->setText(QCoreApplication::translate("AnkiSettingsHelp", "{sentence-2}", nullptr));
        labelTermGlossaryEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The dictionary definitions of the expression.", nullptr));
        labelTermClozePrefixEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The text leading up to the raw term as recognized by Memento.", nullptr));
        labelTermFuriganaPlain->setText(QCoreApplication::translate("AnkiSettingsHelp", "{furigana-plain}", nullptr));
        labelTermAudioEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "An audio clip of the word if found.", nullptr));
        labelTermFrequenciesEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "Bulleted list of the frequency tags.", nullptr));
        labelTermGlossaryBriefEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The dictionary definitions of the expression without dictionary information.", nullptr));
        labelTermPitchGraph->setText(QCoreApplication::translate("AnkiSettingsHelp", "{pitch-graph}", nullptr));
        labelTermGlossaryBrief->setText(QCoreApplication::translate("AnkiSettingsHelp", "{glossary-brief}", nullptr));
        labelTermTagsEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "Bulleted list of the term tags.", nullptr));
        labelTermFuriganaPlainEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The term in kanji with furigana proceeding in brackets. Kana if kanji is not available.", nullptr));
        labelTermAudioMediaEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "Audio of the current subtitle.", nullptr));
        labelTermAudioMedia->setText(QCoreApplication::translate("AnkiSettingsHelp", "{audio-media}", nullptr));
        labelTermAudioContext->setText(QCoreApplication::translate("AnkiSettingsHelp", "{audio-context}", nullptr));
        labelTermFrequencies->setText(QCoreApplication::translate("AnkiSettingsHelp", "{frequencies}", nullptr));
        labelTermPitchPosition->setText(QCoreApplication::translate("AnkiSettingsHelp", "{pitch-position}", nullptr));
        labelTermScreenshotMedia->setText(QCoreApplication::translate("AnkiSettingsHelp", "{screenshot-video}", nullptr));
        labelTermClozeSuffixEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The text after the raw term as recognized by Memento.", nullptr));
        labelTermClozeBodyEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The raw term as recognized by Memento.", nullptr));
        labelTermTitle->setText(QCoreApplication::translate("AnkiSettingsHelp", "{title}", nullptr));
        labelTermPitchEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "Pitch accents for the reading of the term.", nullptr));
        labelTermSentenceEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The current subtitle.", nullptr));
        labelTermFurigana->setText(QCoreApplication::translate("AnkiSettingsHelp", "{furigana}", nullptr));
        labelTermExpressionEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The term in kanji. Kana if not available.", nullptr));
        labelTermFuriganaEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The term in kanji with furigana above. Kana if kanji is not available.", nullptr));
        labelTermTags->setText(QCoreApplication::translate("AnkiSettingsHelp", "{tags}", nullptr));
        labelTermScreenshot->setText(QCoreApplication::translate("AnkiSettingsHelp", "{screenshot}", nullptr));
        labelTermContext2->setText(QCoreApplication::translate("AnkiSettingsHelp", "{context-2}", nullptr));
        labelGlossaryCompact->setText(QCoreApplication::translate("AnkiSettingsHelp", "{glossary-compact}", nullptr));
        labelGlossaryCompactEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The dictionary definitions of the expression in a compact form.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabTermMarkers), QCoreApplication::translate("AnkiSettingsHelp", "Term Markers", nullptr));
        labelKanjiContext2Ex->setText(QCoreApplication::translate("AnkiSettingsHelp", "The selected subtitles in the secondary subtitle list. The current subtitle is selected by default.", nullptr));
        labelKanjiContextEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The selected subtitles in the subtitle list. The current subtitle is selected by default.", nullptr));
        labelKanjiClozeBody->setText(QCoreApplication::translate("AnkiSettingsHelp", "{cloze-body}", nullptr));
        labelKanjiContext->setText(QCoreApplication::translate("AnkiSettingsHelp", "{context}", nullptr));
        labelKanjiContext2->setText(QCoreApplication::translate("AnkiSettingsHelp", "{context-2}", nullptr));
        labelKanjiSentenceEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The current subtitle.", nullptr));
        labelStrokeCount->setText(QCoreApplication::translate("AnkiSettingsHelp", "{stroke-count}", nullptr));
        labelKanjiStrokesEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The number of strokes in the character.", nullptr));
        labelKanjiClozePrefixEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The text leading up to the raw term as recognized by Memento.", nullptr));
        labelKanjiSentence2->setText(QCoreApplication::translate("AnkiSettingsHelp", "{sentence-2}", nullptr));
        labelKanjiFrequencies->setText(QCoreApplication::translate("AnkiSettingsHelp", "{frequencies}", nullptr));
        labelKanjiAudioContext->setText(QCoreApplication::translate("AnkiSettingsHelp", "{audio-context}", nullptr));
        labelKanjiClozeSuffixEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The text after the raw term as recognized by Memento.", nullptr));
        labelKanjiTags->setText(QCoreApplication::translate("AnkiSettingsHelp", "{tags}", nullptr));
        labelKanjiFrequenciesEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "Bulleted list of the frequency tags.", nullptr));
        labelKanjiScreenshot->setText(QCoreApplication::translate("AnkiSettingsHelp", "{screenshot}", nullptr));
        labelKanjiKunyomi->setText(QCoreApplication::translate("AnkiSettingsHelp", "{kunyomi}", nullptr));
        labelKanjiCharacterEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The kanji character.", nullptr));
        labelKanjiScreenshotEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "Screenshot of the current frame.", nullptr));
        labelKanjiTagsEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "Bulleted list of the term tags.", nullptr));
        labelKanjiCharacter->setText(QCoreApplication::translate("AnkiSettingsHelp", "{character}", nullptr));
        labelKanjiScreenshotVideo->setText(QCoreApplication::translate("AnkiSettingsHelp", "Screenshot of the current frame without subtitles if visible.", nullptr));
        labelKanjiClozeSuffix->setText(QCoreApplication::translate("AnkiSettingsHelp", "{cloze-suffix}", nullptr));
        labelKanjiScreenshotMedia->setText(QCoreApplication::translate("AnkiSettingsHelp", "{screenshot-video}", nullptr));
        labelKanjiAudioMediaEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "Audio of the current subtitle.", nullptr));
        labelKanjiClozeBodyEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The raw term that the kanji came from as recognized by Memento.", nullptr));
        labelKanjiClozePrefix->setText(QCoreApplication::translate("AnkiSettingsHelp", "{cloze-prefix}", nullptr));
        labelKanjiTitle->setText(QCoreApplication::translate("AnkiSettingsHelp", "{title}", nullptr));
        labelKanjiAudioMedia->setText(QCoreApplication::translate("AnkiSettingsHelp", "{audio-media}", nullptr));
        labelKanjiOnyomiEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "A comma separated list of kunyomi (Chinese) readings written in hiragana.", nullptr));
        labelKanjiSentence->setText(QCoreApplication::translate("AnkiSettingsHelp", "{sentence}", nullptr));
        labelKanjiGlossaryEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The dictionary definitions of the kanji.", nullptr));
        labelKanjiGlossary->setText(QCoreApplication::translate("AnkiSettingsHelp", "{glossary}", nullptr));
        labelKanjiSentence2Ex->setText(QCoreApplication::translate("AnkiSettingsHelp", "The current secondary subtitle.", nullptr));
        labelKanjiAudioContextEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "Audio between the earliest selected subtitle and last selected subtitle in the subtitle list.", nullptr));
        labelKanjiKunyomiEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "A comma separated list of kunyomi (Japanese) readings written in katakana.", nullptr));
        labelKanjiTitleEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "Title of the video. Filename if no title.", nullptr));
        labelKanjiOnyomi->setText(QCoreApplication::translate("AnkiSettingsHelp", "{onyomi}", nullptr));
        labelKanjiClipboard->setText(QCoreApplication::translate("AnkiSettingsHelp", "{clipboard}", nullptr));
        labelKanjiClipboardEx->setText(QCoreApplication::translate("AnkiSettingsHelp", "The text currently copied to the clipboard.", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabKanjiMarkers), QCoreApplication::translate("AnkiSettingsHelp", "Kanji Markers", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnkiSettingsHelp: public Ui_AnkiSettingsHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANKISETTINGSHELP_H
