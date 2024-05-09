#include "addedge.h"
#include <QTextStream>
#include <QHash>

AddEdges::AddEdges(adjmap *adj,QString departure,QString arrival):adj(adj),departure(departure),arrival(arrival) {}

void AddEdges::AddEdge(QString departure, QString arrival,QString vehicle,int cost){


    Connection edge;
    edge.vehicle=vehicle;
    edge.cost=cost;

    (*adj)[departure][arrival].append(edge);
    (*adj)[arrival][departure].append(edge);

}

bool AddEdges::IsCompleteGraph(){
    QHash<QString, QHash<QString, bool>> edgeExist;

    for(auto par=adj->begin();par!=adj->end();par++){
        for(auto child=par.value().begin();child!=par.value().end();child++)
            edgeExist[par.key()][child.key()]=true;
    }


    for(auto par=adj->begin();par!=adj->end();par++){
        for(auto child=adj->begin();child!=adj->end();child++){
            if(par.key()==child.key())continue;
            if(!edgeExist[par.key()][child.key()])return false;
        }
    }
    return true;
}
