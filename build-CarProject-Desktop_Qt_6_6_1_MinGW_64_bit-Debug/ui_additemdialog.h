/********************************************************************************
** Form generated from reading UI file 'additemdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDITEMDIALOG_H
#define UI_ADDITEMDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AddItemDialog
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *txtProductName;
    QSpinBox *sbPoids;
    QLabel *lblImage;
    QPushButton *btnConfirmAdd;
    QPushButton *btnLoadImage;
    QLabel *label_4;
    QLabel *label_5;
    QSpinBox *sbCapacite;
    QComboBox *sbAnnee;
    QLabel *label_6;
    QSpinBox *sbConsomation;

    void setupUi(QDialog *AddItemDialog)
    {
        if (AddItemDialog->objectName().isEmpty())
            AddItemDialog->setObjectName("AddItemDialog");
        AddItemDialog->resize(593, 627);
        label = new QLabel(AddItemDialog);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 161, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(AddItemDialog);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 80, 161, 31));
        label_2->setFont(font);
        label_3 = new QLabel(AddItemDialog);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 300, 101, 21));
        label_3->setFont(font);
        txtProductName = new QLineEdit(AddItemDialog);
        txtProductName->setObjectName("txtProductName");
        txtProductName->setGeometry(QRect(350, 30, 191, 31));
        txtProductName->setFont(font);
        sbPoids = new QSpinBox(AddItemDialog);
        sbPoids->setObjectName("sbPoids");
        sbPoids->setGeometry(QRect(350, 90, 191, 31));
        sbPoids->setFont(font);
        sbPoids->setMinimum(1);
        sbPoids->setMaximum(1000);
        lblImage = new QLabel(AddItemDialog);
        lblImage->setObjectName("lblImage");
        lblImage->setGeometry(QRect(210, 310, 250, 250));
        lblImage->setFrameShape(QFrame::Panel);
        btnConfirmAdd = new QPushButton(AddItemDialog);
        btnConfirmAdd->setObjectName("btnConfirmAdd");
        btnConfirmAdd->setGeometry(QRect(270, 570, 131, 31));
        btnConfirmAdd->setFont(font);
        btnLoadImage = new QPushButton(AddItemDialog);
        btnLoadImage->setObjectName("btnLoadImage");
        btnLoadImage->setGeometry(QRect(30, 330, 161, 31));
        btnLoadImage->setFont(font);
        label_4 = new QLabel(AddItemDialog);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 140, 111, 16));
        label_4->setFont(font);
        label_5 = new QLabel(AddItemDialog);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(30, 180, 271, 31));
        label_5->setFont(font);
        sbCapacite = new QSpinBox(AddItemDialog);
        sbCapacite->setObjectName("sbCapacite");
        sbCapacite->setGeometry(QRect(350, 180, 191, 31));
        sbCapacite->setFont(font);
        sbCapacite->setMinimum(1);
        sbCapacite->setMaximum(1000);
        sbAnnee = new QComboBox(AddItemDialog);
        sbAnnee->addItem(QString());
        sbAnnee->addItem(QString());
        sbAnnee->addItem(QString());
        sbAnnee->addItem(QString());
        sbAnnee->addItem(QString());
        sbAnnee->setObjectName("sbAnnee");
        sbAnnee->setGeometry(QRect(350, 140, 191, 26));
        label_6 = new QLabel(AddItemDialog);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(30, 230, 311, 31));
        label_6->setFont(font);
        sbConsomation = new QSpinBox(AddItemDialog);
        sbConsomation->setObjectName("sbConsomation");
        sbConsomation->setGeometry(QRect(350, 230, 191, 31));
        sbConsomation->setFont(font);
        sbConsomation->setMinimum(1);
        sbConsomation->setMaximum(1000);

        retranslateUi(AddItemDialog);

        QMetaObject::connectSlotsByName(AddItemDialog);
    } // setupUi

    void retranslateUi(QDialog *AddItemDialog)
    {
        AddItemDialog->setWindowTitle(QCoreApplication::translate("AddItemDialog", "Add Item", nullptr));
        label->setText(QCoreApplication::translate("AddItemDialog", "Product Category:", nullptr));
        label_2->setText(QCoreApplication::translate("AddItemDialog", "\303\242ge du v\303\251hicule", nullptr));
        label_3->setText(QCoreApplication::translate("AddItemDialog", "Item Image:", nullptr));
        lblImage->setText(QString());
        btnConfirmAdd->setText(QCoreApplication::translate("AddItemDialog", "Confirm Add", nullptr));
        btnLoadImage->setText(QCoreApplication::translate("AddItemDialog", "Load Item Image", nullptr));
        label_4->setText(QCoreApplication::translate("AddItemDialog", "Ann\303\251e", nullptr));
        label_5->setText(QCoreApplication::translate("AddItemDialog", "Capacite   de la batterie(kWh)", nullptr));
        sbAnnee->setItemText(0, QCoreApplication::translate("AddItemDialog", "2023", nullptr));
        sbAnnee->setItemText(1, QCoreApplication::translate("AddItemDialog", "2022", nullptr));
        sbAnnee->setItemText(2, QCoreApplication::translate("AddItemDialog", "2021", nullptr));
        sbAnnee->setItemText(3, QCoreApplication::translate("AddItemDialog", "2020", nullptr));
        sbAnnee->setItemText(4, QCoreApplication::translate("AddItemDialog", "2019", nullptr));

        label_6->setText(QCoreApplication::translate("AddItemDialog", "Consomation specifique  (kWh/km)", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddItemDialog: public Ui_AddItemDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDITEMDIALOG_H
