#ifndef DEPTHFIRSTSEARCH_H
#define DEPTHFIRSTSEARCH_H
#include <Qstring>
#include <QMap>
#include <QList>
#include <QPair>
#include <QMultiMap>
#include "adjgraph.h"

// #ifndef BREADTHFIRSTSEARCH_H
// #define BREADTHFIRSTSEARCH_H

class BreadthFirstSearch
{
public:
    BreadthFirstSearch();
    bool cityExistence(QVector<QPair<QString,Connection>>path,QString city);
    void insertFirstCity(QMap<QString, QVector<Connection>>&children, QQueue<QPair<int,QVector<QPair<QString,Connection>>>>&paths,int &cost);
    void insertCity(QMap<QString, QVector<Connection>>&children, QQueue<QPair<int,QVector<QPair<QString,Connection>>>>&paths,int &cost,QString &source,QPair<int,QVector<QPair<QString,Connection>>>&path);
    QMultiMap<int,QVector<QPair<QString,Connection>>> BFS(QString source,QString destination,int cost,adjmap adj);

};

#endif // BREADTHFIRSTSEARCH_H
