#include "validtripsscene.h"
#include "ui_validtripsscene.h"
#include "depthfirstsearch.h"
#include "BFSFunctionality.cpp"

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
    int i = 0;
    QHBoxLayout *mainHBox = new QHBoxLayout();
    //QMultiMap<int, QVector<QPair<QString, Connection>>>
    for (auto it = validTrips.begin(); it != validTrips.end(); ++it,i++)
    {
            QVBoxLayout *vbox = new QVBoxLayout();//saving bel 3ard
            QLabel *priceLabel = new QLabel(QString::number(it.key()) + " Total Price");// saving total price
            QString tripDetails;
         for(auto path : it.value())
         {
             // temp for single trip
             tripDetails.append(path.first + " - " + path.second.vehicle + " (" + QString::number(path.second.cost) + ")\n🔽");
         }
         QLabel *detailsLabel = new QLabel(tripDetails);// place holder bta3 el trip
         detailsLabel->setWordWrap(true);

         vbox->addWidget(priceLabel);
         vbox->addWidget(detailsLabel);

    }

    ui->validTripsNumberLabel->setText(QString::number(i));

}

ValidTripsScene::~ValidTripsScene()
{
    delete ui;
}
