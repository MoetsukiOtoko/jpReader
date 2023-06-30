/********************************************************************************
** Form generated from reading UI file 'dictionarysettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DICTIONARYSETTINGS_H
#define UI_DICTIONARYSETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DictionarySettings
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *layoutTop;
    QListWidget *listDictionaries;
    QVBoxLayout *layoutButtons;
    QToolButton *buttonUp;
    QToolButton *buttonDown;
    QSpacerItem *spacerButtons;
    QToolButton *buttonAdd;
    QToolButton *buttonDelete;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *DictionarySettings)
    {
        if (DictionarySettings->objectName().isEmpty())
            DictionarySettings->setObjectName(QString::fromUtf8("DictionarySettings"));
        DictionarySettings->resize(315, 276);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DictionarySettings->sizePolicy().hasHeightForWidth());
        DictionarySettings->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(DictionarySettings);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        layoutTop = new QHBoxLayout();
        layoutTop->setObjectName(QString::fromUtf8("layoutTop"));
        listDictionaries = new QListWidget(DictionarySettings);
        listDictionaries->setObjectName(QString::fromUtf8("listDictionaries"));

        layoutTop->addWidget(listDictionaries);

        layoutButtons = new QVBoxLayout();
        layoutButtons->setObjectName(QString::fromUtf8("layoutButtons"));
        buttonUp = new QToolButton(DictionarySettings);
        buttonUp->setObjectName(QString::fromUtf8("buttonUp"));
        buttonUp->setEnabled(false);
        buttonUp->setMinimumSize(QSize(30, 30));

        layoutButtons->addWidget(buttonUp);

        buttonDown = new QToolButton(DictionarySettings);
        buttonDown->setObjectName(QString::fromUtf8("buttonDown"));
        buttonDown->setEnabled(false);
        buttonDown->setMinimumSize(QSize(30, 30));

        layoutButtons->addWidget(buttonDown);

        spacerButtons = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutButtons->addItem(spacerButtons);

        buttonAdd = new QToolButton(DictionarySettings);
        buttonAdd->setObjectName(QString::fromUtf8("buttonAdd"));
        buttonAdd->setMinimumSize(QSize(30, 30));

        layoutButtons->addWidget(buttonAdd);

        buttonDelete = new QToolButton(DictionarySettings);
        buttonDelete->setObjectName(QString::fromUtf8("buttonDelete"));
        buttonDelete->setEnabled(false);
        buttonDelete->setMinimumSize(QSize(30, 30));

        layoutButtons->addWidget(buttonDelete);


        layoutTop->addLayout(layoutButtons);


        verticalLayout_3->addLayout(layoutTop);

        buttonBox = new QDialogButtonBox(DictionarySettings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Reset);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(DictionarySettings);

        QMetaObject::connectSlotsByName(DictionarySettings);
    } // setupUi

    void retranslateUi(QWidget *DictionarySettings)
    {
        DictionarySettings->setWindowTitle(QCoreApplication::translate("DictionarySettings", "Dictionary Settings", nullptr));
#if QT_CONFIG(tooltip)
        buttonUp->setToolTip(QCoreApplication::translate("DictionarySettings", "Increase priority in search results", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonUp->setText(QCoreApplication::translate("DictionarySettings", "...", nullptr));
#if QT_CONFIG(tooltip)
        buttonDown->setToolTip(QCoreApplication::translate("DictionarySettings", "Decrease priority in search results", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonDown->setText(QCoreApplication::translate("DictionarySettings", "...", nullptr));
#if QT_CONFIG(tooltip)
        buttonAdd->setToolTip(QCoreApplication::translate("DictionarySettings", "Add a dictionary\n"
"Applies all settings", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonAdd->setText(QCoreApplication::translate("DictionarySettings", "...", nullptr));
#if QT_CONFIG(tooltip)
        buttonDelete->setToolTip(QCoreApplication::translate("DictionarySettings", "Remove the selected dictionary\n"
"Applies all settings", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonDelete->setText(QCoreApplication::translate("DictionarySettings", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DictionarySettings: public Ui_DictionarySettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DICTIONARYSETTINGS_H
