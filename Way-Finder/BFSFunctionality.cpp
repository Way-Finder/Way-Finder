// #include <adjgraph.h>
// #include <QVector>
// #include <QMap>
// #include <QPair>
// #include <QQueue>
// #include<QDebug>
// #include <QMultiMap>
// bool cityExistence(QVector<QPair<QString,Connection>>path,QString city)
// {
//     bool exist = 0;
//     for(int i=0 ; i < path.size() ; i++)
//     {
//         if(path[i].first == city)
//         {
//             exist = 1;
//             break;
//         }
//     }

//     return exist;
// }
// void insertFirstCity(QMap<QString, QVector<Connection>>&children, QQueue<QPair<int,QVector<QPair<QString,Connection>>>>&paths,int &cost)
// {
//     for (auto it = children.begin(); it != children.end(); ++it) {
//         const QString &dest = it.key();
//         QVector<Connection> transportations = it.value();
//         for(int i=0 ; i < transportations.size() ; i++)
//         {
//             QVector<QPair<QString,Connection>>temp;
//             temp.push_back({dest,transportations[i]});
//             if(transportations[i].cost <= cost)
//                 paths.push_back({transportations[i].cost,temp});
//         }
//     }
// }

// void insertCity(QMap<QString, QVector<Connection>>&children, QQueue<QPair<int,QVector<QPair<QString,Connection>>>>&paths,int &cost,QString &source,QPair<int,QVector<QPair<QString,Connection>>>&path)
// {
//     for (auto it = children.begin(); it != children.end(); ++it) {
//         const QString &dest = it.key();
//         QVector<Connection> transportations = it.value();
//         for(int i=0 ; i < transportations.size() ; i++)
//         {
//             QPair<int,QVector<QPair<QString,Connection>>>temp;
//             temp=path;
//             if(transportations[i].cost + path.first <= cost && !cityExistence(path.second,dest) && dest!=source)
//             {
//                 temp.second.push_back({dest,transportations[i]});
//                 temp.first+=transportations[i].cost;
//                 paths.push_back(temp);

//             }
//         }
//     }
// }

//  QMultiMap<int,QVector<QPair<QString,Connection>>> BFS(QString source,QString destination,int cost,adjmap adj)
// {
//     QMultiMap<int,QVector<QPair<QString,Connection>>>validPaths;

//     QQueue<QPair<int,QVector<QPair<QString,Connection>>>>paths;

//     QMap<QString, QVector<Connection>>children=adj[source];
//     insertFirstCity(children,paths,cost);

//     while(!paths.empty())
//     {
//         QPair<int,QVector<QPair<QString,Connection>>>path;
//         path=paths.front();
//         QString city = path.second.back().first;
//         paths.dequeue();

//         if(city == destination)
//         {
//             validPaths.insert(path.first,path.second);
//             continue;
//         }
//         QMap<QString, QVector<Connection>>children=adj[city];
//         insertCity(children,paths,cost,source,path);

//     }
//     return validPaths;
//     // for (auto it = validPaths.begin(); it != validPaths.end(); ++it) {
//     //     const int &totalcost = it.key();
//     //     qDebug()<<totalcost;
//     //     QVector<QPair<QString,Connection>>temp=it.value();
//     //     for(int i=0;i<temp.size();i++)
//     //     {
//     //         qDebug()<<temp[i].first;
//     //         qDebug()<<temp[i].second.vehicle;
//     //         qDebug()<<temp[i].second.cost;
//     //     }
//     //     qDebug()<<'\n';
//     // }

// }

