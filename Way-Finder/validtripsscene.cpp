#include "validtripsscene.h"
#include "mainwindow.h"
#include "ui_validtripsscene.h"
#include "depthfirstsearch.h"
#include "breadthfirstsearch.h"
#include<QVBoxLayout>
#include<QGroupBox>
#include<QGraphicsWidget>
#include <QString>
#include <QMap>
#include <QVector>
#include <QPair>
#include <QMultiMap>
#include <QDebug>
#include <QWidget>
#include <adjgraph.h>
ValidTripsScene::ValidTripsScene(const QString& departureCity,const QString& arrivalCity,bool traversingDFS,int budget,adjmap *adj,QWidget *parent)
    : QWidget(parent)
    ,departureCity(departureCity)
    ,arrivalCity(arrivalCity)
    , madj(adj)
    , ui(new Ui::ValidTripsScene)
{
    ui->setupUi(this);
    ui->startingLocation->setText(departureCity);
    ui->destinationLabel->setText(arrivalCity);
     QMultiMap<int, QVector<QPair<QString, Connection>>> validTrips;
    if(traversingDFS)
    {
        DepthFirstSearch navigator(departureCity,arrivalCity,budget);
        navigator.findMyWay(madj);
        validTrips = navigator.getValidPaths();
        int i = 0;
        QVector<QString> cities;
        cities.push_back("Giza");
        cities.push_back("Cairo");
        cities.push_back("Banesuef");
        cities.push_back("Assyuit");
        if(arrivalCity=="every city")
        {
            ui->validTripsNumberLabel_2->setText("Cities");
            //QVector cities = navigator.getcities();
            for (auto it = cities.begin(); it != cities.end(); ++it,i++)
            {
                QGroupBox *groupBox = new QGroupBox;
                groupBox->setObjectName("group");
                QVBoxLayout *vbox = new QVBoxLayout(groupBox);
                QString title="city ";
                title.push_back(QString::number(i+1));

                QFont font1;
                font1.setItalic(true);
                font1.setBold(true);
                font1.setPointSize(9);
                groupBox->setFont(font1);
                groupBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
                groupBox->setStyleSheet("QGroupBox::title { color: black; }");
                groupBox->setTitle(title);
                QWidget *widget = new QWidget(groupBox);
                QHBoxLayout *hbox = new QHBoxLayout(widget);
                QLabel *label = new QLabel(widget);
                label->setObjectName("City");
                QFont font;
                font.setPointSize(24);
                label->setFont(font);
                label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
                label->setAlignment(Qt::AlignCenter);
                label->setWordWrap(true);
                label->setText("     ");
                hbox->addWidget(label);

                QLabel *label2 = new QLabel(widget);
                label2->setObjectName("Trans");
                label2->setFont(font);
                label2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
                label2->setAlignment(Qt::AlignCenter);
                label2->setWordWrap(true);
                label2->setText(*it);
                hbox->addWidget(label2);

                QLabel *label3 = new QLabel(widget);
                label3->setObjectName("Cost");
                label3->setFont(font);
                label3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
                label3->setAlignment(Qt::AlignCenter);
                label3->setWordWrap(true);
                label3->setText("    ");
                hbox->addWidget(label3);


                vbox->addWidget(widget);

                ui->verticalLayout_3->addWidget(groupBox);
                ui->scrollArea->setWidget(ui->scrollAreaWidgetContents_3);
                ui->gridLayout->addWidget(ui->scrollArea, 1, 0, 1, 1);
            }
            ui->validTripsNumberLabel->setText(QString::number(i));
        }
    }
    else
    {
        BreadthFirstSearch navigator;
        validTrips=navigator.BFS(departureCity,arrivalCity,budget,madj);
        int i = 0;
        QVector<QString> cities;
        cities=navigator.BFSCityTraversal(departureCity,madj);
        if(arrivalCity=="every city")
        {
            ui->validTripsNumberLabel_2->setText("Cities");
            for (auto it = cities.begin(); it != cities.end(); ++it,i++)
            {
                QGroupBox *groupBox = new QGroupBox;
                groupBox->setObjectName("group");
                QVBoxLayout *vbox = new QVBoxLayout(groupBox);
                QString title="city ";
                title.push_back(QString::number(i+1));

                QFont font1;
                font1.setItalic(true);
                font1.setBold(true);
                font1.setPointSize(9);
                groupBox->setFont(font1);
                groupBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
                groupBox->setStyleSheet("QGroupBox::title { color: black; }");
                groupBox->setTitle(title);
                QWidget *widget = new QWidget(groupBox);
                QHBoxLayout *hbox = new QHBoxLayout(widget);
                QLabel *label = new QLabel(widget);
                label->setObjectName("City");
                QFont font;
                font.setPointSize(24);
                label->setFont(font);
                label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
                label->setAlignment(Qt::AlignCenter);
                label->setWordWrap(true);
                label->setText("     ");
                hbox->addWidget(label);

                QLabel *label2 = new QLabel(widget);
                label2->setObjectName("Trans");
                label2->setFont(font);
                label2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
                label2->setAlignment(Qt::AlignCenter);
                label2->setWordWrap(true);
                label2->setText(*it);
                hbox->addWidget(label2);

                QLabel *label3 = new QLabel(widget);
                label3->setObjectName("Cost");
                label3->setFont(font);
                label3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
                label3->setAlignment(Qt::AlignCenter);
                label3->setWordWrap(true);
                label3->setText("    ");
                hbox->addWidget(label3);


                vbox->addWidget(widget);

                ui->verticalLayout_3->addWidget(groupBox);
                ui->scrollArea->setWidget(ui->scrollAreaWidgetContents_3);
                ui->gridLayout->addWidget(ui->scrollArea, 1, 0, 1, 1);
            }
            ui->validTripsNumberLabel->setText(QString::number(i));
        }
    }
    if(arrivalCity!="every city")
    {
    int i = 0;
    //QMultiMap<int, QVector<QPair<QString, Connection>>>
    for (auto it = validTrips.begin(); it != validTrips.end(); ++it,i++)
    {
        QGroupBox *groupBox = new QGroupBox;
        groupBox->setObjectName("group");
       QVBoxLayout *vbox = new QVBoxLayout(groupBox);
        QString title="Trip ";
       title.push_back(QString::number(i+1));
        title+=".Price: ";
       title.push_back(QString::number(it.key()));

       QFont font1;
       font1.setItalic(true);
       font1.setBold(true);
       font1.setPointSize(9);
       groupBox->setFont(font1);
       groupBox->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
       groupBox->setStyleSheet("QGroupBox::title { color: black; }");
        groupBox->setTitle(title);
         for(auto path : it.value())
         {
           QWidget *widget = new QWidget(groupBox);
           QHBoxLayout *hbox = new QHBoxLayout(widget);
           QLabel *label = new QLabel(widget);
           label->setObjectName("City");
           QFont font;
           font.setPointSize(24);
           label->setFont(font);
           label->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
           label->setAlignment(Qt::AlignCenter);
           label->setWordWrap(true);
           label->setText(path.first);
           hbox->addWidget(label);

           QLabel *label2 = new QLabel(widget);
           label2->setObjectName("Trans");
           label2->setFont(font);
           label2->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
           label2->setAlignment(Qt::AlignCenter);
           label2->setWordWrap(true);
           label2->setText(path.second.vehicle);
           hbox->addWidget(label2);

           QLabel *label3 = new QLabel(widget);
           label3->setObjectName("Cost");
           label3->setFont(font);
           label3->setStyleSheet(QString::fromUtf8("color: rgb(0, 0, 0);"));
           label3->setAlignment(Qt::AlignCenter);
           label3->setWordWrap(true);
           label3->setText(QString::number(path.second.cost));
           hbox->addWidget(label3);


           vbox->addWidget(widget);

           ui->verticalLayout_3->addWidget(groupBox);
           ui->scrollArea->setWidget(ui->scrollAreaWidgetContents_3);
           ui->gridLayout->addWidget(ui->scrollArea, 1, 0, 1, 1);

         }        

    }
    ui->validTripsNumberLabel->setText(QString::number(i));
    }

}

ValidTripsScene::~ValidTripsScene()
{
    delete ui;
}

void ValidTripsScene::on_toHomeScreenButton_clicked()
{
    auto window = new MainWindow(madj);
    window->setAttribute(Qt::WA_DeleteOnClose);
    window->show();
    close();
}

