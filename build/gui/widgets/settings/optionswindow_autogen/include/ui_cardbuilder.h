/********************************************************************************
** Form generated from reading UI file 'cardbuilder.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARDBUILDER_H
#define UI_CARDBUILDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "gui/widgets/common/scrollcombobox.h"

QT_BEGIN_NAMESPACE

class Ui_CardBuilder
{
public:
    QVBoxLayout *verticalLayout;
    QGridLayout *layoutCards;
    ScrollComboBox *comboBoxDeck;
    ScrollComboBox *comboBoxModel;
    QLabel *labelDeck;
    QLabel *labelModel;
    QTableWidget *tableFields;

    void setupUi(QWidget *CardBuilder)
    {
        if (CardBuilder->objectName().isEmpty())
            CardBuilder->setObjectName(QString::fromUtf8("CardBuilder"));
        CardBuilder->resize(268, 276);
        verticalLayout = new QVBoxLayout(CardBuilder);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        layoutCards = new QGridLayout();
        layoutCards->setObjectName(QString::fromUtf8("layoutCards"));
        comboBoxDeck = new ScrollComboBox(CardBuilder);
        comboBoxDeck->setObjectName(QString::fromUtf8("comboBoxDeck"));
        comboBoxDeck->setInsertPolicy(QComboBox::InsertAlphabetically);

        layoutCards->addWidget(comboBoxDeck, 2, 0, 1, 1);

        comboBoxModel = new ScrollComboBox(CardBuilder);
        comboBoxModel->setObjectName(QString::fromUtf8("comboBoxModel"));
        comboBoxModel->setInsertPolicy(QComboBox::InsertAlphabetically);

        layoutCards->addWidget(comboBoxModel, 2, 1, 1, 1);

        labelDeck = new QLabel(CardBuilder);
        labelDeck->setObjectName(QString::fromUtf8("labelDeck"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelDeck->sizePolicy().hasHeightForWidth());
        labelDeck->setSizePolicy(sizePolicy);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        labelDeck->setFont(font);

        layoutCards->addWidget(labelDeck, 0, 0, 1, 1);

        labelModel = new QLabel(CardBuilder);
        labelModel->setObjectName(QString::fromUtf8("labelModel"));
        sizePolicy.setHeightForWidth(labelModel->sizePolicy().hasHeightForWidth());
        labelModel->setSizePolicy(sizePolicy);
        labelModel->setFont(font);

        layoutCards->addWidget(labelModel, 0, 1, 1, 1);


        verticalLayout->addLayout(layoutCards);

        tableFields = new QTableWidget(CardBuilder);
        if (tableFields->columnCount() < 2)
            tableFields->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableFields->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableFields->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        tableFields->setObjectName(QString::fromUtf8("tableFields"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableFields->sizePolicy().hasHeightForWidth());
        tableFields->setSizePolicy(sizePolicy1);
        tableFields->horizontalHeader()->setStretchLastSection(true);
        tableFields->verticalHeader()->setVisible(false);
        tableFields->verticalHeader()->setStretchLastSection(false);

        verticalLayout->addWidget(tableFields);


        retranslateUi(CardBuilder);

        QMetaObject::connectSlotsByName(CardBuilder);
    } // setupUi

    void retranslateUi(QWidget *CardBuilder)
    {
        CardBuilder->setWindowTitle(QCoreApplication::translate("CardBuilder", "Form", nullptr));
        labelDeck->setText(QCoreApplication::translate("CardBuilder", "Deck", nullptr));
        labelModel->setText(QCoreApplication::translate("CardBuilder", "Model", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableFields->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("CardBuilder", "Field", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableFields->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("CardBuilder", "Value", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CardBuilder: public Ui_CardBuilder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARDBUILDER_H
