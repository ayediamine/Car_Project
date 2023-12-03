#ifndef ITEM_H
#define ITEM_H

#include <QString>

class Item
{
    public:
    Item(QString name,QString année, int poids ,QString imageFilePath = "none.png", int batteryCapacity=0 ,int consomation=0);

        void setName(QString name);
        QString getName() const;

        void setPoids(int poids);
        int getPoids() const;

        void setAnnée(QString année);
        QString getAnnée() const;

        void setImageFilePath(QString imageFilePath);
        QString getImageFilePath() const;

        void setBatteryCapacity(int batteryCapacity);
        int getBatteryCapacity() const;

        void setConsomation(int consomation);
        int getConsomation()const;


    private:
        QString name;
        int poids;
        QString imageFilePath;
        QString année ;
        int batteryCapacity;
        int consomation;
};

#endif // ITEM_H
