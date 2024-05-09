#ifndef ADDEDGE_H
#define ADDEDGE_H
#include <adjgraph.h>

class AddEdges
{
private:
    adjmap *adj;
    QString departure, arrival;
public:
    void AddEdge(QString departure,QString arrival,QString vehicle,int cost);
    AddEdges(adjmap *adj,QString departure,QString arrival);
    bool IsCompleteGraph();
};

#endif // ADDEDGE_H
