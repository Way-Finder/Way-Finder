#ifndef ADJGRAPH_H
#define ADJGRAPH_H
#include <QMap>
struct Connection {
    QString vehicle;
    int cost;
};
typedef QMap<QString, QMap<QString, QVector<Connection>>> adjmap;
#endif // ADJGRAPH_H
