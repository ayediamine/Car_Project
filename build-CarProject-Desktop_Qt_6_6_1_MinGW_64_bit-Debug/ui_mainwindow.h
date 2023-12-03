/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *menNewProduct;
    QAction *menuEditSelectedProduct;
    QAction *menuSaveProducts;
    QAction *menuLoadProducts;
    QAction *menuExit;
    QWidget *centralwidget;
    QListWidget *lstProducts;
    QLabel *label;
    QLabel *label_2;
    QLabel *lblProductName;
    QLabel *lblQuantity;
    QLabel *lblImage;
    QPushButton *btnRemove;
    QLabel *lblAnnee;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *lblCapacite;
    QLabel *label_6;
    QLabel *lblConsomation;
    QLabel *label_7;
    QLabel *lblAutonomie;
    QMenuBar *menubar;
    QMenu *menuFile;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        menNewProduct = new QAction(MainWindow);
        menNewProduct->setObjectName("menNewProduct");
        menuEditSelectedProduct = new QAction(MainWindow);
        menuEditSelectedProduct->setObjectName("menuEditSelectedProduct");
        menuSaveProducts = new QAction(MainWindow);
        menuSaveProducts->setObjectName("menuSaveProducts");
        menuLoadProducts = new QAction(MainWindow);
        menuLoadProducts->setObjectName("menuLoadProducts");
        menuExit = new QAction(MainWindow);
        menuExit->setObjectName("menuExit");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        lstProducts = new QListWidget(centralwidget);
        lstProducts->setObjectName("lstProducts");
        lstProducts->setGeometry(QRect(20, 10, 281, 411));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(310, 20, 171, 41));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(310, 70, 171, 31));
        label_2->setFont(font);
        lblProductName = new QLabel(centralwidget);
        lblProductName->setObjectName("lblProductName");
        lblProductName->setGeometry(QRect(620, 20, 161, 31));
        lblProductName->setFont(font);
        lblProductName->setFrameShape(QFrame::Panel);
        lblQuantity = new QLabel(centralwidget);
        lblQuantity->setObjectName("lblQuantity");
        lblQuantity->setGeometry(QRect(620, 70, 161, 31));
        lblQuantity->setFont(font);
        lblQuantity->setFrameShape(QFrame::Panel);
        lblImage = new QLabel(centralwidget);
        lblImage->setObjectName("lblImage");
        lblImage->setGeometry(QRect(400, 310, 241, 231));
        lblImage->setFont(font);
        lblImage->setFrameShape(QFrame::Panel);
        btnRemove = new QPushButton(centralwidget);
        btnRemove->setObjectName("btnRemove");
        btnRemove->setGeometry(QRect(20, 450, 281, 31));
        btnRemove->setFont(font);
        lblAnnee = new QLabel(centralwidget);
        lblAnnee->setObjectName("lblAnnee");
        lblAnnee->setGeometry(QRect(620, 120, 161, 31));
        lblAnnee->setFont(font);
        lblAnnee->setFrameShape(QFrame::Panel);
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(310, 120, 91, 31));
        label_3->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(310, 170, 261, 31));
        label_5->setFont(font);
        lblCapacite = new QLabel(centralwidget);
        lblCapacite->setObjectName("lblCapacite");
        lblCapacite->setGeometry(QRect(620, 170, 161, 31));
        lblCapacite->setFont(font);
        lblCapacite->setFrameShape(QFrame::Panel);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(310, 210, 311, 31));
        label_6->setFont(font);
        lblConsomation = new QLabel(centralwidget);
        lblConsomation->setObjectName("lblConsomation");
        lblConsomation->setGeometry(QRect(620, 210, 161, 31));
        lblConsomation->setFont(font);
        lblConsomation->setFrameShape(QFrame::Panel);
        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(310, 260, 311, 31));
        label_7->setFont(font);
        lblAutonomie = new QLabel(centralwidget);
        lblAutonomie->setObjectName("lblAutonomie");
        lblAutonomie->setGeometry(QRect(620, 260, 161, 31));
        lblAutonomie->setFont(font);
        lblAutonomie->setFrameShape(QFrame::Panel);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName("menuFile");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuFile->menuAction());
        menuFile->addAction(menNewProduct);
        menuFile->addAction(menuEditSelectedProduct);
        menuFile->addSeparator();
        menuFile->addSeparator();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Store Inventory Application", nullptr));
        menNewProduct->setText(QCoreApplication::translate("MainWindow", "New Product", nullptr));
        menuEditSelectedProduct->setText(QCoreApplication::translate("MainWindow", "Edit Selected Product", nullptr));
        menuSaveProducts->setText(QCoreApplication::translate("MainWindow", "Save Products", nullptr));
        menuLoadProducts->setText(QCoreApplication::translate("MainWindow", "Load Products", nullptr));
        menuExit->setText(QCoreApplication::translate("MainWindow", "Exit", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Selected Category ", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\303\242ge du v\303\251hicule", nullptr));
        lblProductName->setText(QString());
        lblQuantity->setText(QString());
        lblImage->setText(QString());
        btnRemove->setText(QCoreApplication::translate("MainWindow", "Remove Selected Product", nullptr));
        lblAnnee->setText(QString());
        label_3->setText(QCoreApplication::translate("MainWindow", "Ann\303\251e ", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Capacite   de la batterie(kWh) ", nullptr));
        lblCapacite->setText(QString());
        label_6->setText(QCoreApplication::translate("MainWindow", "Consomation specifique  (kWh/km) ", nullptr));
        lblConsomation->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "Autonomie (Km)", nullptr));
        lblAutonomie->setText(QString());
        menuFile->setTitle(QCoreApplication::translate("MainWindow", "File", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
