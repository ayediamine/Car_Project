#include "Item.h"

Item::Item(QString name,QString année, int poids, QString imageFilePath,int batteryCapacity , int consomation)


{
    this->name = name;
    this->poids = poids;
    this->année=année ;
    this->imageFilePath = imageFilePath;
    this->batteryCapacity=batteryCapacity;
    this->consomation=consomation;
}

void Item::setName(QString name)
{
    this->name = name;
}
QString Item::getName() const
{
    return name;
}

void Item::setPoids(int poids)
{
    this->poids = poids;
}
int Item::getPoids() const
{
    return poids;
}
void Item::setConsomation(int consomation)
{
    this->consomation = consomation;
}
int Item::getConsomation() const
{
    return consomation;
}


void Item::setBatteryCapacity(int batteryCapacity)
{
    this->batteryCapacity = batteryCapacity;
}
int Item::getBatteryCapacity() const
{
    return batteryCapacity;
}


void Item::setAnnée(QString année)
{
    this->année = année;
}
QString Item::getAnnée() const
{
    return année;
}

void Item::setImageFilePath(QString imageFilePath)
{
    this->imageFilePath = imageFilePath;
}
QString Item::getImageFilePath() const
{
    return imageFilePath;
}
//change for conflict from remote
