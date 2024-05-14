#include "tripscene.h"
#include "ui_tripscene.h"
tripscene::tripscene(const QString& departureCity,const QString& arrivalCity,const QString& budget,const QString& tripDetails,QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::tripscene)
{
    ui->setupUi(this);
    ui->src->setText(departureCity);
    ui->dist->setText(arrivalCity);
    ui->price->setText(budget);
    ui->details->setText(tripDetails);

}

tripscene::~tripscene()
{
    delete ui;
}
