#include "mainwindow.h"
#include "searchscene.h"
#include <QApplication>
#include <adjgraph.h>
#include <QStackedWidget>
#include <grapheditorsecwindow.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    SearchScene searchscene;
    searchscene.readfile("TransportationMap.txt");


    const QString s1 = "Cairo", s2 = "Giza";
    GraphEditorSecWindow GG(s1, s2, SearchScene().getAdjMap());
    GG.show();

    /*MainWindow w(searchscene.adj);
    w.show();*/

    return a.exec();
}
