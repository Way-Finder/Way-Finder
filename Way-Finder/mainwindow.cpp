#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <adjgraph.h>
#include <QPixmap>
#include <grapheditorsecwindow.h>
#include <validtripsscene.h>
#include <QStackedWidget>
#include <QCloseEvent>
#include <qfile.h>

MainWindow::MainWindow(adjmap * adj,QWidget *parent)
    : QMainWindow(parent)
    ,madj(adj)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    if(!adj)return ;
    for (auto it = adj->constBegin(); it != adj->constEnd(); ++it) {
        ui->depcity->addItem(it.key());
        ui->destcity->addItem(it.key());
    }

    ui->BEFES->setEnabled(false);
    ui->DEFES->setEnabled(false);

}

MainWindow::~MainWindow()
{
    emit exitApp();
    delete ui;
}

void MainWindow::start()
{

    madj=readFiles("TransportationMap.txt");

    MainWindow *mainWindow = new MainWindow(madj);
    mainWindow->setAttribute(Qt::WA_DeleteOnClose);
    mainWindow->show();

    connect(this, SIGNAL(exitApp(QString)), this , SLOT(uploadFiles(QString)));

}

void MainWindow::uploadFiles(const QString& filename)
{
    for (auto outerIt = madj->begin(); outerIt != madj->end(); ++outerIt) {
        // Iterate over the inner map (keys are QString, values are QList<Connection>)
        QMap<QString, QList<Connection>>& innerMap = outerIt.value();
        for (auto innerIt = innerMap.begin(); innerIt != innerMap.end(); ++innerIt) {
            // Check if the QList is empty
            if (innerIt.value().isEmpty()) {
                // Remove the inner key (empty QList)
                innerMap.erase(innerIt);

                // Check if the inner map is now empty
                if (innerMap.isEmpty()) {
                    // Remove the outer key if the inner map became empty
                    madj->erase(outerIt);
                    break; // Break out of the inner loop to avoid unnecessary iterations
                }
            }
        }
    }

    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        qCritical() << file.errorString();
        return;
    }

    QMap<QPair<QString,QString>,int> visited;
    QTextStream stream(&file);
    stream << madj->size() << '\n';


    for (auto it = madj->begin(); it != madj->end(); ++it) {
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
        if(std::next(it) != madj->end())
        {
            stream << '\n';
        }
    }



    file.close();
}

void MainWindow::on_pricein_textEdited(const QString &arg1)
{
    if(ui->pricein->text().size() == 0)
    {
        ui->BEFES->setEnabled(false);
        ui->DEFES->setEnabled(false);
    }
    else
    {
        ui->BEFES->setEnabled(true);
        ui->DEFES->setEnabled(true);
    }
}


void MainWindow::on_pushButton_pressed()
{
    GraphEditorSecWindow *editEdgePage=new GraphEditorSecWindow(madj);
    editEdgePage->setAttribute(Qt::WA_DeleteOnClose);
    editEdgePage->show();
    this->close();

}

void MainWindow::on_DEFES_clicked()
{
    QString deptartureCity = ui->depcity->currentText();
    QString destinationCity = ui->destcity->currentText();
    int budget = ui->pricein->displayText().toInt();
    auto newWindow = new ValidTripsScene(deptartureCity,destinationCity,true,budget,madj);
    newWindow->setAttribute(Qt::WA_DeleteOnClose);
    newWindow->show();
    close();
}


void MainWindow::on_BEFES_clicked()
{
    QString deptartureCity = ui->depcity->currentText();
    QString destinationCity = ui->destcity->currentText();
    int budget = ui->pricein->displayText().toInt();
    auto newWindow = new ValidTripsScene(deptartureCity,destinationCity,false,budget,madj);
    newWindow->setAttribute(Qt::WA_DeleteOnClose);
    newWindow->show();
    close();
}

adjmap* MainWindow::readFiles(const QString& filename)
{
    adjmap *adj=new adjmap();
    QFile file(filename);

    if(!file.open(QIODevice::ReadOnly))
    {
        qCritical() << file.errorString();
        return nullptr;
    }

    QTextStream stream(&file);
    while(!stream.atEnd())
    {
        QString line = stream.readLine();
        if(line.size() > 3)
        {
            QStringList parts = line.split(" ");
            Connection tmper;
            QString from = parts[0];
            QString to = parts[2];
            QList<Connection> transportation;
            for(int i = 3; i < parts.size(); i += 2)
            {
                tmper.vehicle = parts[i];
                tmper.cost = parts[i+1].toInt();
                transportation.push_back(tmper);
            }
            (*adj)[from][to].append(transportation);
            (*adj)[to][from].append(transportation);
        }
    }
    file.close();
    return adj;
}

