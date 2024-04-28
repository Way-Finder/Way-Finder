#include <adjgraph.h>
#include <QVector>
#include<vector>
#include <QMap>
#include <QPair>
#include <QQueue>

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


    for(auto children:adj[source])
    {
        for(auto [arrivalCity,transportations]:children)
        {
            for(int i=0 ; i < transportations.size() ; i++)
            {
                QList<QPair<QString,Connection>>temp;
                temp.push_back({arrivalCity,transportations[i]});

                if(transportations[i].cost <= cost)
                paths.push_back({transportations[i].cost,temp});
            }
        }
    }

    while(!paths.empty())
    {
        QPair<int,QList<QPair<QString,Connection>>>path;

        QString city = path.second.back().first;

        paths.pop();

        if(city == destination)
        {
            validPaths.push_back(path);
            continue;
        }

        for(auto children:adj[city])
        {
            for(auto [arrivalCity,transportations]:children)
            {
                for(int i=0 ; i < transportations.size() ; i++)
                {

                    if(transportations[i].cost + path.first <= cost && !cityExistence(path.second,arrivalCity))
                        paths.push_back({transportations[i].cost,temp});
                }

            }
        }

    }

    for(int i=0 ; i < validPaths.size() ; i++)
    {
        for(int j=0 ; j < validPaths[i].second.size() ; j++)
        {
            qDebug() << validPaths[i].second[j].first << " ";
            qDebug() << validPaths[i].second[j].second.vehicle << " ";
            qDebug() << validPaths[i].second[j].second.cost << " ";
        }

        qDebug() << "\n";
    }

}
