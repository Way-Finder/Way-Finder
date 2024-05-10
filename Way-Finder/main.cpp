#include "mainwindow.h"
#include "searchscene.h"
#include <QApplication>
#include <adjgraph.h>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SearchScene searchscene;
    searchscene.readfile("TransportationMap.txt");

    MainWindow w(searchscene.adj);
    w.show();
    return a.exec();
}
