#ifndef DEPTHFIRSTSEARCH_H
#define DEPTHFIRSTSEARCH_H
#include <Qstring>
#include <QMap>
#include <QList>
#include <QPair>
#include <QMultiMap>
#include "adjgraph.h"
class DepthFirstSearch
{
private:
    QString source,destination;
    int budget;
    QList<QVector<QPair<QString,Connection>>> mListOfPaths;
    QMap<QString,bool> mVisited;
    bool isDestination(QString current);
    void traverse(QString source, QVector<QPair<QString,Connection>> path,adjmap *graph);
    int isValidTrip(QVector<QPair<QString,Connection>> trip);
public:
    DepthFirstSearch(QString source,QString destination,int budget);
    void findMyWay(adjmap *graph);
    QList<QVector<QPair<QString,Connection>>> getListOfPaths();
    QMultiMap<int,QVector<QPair<QString,Connection>>> getValidPaths();
    QString getPlan();
};

#endif // DEPTHFIRSTSEARCH_H
