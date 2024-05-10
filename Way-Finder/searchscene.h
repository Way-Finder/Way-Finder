#ifndef SEARCHSCENE_H
#define SEARCHSCENE_H
#include <qstring.h>
#include <QApplication>
#include <Qfile>
#include <QTextStream>
#include <QVector>
#include <QMap>
#include <QPair>
#include <adjgraph.h>
#include <QStackedWidget>

class SearchScene
{
public:
    SearchScene();
    adjmap adj;
    void readfile(QString s);
    adjmap * getAdjMap();
    QStackedWidget QSW;
};

#endif // SEARCHSCENE_H
