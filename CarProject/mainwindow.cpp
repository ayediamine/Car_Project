#include "additemdialog.h"
#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "updateitemdialog.h"
#include <QProgressBar>


#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QString>
#include <QStringList>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);


    //registering the events
    connect(ui->menNewProduct, &QAction::triggered,
            this, &MainWindow::handleMenuItemNew);

    connect(ui->btnRemove, &QPushButton::clicked,
            this, &MainWindow::removeSelectedProduct);

    connect(ui->lstProducts, &QListWidget::itemClicked,
            this, &MainWindow::handleItemClick);

    connect(ui->menuEditSelectedProduct, &QAction::triggered,
            this, &MainWindow::handleMenuItemEdit);

    connect(ui->menuSaveProducts, &QAction::triggered,
            this, &MainWindow::handleSaveItems);

    connect(ui->menuLoadProducts, &QAction::triggered,
            this, &MainWindow::handleLoadItems);
}


MainWindow::~MainWindow()
{
    //free up product list memory
    for(Item* product : productList)
    {
        delete product;
    }
    productList.clear();

    delete ui;
}

void MainWindow::handleMenuItemNew()
{
    Item* newItem = nullptr;
    AddItemDialog addItemDialog(newItem, nullptr);

    addItemDialog.setModal(true);

    //open the addItemDialog ui
    addItemDialog.exec();

    if(newItem != nullptr)
    {
        // actual vector that contains the items
        productList.push_back(newItem);
        // just for viewing the item name in the ui list
        ui->lstProducts->addItem(newItem->getName());

    }// end if
}// end handleMenuItemNew


void MainWindow::removeSelectedProduct()
{
    int index = ui->lstProducts->currentRow();

    if(index >= 0)
    {
        // remove from vector
        Item* theItem = productList.at(index);

        // removes the actual object occupied in memory (returns memory)
        delete theItem;

        // removes dangling pointer inside of the vecotr
        productList.removeAt(index);

        //remove from list widget in the UI
        delete ui->lstProducts->currentItem();
    }// end if

    //set image to none.png, default
    QPixmap pixmap("none.pn");
    ui->lblImage->setPixmap(pixmap);

}// end removeSelectedProduct


void MainWindow::handleItemClick(QListWidgetItem* item)
{
    //grabs the index of the item clicked on by the user in the ui list
    int index = item->listWidget()->currentRow();

    // shows the item details for the item that was clicked on by the user in the ui list
    if(index != -1)
    {
        Item* currentItem = productList.at(index);

        if(currentItem != nullptr)
        {
            ui->lblProductName->setText(currentItem->getName());
            ui->lblQuantity->setText(QString::number(currentItem->getPoids()));
            ui->lblAnnee->setText(currentItem->getAnnée());
            ui->lblCapacite->setText(QString::number(currentItem->getBatteryCapacity()));
            ui->lblConsomation->setText(QString::number(currentItem->getConsomation()));
            double autonomie = currentItem->getBatteryCapacity() / currentItem->getConsomation();
            ui->lblAutonomie->setText(QString::number(autonomie));

            QPixmap pixmap(currentItem->getImageFilePath());

            ui->lblImage->setPixmap(pixmap);
            ui->lblImage->setScaledContents(true);
        }// end inner if
    }//end if
}// end handleItemClick

// handles the main window's item list,
// so when each item is clicked on it displays the correct
//product name, quantity and image
void MainWindow::handleMenuItemEdit()
{
    int index = ui->lstProducts->currentRow();

    if(index != -1)
    {
        // currentItem will point to the same object in the vector productList at this particular index
        Item* currentItem = productList.at(index);

        if(currentItem != nullptr)
        {
            UpdateItemDialog updateItemDialog(currentItem, nullptr);
            updateItemDialog.exec();

            //make sure UI is updated
            ui->lblProductName->setText(currentItem->getName());
            ui->lblQuantity->setText(QString::number(currentItem->getPoids()));
            ui->lblAnnee->setText(currentItem->getAnnée());
            QPixmap pixmap(currentItem->getImageFilePath());
            ui->lblCapacite->setText(QString::number(currentItem->getBatteryCapacity()));
            ui->lblConsomation->setText(QString::number(currentItem->getConsomation()));
            double autonomie = currentItem->getBatteryCapacity() / currentItem->getConsomation();
            ui->lblAutonomie->setText(QString::number(autonomie));
            ui->lblImage->setPixmap(pixmap);
            ui->lblImage->setScaledContents(true);

        }//end inner if
    }// end if
}// end handleMenuItemEdit


void MainWindow::handleSaveItems()
{
    QFile outputFile("products.txt");

    outputFile.open(QIODevice::WriteOnly |
                    QIODevice::Text);

    QTextStream out(&outputFile);

    for(Item* product : productList)
    {
        out<<product->getName()<<",";
        out<<product->getPoids()<<",";
        out<<product->getAnnée()<<",";
        out<<product->getBatteryCapacity()<<",";
        out<<product->getConsomation()<<",";

        out<<product->getImageFilePath()<<Qt::endl;
    }//end for

    out.flush();
    outputFile.close();

}//end handleSaveItems


void MainWindow::handleLoadItems()
{
    QFile inputFile("products.txt");

    inputFile.open(QIODevice::ReadOnly |
                   QIODevice::Text);

    QTextStream in(&inputFile);

    //clear current list and vector
    for(Item* temp : productList)
    {
        delete temp;
    }// end for

    productList.clear();
    ui->lstProducts->clear();

    while(!in.atEnd())
    {
        QString line = in.readLine();
        QStringList info = line.split(",");

        //handle list of products UI
        ui->lstProducts->addItem(info.at(0));

        //handle vector
        Item* product = new Item(info.at(0),
                                 info.at(1),
                                 info.at(2).toInt(),
                                 info.at(3),
                                 info.at(4).toInt(),
                                 info.at(5).toInt());

        productList.push_back(product);

    }//end while

    in.flush();
    inputFile.close();
}//end handleLoadItems









































