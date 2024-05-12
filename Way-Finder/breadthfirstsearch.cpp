#include "breadthfirstsearch.h"
#include <adjgraph.h>
#include <QVector>
#include <QMap>
#include <QPair>
#include <QQueue>
#include<QDebug>
#include <QMultiMap>
#include "adjgraph.h"
BreadthFirstSearch::BreadthFirstSearch()
{

}


bool BreadthFirstSearch::cityExistence(QVector<QPair<QString,Connection>>path,QString city)
{
    bool exist = 0;
    for(int i=0 ; i < path.size() ; i++)
    {
        if(path[i].first == city)
        {
            exist = 1;
            break;
        }
    }

    return exist;
}
void BreadthFirstSearch::insertFirstCity(QMap<QString, QVector<Connection>>&children, QQueue<QPair<int,QVector<QPair<QString,Connection>>>>&paths,int &cost)
{
    for (auto it = children.begin(); it != children.end(); ++it) {
        const QString &dest = it.key();
        QVector<Connection> transportations = it.value();
        for(int i=0 ; i < transportations.size() ; i++)
        {
            QVector<QPair<QString,Connection>>temp;
            temp.push_back({dest,transportations[i]});
            if(transportations[i].cost <= cost)
                paths.push_back({transportations[i].cost,temp});
        }
    }
}

void BreadthFirstSearch::insertCity(QMap<QString, QVector<Connection>>&children, QQueue<QPair<int,QVector<QPair<QString,Connection>>>>&paths,int &cost,QString &source,QPair<int,QVector<QPair<QString,Connection>>>&path)
{
    for (auto it = children.begin(); it != children.end(); ++it) {
        const QString &dest = it.key();
        QVector<Connection> transportations = it.value();
        for(int i=0 ; i < transportations.size() ; i++)
        {
            QPair<int,QVector<QPair<QString,Connection>>>temp;
            temp=path;
            if(transportations[i].cost + path.first <= cost && !cityExistence(path.second,dest) && dest!=source)
            {
                temp.second.push_back({dest,transportations[i]});
                temp.first+=transportations[i].cost;
                paths.push_back(temp);

            }
        }
    }
}

QMultiMap<int,QVector<QPair<QString,Connection>>> BreadthFirstSearch::BFS(QString source,QString destination,int cost,adjmap *adj)
{
    QMultiMap<int,QVector<QPair<QString,Connection>>>validTrips;

    QQueue<QPair<int,QVector<QPair<QString,Connection>>>>paths;

    QMap<QString, QVector<Connection>>children=(*adj)[source];
    insertFirstCity(children,paths,cost);

    while(!paths.empty())
    {
        QPair<int,QVector<QPair<QString,Connection>>>path;
        path=paths.front();
        QString city = path.second.back().first;
        paths.dequeue();

        if(city == destination)
        {
            validTrips.insert(path.first,path.second);
            continue;
        }
        QMap<QString, QVector<Connection>>children=(*adj)[city];
        insertCity(children,paths,cost,source,path);

    }
    return validTrips;

}
QVector<QString> BreadthFirstSearch::BFSCityTraversal(QString source,adjmap *adj)
{

    QVector<QString>cities;

    QMap<QString, QVector<Connection>>children;

    QQueue<QString>queue;

    queue.push_back(source);

    QSet<QString>visted;
    visted.insert(source);

    while(!queue.empty())
    {
        QString city = queue.front();

        queue.dequeue();
        children=(*adj)[city];

        for (auto it = children.begin(); it != children.end(); ++it)
        {
            const QString &dest = it.key();
            //qDebug() << dest << "\n";
            if(!visted.contains(dest))
            {
                cities.push_back(dest);
                queue.push_back(dest);
                visted.insert(dest);
            }

        }

    }

    // for(int i=0 ; i < cities.size() ; i++)
    // {
    //     qDebug() << cities[i] << "\n";
    // }

    return cities;
}


