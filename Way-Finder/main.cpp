#include "mainwindow.h"
#include <QApplication>
#include <Qfile>
#include <QTextStream>
#include <QVector>
#include <QMap>
#include <QPair>
#include <adjgraph.h>
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
            QList<Connection> transportation;
            for(int i = 3; i < parts.size(); i += 2)
            {
                tmper.vehicle = parts[i];
                tmper.cost = parts[i+1].toInt();
                transportation.push_back(tmper);
            }
            adj[from][to].append(transportation);
            adj[to][from].append(transportation);
        }
    }

    file.close();
}





int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    readfile("TransportationMap.txt");

    MainWindow w(adj);
    w.show();
    return a.exec();
}