#ifndef ADJGRAPH_H
#define ADJGRAPH_H
#include <QMap>
struct Connection {

    QString vehicle;
    int cost;

    bool operator<(const Connection& other) const
    {
        return cost <= other.cost;
    }

    bool operator>(const Connection& other) const
    {
        return cost > other.cost;
    }

};
typedef QMap<QString, QMap<QString, QList<Connection>>> adjmap;
#endif // ADJGRAPH_H
