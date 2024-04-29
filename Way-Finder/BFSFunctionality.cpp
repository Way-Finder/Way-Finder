#include <adjgraph.h>
#include <QVector>
#include <QMap>
#include <QPair>
#include <QQueue>
#include<QDebug>

bool cityExistence(QList<QPair<QString,Connection>>path,QString city)
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

void BFS(QString source,QString destination,int cost,adjmap adj)
{
    QList<QPair<int,QList<QPair<QString,Connection>>>>validPaths;

    QQueue<QPair<int,QList<QPair<QString,Connection>>>>paths;

    QMap<QString, QList<Connection>>children=adj[source];

    for (auto it = children.begin(); it != children.end(); ++it) {
        const QString &dest = it.key();
        QList<Connection> transportations = it.value();
            for(int i=0 ; i < transportations.size() ; i++)
            {
                QList<QPair<QString,Connection>>temp;
                temp.push_back({dest,transportations[i]});
                if(transportations[i].cost <= cost)
                paths.push_back({transportations[i].cost,temp});
            }
        }


    while(!paths.empty())
    {
        QPair<int,QList<QPair<QString,Connection>>>path;
        path=paths.front();
        QString city = path.second.back().first;
        paths.dequeue();

        if(city == destination)
        {
            validPaths.push_back(path);
            continue;
        }

        QMap<QString, QList<Connection>>children=adj[city];
        for (auto it = children.begin(); it != children.end(); ++it) {
            const QString &dest = it.key();
            QList<Connection> transportations = it.value();
            for(int i=0 ; i < transportations.size() ; i++)
            {
                QPair<int,QList<QPair<QString,Connection>>>temp;
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

    for(int i=0 ; i < validPaths.size() ; i++)
    {
           qDebug() << validPaths[i].first << " ";
        for(int j=0 ; j < validPaths[i].second.size() ; j++)
        {
            qDebug() << validPaths[i].second[j].first << " ";
            qDebug() << validPaths[i].second[j].second.vehicle << " ";
            qDebug() << validPaths[i].second[j].second.cost << " ";
        }
        qDebug() <<'\n';
    }

}

