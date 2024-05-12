#include "mainwindow.h"
#include "searchscene.h"
#include <QApplication>
#include <adjgraph.h>
#include <QStackedWidget>
#include <grapheditorsecwindow.h>
#include <depthfirstsearch.h>
#include <validtripsscene.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SearchScene searchscene;
    searchscene.readfile("TransportationMap.txt");

    /*const QString s1 = "Dahab", s2 = "Giza";

    ValidTripsScene vts(s1, s2, false,100000, searchscene.adj);
    vts.show();*/

    /*GraphEditorSecWindow GG(s1, s2, searchscene.getAdjMap());
    GG.show();*/

    MainWindow w(searchscene.adj);
    w.show();

    return a.exec();
}
