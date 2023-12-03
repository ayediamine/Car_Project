#include "updateitemdialog.h"
#include "ui_updateitemdialog.h"

#include <QFileDialog>
#include <QMessageBox>

UpdateItemDialog::UpdateItemDialog(Item* currentItem, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateItemDialog)
{
    ui->setupUi(this);

    this->currentItem = currentItem;

    if(currentItem != nullptr)
    {
        ui->lblItemName->setText(currentItem->getName());
        QPixmap pixmap(currentItem->getImageFilePath());
        ui->lblImage->setPixmap(pixmap);
        ui->lblImage->setScaledContents(true);
        ui->sbPoids->setValue(currentItem->getPoids());
        ui->sbAnnee->setCurrentText(currentItem->getAnnée());
        ui->sbCapacite->setValue(currentItem->getBatteryCapacity());
        ui->sbConsomation->setValue(currentItem->getConsomation());

        imageFilePath = currentItem->getImageFilePath();
    }

    //connections
    connect(ui->btnConfirmEdit, &QPushButton::clicked,
            this, &UpdateItemDialog::confirmUpdate);

    connect(ui->btnLoadItemImage, &QPushButton::clicked,
            this, &UpdateItemDialog::loadItemImage);
}

UpdateItemDialog::~UpdateItemDialog()
{
    delete ui;
}

void UpdateItemDialog::confirmUpdate()
{
    int poids = ui->sbPoids->value();
    QString année = ui->sbAnnee->currentText();
    int capacité = ui->sbCapacite->value();
                   int consomation =ui->sbConsomation->value();



    if(poids >= 1)
    {
        currentItem->setPoids(poids);
        currentItem->setImageFilePath(imageFilePath);
        currentItem->setAnnée(année);
        currentItem->setBatteryCapacity(capacité);
            currentItem->setConsomation(consomation);
        this->close();
    }
    else
    {
        QMessageBox mb;
        mb.setText("Quantity must be at least 1");
        mb.exec();
    }
}//end confirmUpdate

void UpdateItemDialog::loadItemImage()
{
    QString filename;
    filename = QFileDialog::getOpenFileName(this, "Open Image", "./", "Image Files (*.png *.jpg)");

    if(filename != "")
    {
        int lastSlash = filename.lastIndexOf("/");
        QString shortName = filename.right(filename.size() - lastSlash - 1);

        QFile::copy(filename, "./images/" + shortName);
        QPixmap pixmap("./images/" + shortName);

        ui->lblImage->setPixmap(pixmap);
        ui->lblImage->setScaledContents(true);

        //update internal data
        imageFilePath = "./images/" + shortName;
    }
}//end loadItemImage




















