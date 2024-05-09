#include "validtripsscene.h"
#include "ui_validtripsscene.h"
#include "depthfirstsearch.h"
#include "breadthfirstsearch.h"
#include "tripscene.h"
#include<QVBoxLayout>
#include<QGroupBox>
#include<QGraphicsWidget>
ValidTripsScene::ValidTripsScene(const QString& departureCity,const QString& arrivalCity,bool traversingDFS,int budget,adjmap adj,QWidget *parent)
    : QWidget(parent)
    ,departureCity(departureCity)
    ,arrivalCity(arrivalCity)
    , ui(new Ui::ValidTripsScene)
{
    ui->setupUi(this);
    ui->startingLocation->setText(departureCity);
    ui->destinationLabel->setText(arrivalCity);

    if(traversingDFS)
    {
        DepthFirstSearch navigator(departureCity,arrivalCity,budget);
        navigator.findMyWay(adj);
        this->validTrips = navigator.getValidPaths();
    }
    int i = 1;
    //QMultiMap<int, QVector<QPair<QString, Connection>>>
    for (auto it = validTrips.begin(); it != validTrips.end(); ++it,i++)
    {
        QGroupBox *groupBox = new QGroupBox;
        groupBox->setObjectName("group");
       QVBoxLayout *vbox = new QVBoxLayout(groupBox);
        QString title="Trip ";
       title.push_back(QString::number(i));
        title+=".Price: ";
       title.push_back(QString::number(it.key()));
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
           label3->setObjectName("Trans");
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

ValidTripsScene::~ValidTripsScene()
{
    delete ui;
}
