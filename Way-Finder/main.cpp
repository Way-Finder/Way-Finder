#include "mainwindow.h"
#include <QApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QCoreApplication>
#include <adjgraph.h>
#include <grapheditor.h>

adjmap adj;

void readFile(const QString& filename) {
    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly)) {
        qCritical() << file.errorString();
        return;
    }
    QTextStream stream(&file);
    while (!stream.atEnd()) {
        QString line = stream.readLine();
        if (line.size() > 3) {
            QStringList parts = line.split(" ");
            Connection tmper;
            QString from = parts[0];
            QString to = parts[2];
            QList<Connection> transportation;
            for (int i = 3; i < parts.size(); i += 2) {
                tmper.vehicle = parts[i];
                tmper.cost = parts[i + 1].toInt();
                transportation.push_back(tmper);
            }
            adj[from][to].append(transportation);
            adj[to][from].append(transportation);
        }
    }
    file.close();
}



void writeAdjMapToFile(const adjmap& adj, const QString& filename) {
    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qCritical() << file.errorString();
        return;
    }

    QMap<QPair<QString,QString>,int> visited;
    QTextStream stream(&file);
    stream << adj.size() << '\n';


    for (auto it = adj.begin(); it != adj.end(); ++it) {
        const QString& city = it.key();


        bool test = true;

        for (auto jt = it.value().begin(); jt != it.value().end(); ++jt) {
            const QString& destination = jt.key();
            if(visited[{city,destination}]== 1){
                continue;
            }else{
                visited[{city,destination}] = 1;
                visited[{destination,city}] = 1;
            }
            if(test)
            {
                stream << city << " - ";
                test = false;
            }


            stream << destination;


            for (const auto& connection : jt.value()) {

                stream << " " << connection.vehicle << " " << connection.cost;
            }


            break;
        }
        if(std::next(it) != adj.end())
        {
            stream << '\n';
        }
    }



    file.close();
}

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    const QString filename = "TransportationMap.txt";
    readFile(filename);

    GraphEditor g(&adj);
    g.show();

    QObject::connect(&a, &QCoreApplication::aboutToQuit, [filename](){
        writeAdjMapToFile(adj, filename);
    });

    return a.exec();
}
