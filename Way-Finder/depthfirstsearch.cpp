#include "depthfirstsearch.h"
#include <Qstring>
#include <QMap>
#include <QVector>
#include <QPair>
#include <QMultiMap>
#include <QDebug>
#include "adjgraph.h"

/*
This parameterized constructor sets the graph within the instance, saves the source and destination the user
wants to travel from and to.
*/
DepthFirstSearch::DepthFirstSearch(QString source, QString destination, int budget)
{
    this->source = source;
    this->destination = destination;
    this->budget = budget;
}

/*
Helping function that let use determine if the current node is our destination or not.
*/
bool DepthFirstSearch::isDestination(QString current)
{
    if(current == this->destination)
    {
        return true;
    }

    return false;
}

/*
Traversing the adjancency list and bruteforce to get all the paths combinations.
The algorithm consists of the following functionality:
# We mark the current node as visited.
1. First loop to access the adjancency list of the current city(node) in the graph.
2. The second loop to iterate on the list of transportations from the sources to the destination.
3. Appending the current node and the transportation to the path vector to save it as
   distinct combination.
4. Checking using the helping function to know whether we arrived at our destination or not
   if yes -> we return if know then we continue our traversing.
5. Recursing to the next city accessed in the adjancency list.
6. We unmark the previous node so we try a different combination.
7. We pop our last transportation to try a different one.
*/
void DepthFirstSearch::traverse(QString source, QVector<QPair<QString, Connection>> path, adjmap& graph)
{
    this->mVisited[source] = 1; // Marking visited to prevent infinite loop
    for(auto it1 = graph[source].begin(); it1 != graph[source].end(); ++it1) // # 1
    {
        if(mVisited[it1.key()]) // Checking for visited again to prevent adding shared paths again.
        {
            continue;
        }
        else
        {
            for(auto& transportation : it1.value()) // # 2
            {
                path.push_back(QPair<QString, Connection>(it1.key(), transportation));// # 3
                if(isDestination(it1.key()))// # 4
                {
                    this->mListOfPaths.append(path);
                    //return;
                }
                traverse(it1.key(),path,graph);// # 5
                this->mVisited[it1.key()] = 0;// # 6
                path.pop_back();// # 7
            }
        }

    }
}


/* This function calculates the net cost for the trip's
transportations and return the cost if its valid, 0 otherwise.*/
int DepthFirstSearch::isValidTrip(QVector<QPair<QString, Connection> > trip)
{
    int tripCost = 0;
    for (auto& transportation: trip)
    {
        tripCost += transportation.second.cost;
    }

    if (tripCost <= this->budget)
    {
        return tripCost;
    }

    return 0;
}


// Public function for the user.
void DepthFirstSearch::findMyWay(adjmap &graph)
{
    QVector<QPair<QString, Connection>> tempPath;
    traverse(this->source, tempPath, graph);
}


// Returning a full list of different trips combination.
QList<QVector<QPair<QString, Connection>>> DepthFirstSearch::getListOfPaths()
{
    return this->mListOfPaths;
}


// This function groups our valid trip in one multimap.
QMultiMap<int, QVector<QPair<QString, Connection>>> DepthFirstSearch::getValidPaths()
{
    QMultiMap<int, QVector<QPair<QString, Connection>>> validTrips;
    for (const QVector<QPair<QString, Connection>>& trip : mListOfPaths)
    {
        int currentTripCost = isValidTrip(trip);
        if(currentTripCost)
        {
            validTrips.insert(currentTripCost,trip);
        }
    }

    return validTrips;
}


// Returns the trips plan.
QString DepthFirstSearch::getPlan()
{
    return "Current Location: " + this->source + " The Destination: " + this->destination + " The Budget is: " + QString::number(this->budget);
}
