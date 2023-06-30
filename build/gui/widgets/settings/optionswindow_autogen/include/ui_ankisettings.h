/********************************************************************************
** Form generated from reading UI file 'ankisettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANKISETTINGS_H
#define UI_ANKISETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gui/widgets/common/scrollcombobox.h"
#include "gui/widgets/common/scrolldoublespinbox.h"
#include "gui/widgets/settings/cardbuilder.h"

QT_BEGIN_NAMESPACE

class Ui_AnkiSettings
{
public:
    QVBoxLayout *verticalLayout;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_4;
    QCheckBox *checkBoxEnabled;
    QFrame *frameContent;
    QVBoxLayout *verticalLayout_5;
    QCheckBox *checkboxAdvanced;
    QLabel *labelProfile;
    QHBoxLayout *layoutProfiles;
    ScrollComboBox *comboBoxProfile;
    QToolButton *buttonDelete;
    QToolButton *buttonAdd;
    QLabel *labelProfileName;
    QLineEdit *lineEditProfileName;
    QGridLayout *layoutConnect;
    QLabel *labelPort;
    QLabel *labelHostName;
    QLineEdit *lineEditHost;
    QLineEdit *lineEditPort;
    QPushButton *buttonConnect;
    QLabel *labelTags;
    QLineEdit *lineEditTags;
    QFrame *frameAdvanced;
    QVBoxLayout *verticalLayout_6;
    QLabel *labelDuplicates;
    ScrollComboBox *comboBoxDuplicates;
    QLabel *labelNewlineReplacer;
    QLineEdit *lineEditNewlineReplacer;
    QLabel *labelScreenshot;
    ScrollComboBox *comboBoxScreenshot;
    QGridLayout *layoutAudioPadding;
    QLabel *labelAudioPadEnd;
    ScrollDoubleSpinBox *spinAudioPadStart;
    ScrollDoubleSpinBox *spinAudioPadEnd;
    QLabel *labelAudioPadStart;
    QHBoxLayout *layoutAudioNormalize;
    QCheckBox *checkAudioNormalize;
    ScrollDoubleSpinBox *doubleAudioDb;
    QLabel *labelAudioDb;
    QSpacerItem *spacerAudioNormalize;
    QLabel *labelIncludeGlossary;
    QListWidget *listIncludeGlossary;
    QLabel *labelHelpMessage;
    QTabWidget *tabTermKanji;
    QWidget *layoutTerms;
    QVBoxLayout *verticalLayout_3;
    CardBuilder *termCardBuilder;
    QWidget *layoutKanji;
    QVBoxLayout *verticalLayout_2;
    CardBuilder *kanjiCardBuilder;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *AnkiSettings)
    {
        if (AnkiSettings->objectName().isEmpty())
            AnkiSettings->setObjectName(QString::fromUtf8("AnkiSettings"));
        AnkiSettings->resize(530, 937);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(AnkiSettings->sizePolicy().hasHeightForWidth());
        AnkiSettings->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(AnkiSettings);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        scrollArea = new QScrollArea(AnkiSettings);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFrameShape(QFrame::NoFrame);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 497, 1248));
        verticalLayout_4 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        checkBoxEnabled = new QCheckBox(scrollAreaWidgetContents);
        checkBoxEnabled->setObjectName(QString::fromUtf8("checkBoxEnabled"));

        verticalLayout_4->addWidget(checkBoxEnabled);

        frameContent = new QFrame(scrollAreaWidgetContents);
        frameContent->setObjectName(QString::fromUtf8("frameContent"));
        frameContent->setEnabled(false);
        frameContent->setFrameShape(QFrame::StyledPanel);
        frameContent->setFrameShadow(QFrame::Raised);
        verticalLayout_5 = new QVBoxLayout(frameContent);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        checkboxAdvanced = new QCheckBox(frameContent);
        checkboxAdvanced->setObjectName(QString::fromUtf8("checkboxAdvanced"));

        verticalLayout_5->addWidget(checkboxAdvanced);

        labelProfile = new QLabel(frameContent);
        labelProfile->setObjectName(QString::fromUtf8("labelProfile"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelProfile->setFont(font);

        verticalLayout_5->addWidget(labelProfile);

        layoutProfiles = new QHBoxLayout();
        layoutProfiles->setObjectName(QString::fromUtf8("layoutProfiles"));
        comboBoxProfile = new ScrollComboBox(frameContent);
        comboBoxProfile->addItem(QString());
        comboBoxProfile->setObjectName(QString::fromUtf8("comboBoxProfile"));
        comboBoxProfile->setEditable(false);
        comboBoxProfile->setInsertPolicy(QComboBox::InsertAlphabetically);

        layoutProfiles->addWidget(comboBoxProfile);

        buttonDelete = new QToolButton(frameContent);
        buttonDelete->setObjectName(QString::fromUtf8("buttonDelete"));
        buttonDelete->setEnabled(false);
        buttonDelete->setMinimumSize(QSize(30, 30));
        buttonDelete->setFont(font);

        layoutProfiles->addWidget(buttonDelete);

        buttonAdd = new QToolButton(frameContent);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));
        buttonAdd->setEnabled(false);
        buttonAdd->setMinimumSize(QSize(30, 30));
        buttonAdd->setFont(font);

        layoutProfiles->addWidget(buttonAdd);


        verticalLayout_5->addLayout(layoutProfiles);

        labelProfileName = new QLabel(frameContent);
        labelProfileName->setObjectName(QString::fromUtf8("labelProfileName"));
        labelProfileName->setFont(font);

        verticalLayout_5->addWidget(labelProfileName);

        lineEditProfileName = new QLineEdit(frameContent);
        lineEditProfileName->setObjectName(QString::fromUtf8("lineEditProfileName"));

        verticalLayout_5->addWidget(lineEditProfileName);

        layoutConnect = new QGridLayout();
        layoutConnect->setObjectName(QString::fromUtf8("layoutConnect"));
        labelPort = new QLabel(frameContent);
        labelPort->setObjectName(QString::fromUtf8("labelPort"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelPort->sizePolicy().hasHeightForWidth());
        labelPort->setSizePolicy(sizePolicy1);
        labelPort->setFont(font);

        layoutConnect->addWidget(labelPort, 0, 1, 1, 1);

        labelHostName = new QLabel(frameContent);
        labelHostName->setObjectName(QString::fromUtf8("labelHostName"));
        sizePolicy1.setHeightForWidth(labelHostName->sizePolicy().hasHeightForWidth());
        labelHostName->setSizePolicy(sizePolicy1);
        labelHostName->setFont(font);

        layoutConnect->addWidget(labelHostName, 0, 0, 1, 1);

        lineEditHost = new QLineEdit(frameContent);
        lineEditHost->setObjectName(QString::fromUtf8("lineEditHost"));

        layoutConnect->addWidget(lineEditHost, 1, 0, 1, 1);

        lineEditPort = new QLineEdit(frameContent);
        lineEditPort->setObjectName(QString::fromUtf8("lineEditPort"));

        layoutConnect->addWidget(lineEditPort, 1, 1, 1, 1);

        buttonConnect = new QPushButton(frameContent);
        buttonConnect->setObjectName(QString::fromUtf8("buttonConnect"));
        buttonConnect->setEnabled(false);

        layoutConnect->addWidget(buttonConnect, 1, 2, 1, 1);


        verticalLayout_5->addLayout(layoutConnect);

        labelTags = new QLabel(frameContent);
        labelTags->setObjectName(QString::fromUtf8("labelTags"));
        sizePolicy1.setHeightForWidth(labelTags->sizePolicy().hasHeightForWidth());
        labelTags->setSizePolicy(sizePolicy1);
        labelTags->setFont(font);

        verticalLayout_5->addWidget(labelTags);

        lineEditTags = new QLineEdit(frameContent);
        lineEditTags->setObjectName(QString::fromUtf8("lineEditTags"));

        verticalLayout_5->addWidget(lineEditTags);

        frameAdvanced = new QFrame(frameContent);
        frameAdvanced->setObjectName(QString::fromUtf8("frameAdvanced"));
        frameAdvanced->setFrameShape(QFrame::StyledPanel);
        frameAdvanced->setFrameShadow(QFrame::Raised);
        verticalLayout_6 = new QVBoxLayout(frameAdvanced);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        labelDuplicates = new QLabel(frameAdvanced);
        labelDuplicates->setObjectName(QString::fromUtf8("labelDuplicates"));
        labelDuplicates->setFont(font);

        verticalLayout_6->addWidget(labelDuplicates);

        comboBoxDuplicates = new ScrollComboBox(frameAdvanced);
        comboBoxDuplicates->addItem(QString());
        comboBoxDuplicates->addItem(QString());
        comboBoxDuplicates->addItem(QString());
        comboBoxDuplicates->setObjectName(QString::fromUtf8("comboBoxDuplicates"));

        verticalLayout_6->addWidget(comboBoxDuplicates);

        labelNewlineReplacer = new QLabel(frameAdvanced);
        labelNewlineReplacer->setObjectName(QString::fromUtf8("labelNewlineReplacer"));
        labelNewlineReplacer->setFont(font);

        verticalLayout_6->addWidget(labelNewlineReplacer);

        lineEditNewlineReplacer = new QLineEdit(frameAdvanced);
        lineEditNewlineReplacer->setObjectName(QString::fromUtf8("lineEditNewlineReplacer"));

        verticalLayout_6->addWidget(lineEditNewlineReplacer);

        labelScreenshot = new QLabel(frameAdvanced);
        labelScreenshot->setObjectName(QString::fromUtf8("labelScreenshot"));
        labelScreenshot->setFont(font);

        verticalLayout_6->addWidget(labelScreenshot);

        comboBoxScreenshot = new ScrollComboBox(frameAdvanced);
        comboBoxScreenshot->addItem(QString());
        comboBoxScreenshot->addItem(QString());
        comboBoxScreenshot->addItem(QString());
        comboBoxScreenshot->setObjectName(QString::fromUtf8("comboBoxScreenshot"));

        verticalLayout_6->addWidget(comboBoxScreenshot);

        layoutAudioPadding = new QGridLayout();
        layoutAudioPadding->setObjectName(QString::fromUtf8("layoutAudioPadding"));
        labelAudioPadEnd = new QLabel(frameAdvanced);
        labelAudioPadEnd->setObjectName(QString::fromUtf8("labelAudioPadEnd"));
        labelAudioPadEnd->setFont(font);

        layoutAudioPadding->addWidget(labelAudioPadEnd, 0, 1, 1, 1);

        spinAudioPadStart = new ScrollDoubleSpinBox(frameAdvanced);
        spinAudioPadStart->setObjectName(QString::fromUtf8("spinAudioPadStart"));
        spinAudioPadStart->setMinimum(-100.000000000000000);
        spinAudioPadStart->setMaximum(100.000000000000000);
        spinAudioPadStart->setSingleStep(0.100000000000000);

        layoutAudioPadding->addWidget(spinAudioPadStart, 1, 0, 1, 1);

        spinAudioPadEnd = new ScrollDoubleSpinBox(frameAdvanced);
        spinAudioPadEnd->setObjectName(QString::fromUtf8("spinAudioPadEnd"));
        spinAudioPadEnd->setMinimum(-100.000000000000000);
        spinAudioPadEnd->setMaximum(100.000000000000000);

        layoutAudioPadding->addWidget(spinAudioPadEnd, 1, 1, 1, 1);

        labelAudioPadStart = new QLabel(frameAdvanced);
        labelAudioPadStart->setObjectName(QString::fromUtf8("labelAudioPadStart"));
        labelAudioPadStart->setFont(font);

        layoutAudioPadding->addWidget(labelAudioPadStart, 0, 0, 1, 1);


        verticalLayout_6->addLayout(layoutAudioPadding);

        layoutAudioNormalize = new QHBoxLayout();
        layoutAudioNormalize->setObjectName(QString::fromUtf8("layoutAudioNormalize"));
        checkAudioNormalize = new QCheckBox(frameAdvanced);
        checkAudioNormalize->setObjectName(QString::fromUtf8("checkAudioNormalize"));

        layoutAudioNormalize->addWidget(checkAudioNormalize);

        doubleAudioDb = new ScrollDoubleSpinBox(frameAdvanced);
        doubleAudioDb->setObjectName(QString::fromUtf8("doubleAudioDb"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(doubleAudioDb->sizePolicy().hasHeightForWidth());
        doubleAudioDb->setSizePolicy(sizePolicy2);
        doubleAudioDb->setDecimals(1);
        doubleAudioDb->setMinimum(-70.000000000000000);
        doubleAudioDb->setMaximum(-5.000000000000000);

        layoutAudioNormalize->addWidget(doubleAudioDb);

        labelAudioDb = new QLabel(frameAdvanced);
        labelAudioDb->setObjectName(QString::fromUtf8("labelAudioDb"));

        layoutAudioNormalize->addWidget(labelAudioDb);

        spacerAudioNormalize = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutAudioNormalize->addItem(spacerAudioNormalize);


        verticalLayout_6->addLayout(layoutAudioNormalize);

        labelIncludeGlossary = new QLabel(frameAdvanced);
        labelIncludeGlossary->setObjectName(QString::fromUtf8("labelIncludeGlossary"));
        labelIncludeGlossary->setFont(font);

        verticalLayout_6->addWidget(labelIncludeGlossary);

        listIncludeGlossary = new QListWidget(frameAdvanced);
        listIncludeGlossary->setObjectName(QString::fromUtf8("listIncludeGlossary"));
        listIncludeGlossary->setMinimumSize(QSize(0, 150));

        verticalLayout_6->addWidget(listIncludeGlossary);


        verticalLayout_5->addWidget(frameAdvanced);

        labelHelpMessage = new QLabel(frameContent);
        labelHelpMessage->setObjectName(QString::fromUtf8("labelHelpMessage"));
        labelHelpMessage->setFont(font);

        verticalLayout_5->addWidget(labelHelpMessage, 0, Qt::AlignHCenter);

        tabTermKanji = new QTabWidget(frameContent);
        tabTermKanji->setObjectName(QString::fromUtf8("tabTermKanji"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabTermKanji->sizePolicy().hasHeightForWidth());
        tabTermKanji->setSizePolicy(sizePolicy3);
        tabTermKanji->setMinimumSize(QSize(0, 400));
        layoutTerms = new QWidget();
        layoutTerms->setObjectName(QString::fromUtf8("layoutTerms"));
        verticalLayout_3 = new QVBoxLayout(layoutTerms);
        verticalLayout_3->setSpacing(0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        termCardBuilder = new CardBuilder(layoutTerms);
        termCardBuilder->setObjectName(QString::fromUtf8("termCardBuilder"));

        verticalLayout_3->addWidget(termCardBuilder);

        tabTermKanji->addTab(layoutTerms, QString());
        layoutKanji = new QWidget();
        layoutKanji->setObjectName(QString::fromUtf8("layoutKanji"));
        verticalLayout_2 = new QVBoxLayout(layoutKanji);
        verticalLayout_2->setSpacing(0);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        kanjiCardBuilder = new CardBuilder(layoutKanji);
        kanjiCardBuilder->setObjectName(QString::fromUtf8("kanjiCardBuilder"));

        verticalLayout_2->addWidget(kanjiCardBuilder);

        tabTermKanji->addTab(layoutKanji, QString());

        verticalLayout_5->addWidget(tabTermKanji);


        verticalLayout_4->addWidget(frameContent);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        buttonBox = new QDialogButtonBox(AnkiSettings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Help|QDialogButtonBox::Reset|QDialogButtonBox::RestoreDefaults);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AnkiSettings);

        tabTermKanji->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(AnkiSettings);
    } // setupUi

    void retranslateUi(QWidget *AnkiSettings)
    {
        AnkiSettings->setWindowTitle(QCoreApplication::translate("AnkiSettings", "Anki Integration Settings", nullptr));
        checkBoxEnabled->setText(QCoreApplication::translate("AnkiSettings", "Enable Anki Integration", nullptr));
        checkboxAdvanced->setText(QCoreApplication::translate("AnkiSettings", "Show Advanced Options", nullptr));
        labelProfile->setText(QCoreApplication::translate("AnkiSettings", "Profiles", nullptr));
        comboBoxProfile->setItemText(0, QCoreApplication::translate("AnkiSettings", "Default", nullptr));

#if QT_CONFIG(tooltip)
        comboBoxProfile->setToolTip(QCoreApplication::translate("AnkiSettings", "The currently selected profile.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        buttonDelete->setToolTip(QCoreApplication::translate("AnkiSettings", "Remove the current profile.\n"
"Profile Default cannot be removed.", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        buttonAdd->setToolTip(QCoreApplication::translate("AnkiSettings", "Add a profile with the current settings and name in \"Profile Name\".", nullptr));
#endif // QT_CONFIG(tooltip)
        labelProfileName->setText(QCoreApplication::translate("AnkiSettings", "Profile Name", nullptr));
#if QT_CONFIG(tooltip)
        lineEditProfileName->setToolTip(QCoreApplication::translate("AnkiSettings", "Rename the profile by changing the name here and clicking apply or by switching to a new profile.\n"
"Becomes the name of a new profile when add is clicked.", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditProfileName->setText(QCoreApplication::translate("AnkiSettings", "Default", nullptr));
        labelPort->setText(QCoreApplication::translate("AnkiSettings", "Port", nullptr));
        labelHostName->setText(QCoreApplication::translate("AnkiSettings", "Anki Hostname", nullptr));
#if QT_CONFIG(tooltip)
        lineEditHost->setToolTip(QCoreApplication::translate("AnkiSettings", "Host name for Anki.\n"
"Only change this if you know what you're doing.", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditHost->setText(QCoreApplication::translate("AnkiSettings", "localhost", nullptr));
        lineEditHost->setPlaceholderText(QCoreApplication::translate("AnkiSettings", "Host", nullptr));
#if QT_CONFIG(tooltip)
        lineEditPort->setToolTip(QCoreApplication::translate("AnkiSettings", "Port Anki is listening on.\n"
"Only change this if you know what you're doing.", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditPort->setText(QCoreApplication::translate("AnkiSettings", "8765", nullptr));
        lineEditPort->setPlaceholderText(QCoreApplication::translate("AnkiSettings", "Port", nullptr));
        buttonConnect->setText(QCoreApplication::translate("AnkiSettings", "Connect", nullptr));
        labelTags->setText(QCoreApplication::translate("AnkiSettings", "Card Tags", nullptr));
#if QT_CONFIG(tooltip)
        lineEditTags->setToolTip(QCoreApplication::translate("AnkiSettings", "Tags added to cards created by Memento.\n"
"Comma or space separated list.", nullptr));
#endif // QT_CONFIG(tooltip)
        lineEditTags->setText(QCoreApplication::translate("AnkiSettings", "memento", nullptr));
        lineEditTags->setPlaceholderText(QCoreApplication::translate("AnkiSettings", "Card Tags", nullptr));
        labelDuplicates->setText(QCoreApplication::translate("AnkiSettings", "Duplicate Policy", nullptr));
        comboBoxDuplicates->setItemText(0, QCoreApplication::translate("AnkiSettings", "None", nullptr));
        comboBoxDuplicates->setItemText(1, QCoreApplication::translate("AnkiSettings", "Allowed in Different Decks", nullptr));
        comboBoxDuplicates->setItemText(2, QCoreApplication::translate("AnkiSettings", "Allowed in Same Deck", nullptr));

        labelNewlineReplacer->setText(QCoreApplication::translate("AnkiSettings", "Replace Newlines With", nullptr));
#if QT_CONFIG(tooltip)
        lineEditNewlineReplacer->setToolTip(QCoreApplication::translate("AnkiSettings", "<html><head/><body><p>Replaces newlines with the value specified.</p><p>By default newlines are substituted with &lt;br&gt; because HTML does not render newlines as line breaks.</p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
        labelScreenshot->setText(QCoreApplication::translate("AnkiSettings", "Screenshot File Type", nullptr));
        comboBoxScreenshot->setItemText(0, QCoreApplication::translate("AnkiSettings", "JPG", nullptr));
        comboBoxScreenshot->setItemText(1, QCoreApplication::translate("AnkiSettings", "PNG", nullptr));
        comboBoxScreenshot->setItemText(2, QCoreApplication::translate("AnkiSettings", "WebP", nullptr));

        labelAudioPadEnd->setText(QCoreApplication::translate("AnkiSettings", "Audio End Padding", nullptr));
#if QT_CONFIG(tooltip)
        spinAudioPadStart->setToolTip(QCoreApplication::translate("AnkiSettings", "Seconds of audio to clip before the start of the subtitle", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        spinAudioPadEnd->setToolTip(QCoreApplication::translate("AnkiSettings", "Seconds of audio to clip after the end of the subtitle", nullptr));
#endif // QT_CONFIG(tooltip)
        labelAudioPadStart->setText(QCoreApplication::translate("AnkiSettings", "Audio Start Padding", nullptr));
#if QT_CONFIG(tooltip)
        checkAudioNormalize->setToolTip(QCoreApplication::translate("AnkiSettings", "Normalizes {audio-media} and {audio-context} to the provided dB value.", nullptr));
#endif // QT_CONFIG(tooltip)
        checkAudioNormalize->setText(QCoreApplication::translate("AnkiSettings", "Normalize media audio to ", nullptr));
        labelAudioDb->setText(QCoreApplication::translate("AnkiSettings", "dB", nullptr));
#if QT_CONFIG(tooltip)
        labelIncludeGlossary->setToolTip(QCoreApplication::translate("AnkiSettings", "Dictionaries selected here will be included in {glossary} and {glossary-brief} for term notes by default.\n"
"This can be manually overridden when making a card by checking or unchecking glossary entries individually.", nullptr));
#endif // QT_CONFIG(tooltip)
        labelIncludeGlossary->setText(QCoreApplication::translate("AnkiSettings", "Include in Glossary", nullptr));
        labelHelpMessage->setText(QCoreApplication::translate("AnkiSettings", "Click the Help button at the bottom for more information", nullptr));
        tabTermKanji->setTabText(tabTermKanji->indexOf(layoutTerms), QCoreApplication::translate("AnkiSettings", "Term Cards", nullptr));
        tabTermKanji->setTabText(tabTermKanji->indexOf(layoutKanji), QCoreApplication::translate("AnkiSettings", "Kanji Cards", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AnkiSettings: public Ui_AnkiSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANKISETTINGS_H
