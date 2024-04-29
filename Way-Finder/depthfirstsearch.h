#ifndef DEPTHFIRSTSEARCH_H
#define DEPTHFIRSTSEARCH_H
#include <Qstring>
#include <QMap>
#include <QList>
#include <QPair>
#include "adjgraph.h"
class DepthFirstSearch
{
private:
    QList<QVector<QPair<QString,Connection>>> pListOfPaths;
    QMap<QString,bool> visited;
    bool isDestination(QString current);
    void traverse(QString source, QVector<QPair<QString,Connection>> path,adjmap &graph);
public:
    QString source,destination;
    DepthFirstSearch(QString source,QString destination);
    void findMyWay(adjmap &graph);
    QList<QVector<QPair<QString,Connection>>> getListOfPaths();

};

#endif // DEPTHFIRSTSEARCH_H
