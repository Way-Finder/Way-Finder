#include "mainwindow.h"
#include <QApplication>
#include <Qfile>
#include <QTextStream>
#include <QVector>
#include <QMap>
#include <QPair>
#include <adjgraph.h>
#include <welcomescene.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    readfile("TransportationMap.txt");

    MainWindow w(adj);
    w.show();
    return a.exec();
}
