#ifndef VALIDTRIPSSCENE_H
#define VALIDTRIPSSCENE_H

#include <QString>
#include <QMap>
#include <QVector>
#include <QPair>
#include <QMultiMap>
#include <QDebug>
#include <QWidget>
#include <adjgraph.h>
namespace Ui {
class ValidTripsScene;
}

class ValidTripsScene : public QWidget
{
    Q_OBJECT

public:
    explicit ValidTripsScene(const QString& departureCity,const QString& arrivalCity,bool traversingDFS,int budget,adjmap adj,QWidget *parent = nullptr);
    ~ValidTripsScene();

private:
    QString departureCity;
    QString arrivalCity;
    int budget;
    QMultiMap<int,QVector<QPair<QString,Connection>>> validTrips;
    Ui::ValidTripsScene *ui;
};

#endif // VALIDTRIPSSCENE_H
