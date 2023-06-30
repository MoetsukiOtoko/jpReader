/********************************************************************************
** Form generated from reading UI file 'optionswindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTIONSWINDOW_H
#define UI_OPTIONSWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OptionsWindow
{
public:
    QHBoxLayout *horizontalLayout;
    QListWidget *listOptions;
    QVBoxLayout *horizontalLayout_2;
    QLabel *labelOption;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *layoutWidgets;

    void setupUi(QWidget *OptionsWindow)
    {
        if (OptionsWindow->objectName().isEmpty())
            OptionsWindow->setObjectName(QString::fromUtf8("OptionsWindow"));
        OptionsWindow->resize(1042, 695);
        OptionsWindow->setMinimumSize(QSize(800, 400));
        horizontalLayout = new QHBoxLayout(OptionsWindow);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        listOptions = new QListWidget(OptionsWindow);
        listOptions->setObjectName(QString::fromUtf8("listOptions"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(listOptions->sizePolicy().hasHeightForWidth());
        listOptions->setSizePolicy(sizePolicy);
        listOptions->setSortingEnabled(true);

        horizontalLayout->addWidget(listOptions);

        horizontalLayout_2 = new QVBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelOption = new QLabel(OptionsWindow);
        labelOption->setObjectName(QString::fromUtf8("labelOption"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelOption->sizePolicy().hasHeightForWidth());
        labelOption->setSizePolicy(sizePolicy1);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelOption->setFont(font);

        horizontalLayout_2->addWidget(labelOption);

        scrollArea = new QScrollArea(OptionsWindow);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setFocusPolicy(Qt::NoFocus);
        scrollArea->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContents);
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 748, 641));
        layoutWidgets = new QVBoxLayout(scrollAreaWidgetContents);
        layoutWidgets->setSpacing(0);
        layoutWidgets->setObjectName(QString::fromUtf8("layoutWidgets"));
        layoutWidgets->setContentsMargins(0, 0, 0, 0);
        scrollArea->setWidget(scrollAreaWidgetContents);

        horizontalLayout_2->addWidget(scrollArea);


        horizontalLayout->addLayout(horizontalLayout_2);


        retranslateUi(OptionsWindow);

        QMetaObject::connectSlotsByName(OptionsWindow);
    } // setupUi

    void retranslateUi(QWidget *OptionsWindow)
    {
        OptionsWindow->setWindowTitle(QCoreApplication::translate("OptionsWindow", "Options", nullptr));
        labelOption->setText(QCoreApplication::translate("OptionsWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class OptionsWindow: public Ui_OptionsWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTIONSWINDOW_H
