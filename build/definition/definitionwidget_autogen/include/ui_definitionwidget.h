/********************************************************************************
** Form generated from reading UI file 'definitionwidget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEFINITIONWIDGET_H
#define UI_DEFINITIONWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DefinitionWidget
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *widgetNav;
    QHBoxLayout *horizontalLayout;
    QToolButton *buttonClose;
    QScrollArea *scrollArea;
    QWidget *scrollAreaContents;
    QVBoxLayout *layoutScroll;

    void setupUi(QWidget *DefinitionWidget)
    {
        if (DefinitionWidget->objectName().isEmpty())
            DefinitionWidget->setObjectName(QString::fromUtf8("DefinitionWidget"));
        DefinitionWidget->resize(500, 400);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(DefinitionWidget->sizePolicy().hasHeightForWidth());
        DefinitionWidget->setSizePolicy(sizePolicy);
        DefinitionWidget->setAutoFillBackground(true);
        DefinitionWidget->setWindowFilePath(QString::fromUtf8(""));
        verticalLayout = new QVBoxLayout(DefinitionWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        widgetNav = new QWidget(DefinitionWidget);
        widgetNav->setObjectName(QString::fromUtf8("widgetNav"));
        horizontalLayout = new QHBoxLayout(widgetNav);
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttonClose = new QToolButton(widgetNav);
        buttonClose->setObjectName(QString::fromUtf8("buttonClose"));
        buttonClose->setMinimumSize(QSize(30, 30));
        buttonClose->setAutoRaise(true);

        horizontalLayout->addWidget(buttonClose);


        verticalLayout->addWidget(widgetNav, 0, Qt::AlignRight);

        scrollArea = new QScrollArea(DefinitionWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(scrollArea->sizePolicy().hasHeightForWidth());
        scrollArea->setSizePolicy(sizePolicy1);
        scrollArea->setFocusPolicy(Qt::NoFocus);
        scrollArea->setFrameShape(QFrame::StyledPanel);
        scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        scrollArea->setWidgetResizable(true);
        scrollAreaContents = new QWidget();
        scrollAreaContents->setObjectName(QString::fromUtf8("scrollAreaContents"));
        scrollAreaContents->setGeometry(QRect(0, 0, 484, 344));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(scrollAreaContents->sizePolicy().hasHeightForWidth());
        scrollAreaContents->setSizePolicy(sizePolicy2);
        layoutScroll = new QVBoxLayout(scrollAreaContents);
        layoutScroll->setObjectName(QString::fromUtf8("layoutScroll"));
        scrollArea->setWidget(scrollAreaContents);

        verticalLayout->addWidget(scrollArea);


        retranslateUi(DefinitionWidget);

        QMetaObject::connectSlotsByName(DefinitionWidget);
    } // setupUi

    void retranslateUi(QWidget *DefinitionWidget)
    {
        DefinitionWidget->setWindowTitle(QCoreApplication::translate("DefinitionWidget", "Form", nullptr));
#if QT_CONFIG(tooltip)
        widgetNav->setToolTip(QCoreApplication::translate("DefinitionWidget", "Close", nullptr));
#endif // QT_CONFIG(tooltip)
        buttonClose->setText(QCoreApplication::translate("DefinitionWidget", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DefinitionWidget: public Ui_DefinitionWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEFINITIONWIDGET_H
