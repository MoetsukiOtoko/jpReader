/********************************************************************************
** Form generated from reading UI file 'termwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TERMWIDGET_H
#define UI_TERMWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TermWidget
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *layoutTop;
    QVBoxLayout *layoutKanjiKana;
    QLabel *labelKana;
    QLabel *labelKanji;
    QSpacerItem *spaceTop;
    QToolButton *buttonKanaKanji;
    QToolButton *buttonAddCard;
    QToolButton *buttonAnkiOpen;
    QToolButton *buttonAudio;
    QToolButton *buttonCollapse;
    QWidget *glossaryContainer;
    QVBoxLayout *layoutGlossaryContainer;

    void setupUi(QWidget *TermWidget)
    {
        if (TermWidget->objectName().isEmpty())
            TermWidget->setObjectName(QString::fromUtf8("TermWidget"));
        TermWidget->resize(400, 68);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(TermWidget->sizePolicy().hasHeightForWidth());
        TermWidget->setSizePolicy(sizePolicy);
        TermWidget->setMinimumSize(QSize(38, 38));
        verticalLayout = new QVBoxLayout(TermWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        layoutTop = new QHBoxLayout();
        layoutTop->setObjectName(QString::fromUtf8("layoutTop"));
        layoutKanjiKana = new QVBoxLayout();
        layoutKanjiKana->setSpacing(0);
        layoutKanjiKana->setObjectName(QString::fromUtf8("layoutKanjiKana"));
        labelKana = new QLabel(TermWidget);
        labelKana->setObjectName(QString::fromUtf8("labelKana"));
        sizePolicy.setHeightForWidth(labelKana->sizePolicy().hasHeightForWidth());
        labelKana->setSizePolicy(sizePolicy);
        labelKana->setAlignment(Qt::AlignBottom|Qt::AlignHCenter);
        labelKana->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        layoutKanjiKana->addWidget(labelKana);

        labelKanji = new QLabel(TermWidget);
        labelKanji->setObjectName(QString::fromUtf8("labelKanji"));
        sizePolicy.setHeightForWidth(labelKanji->sizePolicy().hasHeightForWidth());
        labelKanji->setSizePolicy(sizePolicy);
        labelKanji->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        labelKanji->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByMouse);

        layoutKanjiKana->addWidget(labelKanji);


        layoutTop->addLayout(layoutKanjiKana);

        spaceTop = new QSpacerItem(0, 0, QSizePolicy::Expanding, QSizePolicy::Minimum);

        layoutTop->addItem(spaceTop);

        buttonKanaKanji = new QToolButton(TermWidget);
        buttonKanaKanji->setObjectName(QString::fromUtf8("buttonKanaKanji"));
        buttonKanaKanji->setMinimumSize(QSize(30, 30));

        layoutTop->addWidget(buttonKanaKanji);

        buttonAddCard = new QToolButton(TermWidget);
        buttonAddCard->setObjectName(QString::fromUtf8("buttonAddCard"));
        buttonAddCard->setMinimumSize(QSize(30, 30));
        buttonAddCard->setContextMenuPolicy(Qt::CustomContextMenu);

        layoutTop->addWidget(buttonAddCard);

        buttonAnkiOpen = new QToolButton(TermWidget);
        buttonAnkiOpen->setObjectName(QString::fromUtf8("buttonAnkiOpen"));
        buttonAnkiOpen->setMinimumSize(QSize(30, 30));

        layoutTop->addWidget(buttonAnkiOpen);

        buttonAudio = new QToolButton(TermWidget);
        buttonAudio->setObjectName(QString::fromUtf8("buttonAudio"));
        buttonAudio->setMinimumSize(QSize(30, 30));
        buttonAudio->setContextMenuPolicy(Qt::CustomContextMenu);

        layoutTop->addWidget(buttonAudio);

        buttonCollapse = new QToolButton(TermWidget);
        buttonCollapse->setObjectName(QString::fromUtf8("buttonCollapse"));
        buttonCollapse->setMinimumSize(QSize(30, 30));
        buttonCollapse->setAutoRaise(false);

        layoutTop->addWidget(buttonCollapse);


        verticalLayout->addLayout(layoutTop);

        glossaryContainer = new QWidget(TermWidget);
        glossaryContainer->setObjectName(QString::fromUtf8("glossaryContainer"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(glossaryContainer->sizePolicy().hasHeightForWidth());
        glossaryContainer->setSizePolicy(sizePolicy1);
        layoutGlossaryContainer = new QVBoxLayout(glossaryContainer);
        layoutGlossaryContainer->setObjectName(QString::fromUtf8("layoutGlossaryContainer"));
        layoutGlossaryContainer->setContentsMargins(0, 0, 0, 0);

        verticalLayout->addWidget(glossaryContainer);


        retranslateUi(TermWidget);

        QMetaObject::connectSlotsByName(TermWidget);
    } // setupUi

    void retranslateUi(QWidget *TermWidget)
    {
        TermWidget->setWindowTitle(QCoreApplication::translate("TermWidget", "Form", nullptr));
#if QT_CONFIG(tooltip)
        buttonKanaKanji->setToolTip(QCoreApplication::translate("TermWidget", "Switch between adding the term as kanji and kana", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonKanaKanji->setText(QString());
#if QT_CONFIG(tooltip)
        buttonAddCard->setToolTip(QCoreApplication::translate("TermWidget", "Add Anki note", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        buttonAnkiOpen->setToolTip(QCoreApplication::translate("TermWidget", "Show in Anki", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        buttonAudio->setToolTip(QCoreApplication::translate("TermWidget", "Play audio", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        buttonCollapse->setToolTip(QCoreApplication::translate("TermWidget", "Minimize/Maximize", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class TermWidget: public Ui_TermWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TERMWIDGET_H
