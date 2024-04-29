#include "mainwindow.h"
#include <QApplication>
#include <Qfile>
#include <QTextStream>
#include <QVector>
#include <QMap>
#include <QPair>
#include <QDebug>
#include <adjgraph.h>
#include <depthfirstsearch.h>
adjmap adj;
void readfile(QString filename)
{
    QFile file(filename);

    if(!file.open(QIODevice::ReadOnly))
    {
        qCritical() << file.errorString();
        return;
    }
    QTextStream stream(&file);
    while(!stream.atEnd())
    {
        QString line = stream.readLine();
        if(line.size() > 3)
        {
            QStringList parts = line.split(" ");
            Connection tmper;
            QString from = parts[0];
            QString to = parts[2];
            QVector<Connection> transportation;
            for(int i = 3; i < parts.size(); i += 2)
            {
                tmper.vehicle = parts[i];
                tmper.cost = parts[i+1].toInt();
                transportation.push_back(tmper);
            }
            adj[from][to] = transportation;
            adj[to][from] = transportation;
        }
    }

    file.close();
}



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    readfile("TransportationMap.txt");
    // for(auto it1 = adj["Cairo"].begin(); it1 != adj["Cairo"].end(); ++it1) // 1
    // {
    //     for(auto& transportation : it1.value()) // 2
    //     {
    //         qInfo() << it1.key() << " " << transportation.vehicle << " " << transportation.cost << "\n";
    //     }

    // // }
    // 5
    //     Cairo - Giza Metro 30 Bus 60 Uber 230
    //     Dahab - Giza Bus 500 Microbus 345
    //     Cairo - BeniSuef Microbus 20 Bus 15
    //     Asyut - Cairo Train 250 Bus 450
    //     Dahab - BeniSuef Microbus 200 Bus 315
    DepthFirstSearch navigator("Cairo","Giza");
    navigator.findMyWay(adj);
    QList<QVector<QPair<QString,Connection>>> test = navigator.getListOfPaths();

    for (const QVector<QPair<QString, Connection>>& vector : test)
    {
        for (const QPair<QString, Connection>& pair : vector) {
            QString key = pair.first;
            Connection connection = pair.second;
            qDebug() << "Key:" << key << ", v:" << connection.vehicle << ", i:" << connection.cost;
        }
        qDebug() << "================================\n";
    }
    MainWindow w(adj);
    w.show();
    return a.exec();
}
