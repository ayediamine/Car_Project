/********************************************************************************
** Form generated from reading UI file 'updateitemdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEITEMDIALOG_H
#define UI_UPDATEITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_UpdateItemDialog
{
public:
    QLabel *lblItemName;
    QLabel *label;
    QLabel *label_2;
    QSpinBox *sbPoids;
    QLabel *lblImage;
    QPushButton *btnLoadItemImage;
    QPushButton *btnConfirmEdit;
    QLabel *label_3;
    QLabel *label_5;
    QSpinBox *sbCapacite;
    QComboBox *sbAnnee;
    QLabel *label_6;
    QSpinBox *sbConsomation;

    void setupUi(QDialog *UpdateItemDialog)
    {
        if (UpdateItemDialog->objectName().isEmpty())
            UpdateItemDialog->setObjectName("UpdateItemDialog");
        UpdateItemDialog->resize(521, 588);
        lblItemName = new QLabel(UpdateItemDialog);
        lblItemName->setObjectName("lblItemName");
        lblItemName->setGeometry(QRect(210, 20, 111, 31));
        QFont font;
        font.setPointSize(12);
        lblItemName->setFont(font);
        label = new QLabel(UpdateItemDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 70, 161, 21));
        label->setFont(font);
        label_2 = new QLabel(UpdateItemDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(40, 260, 111, 31));
        label_2->setFont(font);
        sbPoids = new QSpinBox(UpdateItemDialog);
        sbPoids->setObjectName("sbPoids");
        sbPoids->setGeometry(QRect(330, 70, 151, 31));
        sbPoids->setFont(font);
        sbPoids->setMinimum(1);
        sbPoids->setMaximum(1000);
        lblImage = new QLabel(UpdateItemDialog);
        lblImage->setObjectName("lblImage");
        lblImage->setGeometry(QRect(210, 280, 250, 250));
        lblImage->setFrameShape(QFrame::Panel);
        btnLoadItemImage = new QPushButton(UpdateItemDialog);
        btnLoadItemImage->setObjectName("btnLoadItemImage");
        btnLoadItemImage->setGeometry(QRect(39, 300, 161, 31));
        btnLoadItemImage->setFont(font);
        btnConfirmEdit = new QPushButton(UpdateItemDialog);
        btnConfirmEdit->setObjectName("btnConfirmEdit");
        btnConfirmEdit->setGeometry(QRect(250, 540, 111, 31));
        btnConfirmEdit->setFont(font);
        label_3 = new QLabel(UpdateItemDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 120, 71, 21));
        label_3->setFont(font);
        label_5 = new QLabel(UpdateItemDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 160, 261, 31));
        label_5->setFont(font);
        sbCapacite = new QSpinBox(UpdateItemDialog);
        sbCapacite->setObjectName("sbCapacite");
        sbCapacite->setGeometry(QRect(330, 160, 151, 31));
        sbCapacite->setFont(font);
        sbCapacite->setMinimum(1);
        sbCapacite->setMaximum(1000);
        sbAnnee = new QComboBox(UpdateItemDialog);
        sbAnnee->addItem(QString());
        sbAnnee->addItem(QString());
        sbAnnee->addItem(QString());
        sbAnnee->addItem(QString());
        sbAnnee->addItem(QString());
        sbAnnee->setObjectName("sbAnnee");
        sbAnnee->setGeometry(QRect(330, 120, 151, 26));
        label_6 = new QLabel(UpdateItemDialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(20, 210, 311, 31));
        label_6->setFont(font);
        sbConsomation = new QSpinBox(UpdateItemDialog);
        sbConsomation->setObjectName("sbConsomation");
        sbConsomation->setGeometry(QRect(330, 210, 151, 31));
        sbConsomation->setFont(font);
        sbConsomation->setMinimum(1);
        sbConsomation->setMaximum(1000);

        retranslateUi(UpdateItemDialog);

        QMetaObject::connectSlotsByName(UpdateItemDialog);
    } // setupUi

    void retranslateUi(QDialog *UpdateItemDialog)
    {
        UpdateItemDialog->setWindowTitle(QCoreApplication::translate("UpdateItemDialog", "Update Item", nullptr));
        lblItemName->setText(QCoreApplication::translate("UpdateItemDialog", "Category Of Item:", nullptr));
        label->setText(QCoreApplication::translate("UpdateItemDialog", "\303\242ge du v\303\251hicule", nullptr));
        label_2->setText(QCoreApplication::translate("UpdateItemDialog", "Item Image:", nullptr));
        lblImage->setText(QString());
        btnLoadItemImage->setText(QCoreApplication::translate("UpdateItemDialog", "Load Item Image", nullptr));
        btnConfirmEdit->setText(QCoreApplication::translate("UpdateItemDialog", "Confirm Edit", nullptr));
        label_3->setText(QCoreApplication::translate("UpdateItemDialog", "Ann\303\251e", nullptr));
        label_5->setText(QCoreApplication::translate("UpdateItemDialog", "Capacite   de la batterie(kWh)", nullptr));
        sbAnnee->setItemText(0, QCoreApplication::translate("UpdateItemDialog", "2023", nullptr));
        sbAnnee->setItemText(1, QCoreApplication::translate("UpdateItemDialog", "2022", nullptr));
        sbAnnee->setItemText(2, QCoreApplication::translate("UpdateItemDialog", "2021", nullptr));
        sbAnnee->setItemText(3, QCoreApplication::translate("UpdateItemDialog", "2020", nullptr));
        sbAnnee->setItemText(4, QCoreApplication::translate("UpdateItemDialog", "2019", nullptr));

        label_6->setText(QCoreApplication::translate("UpdateItemDialog", "Consomation specifique  (kWh/km)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateItemDialog: public Ui_UpdateItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEITEMDIALOG_H
