/********************************************************************************
** Form generated from reading UI file 'audiosourcesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AUDIOSOURCESETTINGS_H
#define UI_AUDIOSOURCESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AudioSourceSettings
{
public:
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *layoutTableButtons;
    QTableWidget *table;
    QVBoxLayout *layoutButtons;
    QToolButton *buttonUp;
    QToolButton *buttonDown;
    QSpacerItem *spacerButtons;
    QDialogButtonBox *buttonBox;

    void setupUi(QWidget *AudioSourceSettings)
    {
        if (AudioSourceSettings->objectName().isEmpty())
            AudioSourceSettings->setObjectName(QString::fromUtf8("AudioSourceSettings"));
        AudioSourceSettings->resize(699, 550);
        verticalLayout_2 = new QVBoxLayout(AudioSourceSettings);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        layoutTableButtons = new QHBoxLayout();
        layoutTableButtons->setObjectName(QString::fromUtf8("layoutTableButtons"));
        table = new QTableWidget(AudioSourceSettings);
        if (table->columnCount() < 4)
            table->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        if (table->rowCount() < 1)
            table->setRowCount(1);
        table->setObjectName(QString::fromUtf8("table"));
        table->setSelectionMode(QAbstractItemView::NoSelection);
        table->setRowCount(1);
        table->horizontalHeader()->setCascadingSectionResizes(false);
        table->horizontalHeader()->setStretchLastSection(true);
        table->verticalHeader()->setVisible(false);

        layoutTableButtons->addWidget(table);

        layoutButtons = new QVBoxLayout();
        layoutButtons->setObjectName(QString::fromUtf8("layoutButtons"));
        buttonUp = new QToolButton(AudioSourceSettings);
        buttonUp->setObjectName(QString::fromUtf8("buttonUp"));
        buttonUp->setEnabled(false);
        buttonUp->setMinimumSize(QSize(30, 30));

        layoutButtons->addWidget(buttonUp);

        buttonDown = new QToolButton(AudioSourceSettings);
        buttonDown->setObjectName(QString::fromUtf8("buttonDown"));
        buttonDown->setEnabled(false);
        buttonDown->setMinimumSize(QSize(30, 30));

        layoutButtons->addWidget(buttonDown);

        spacerButtons = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        layoutButtons->addItem(spacerButtons);


        layoutTableButtons->addLayout(layoutButtons);


        verticalLayout_2->addLayout(layoutTableButtons);

        buttonBox = new QDialogButtonBox(AudioSourceSettings);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Help|QDialogButtonBox::Reset|QDialogButtonBox::RestoreDefaults);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(AudioSourceSettings);

        QMetaObject::connectSlotsByName(AudioSourceSettings);
    } // setupUi

    void retranslateUi(QWidget *AudioSourceSettings)
    {
        AudioSourceSettings->setWindowTitle(QCoreApplication::translate("AudioSourceSettings", "Form", nullptr));
        QTableWidgetItem *___qtablewidgetitem = table->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("AudioSourceSettings", "Source Name", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = table->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("AudioSourceSettings", "URL", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = table->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("AudioSourceSettings", "Type", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = table->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("AudioSourceSettings", "MD5 Skip Hash", nullptr));
        buttonUp->setText(QCoreApplication::translate("AudioSourceSettings", "...", nullptr));
        buttonDown->setText(QCoreApplication::translate("AudioSourceSettings", "...", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AudioSourceSettings: public Ui_AudioSourceSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AUDIOSOURCESETTINGS_H
