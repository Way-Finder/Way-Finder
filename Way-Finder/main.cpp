#include "mainwindow.h"
#include <QApplication>
#include <adjgraph.h>
#include <QStackedWidget>
#include <grapheditorsecwindow.h>
#include <depthfirstsearch.h>
#include <validtripsscene.h>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    MainWindow w;

    w.start();

    return a.exec();
}
