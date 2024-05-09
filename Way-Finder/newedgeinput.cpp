#include "newedgeinput.h"
#include "ui_newedgeinput.h"

NewEdgeInput::NewEdgeInput(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::NewEdgeInput)
{
    ui->setupUi(this);
}

NewEdgeInput::~NewEdgeInput()
{
    delete ui;
}

QString NewEdgeInput::getVehicle()
{
    return ui->vehicleInput->text();
}

int NewEdgeInput::getPrice()
{
    return ui->priceInput->text().toInt();
}

void NewEdgeInput::on_buttonBox_rejected()
{
    ui->priceInput->clear();
    ui->vehicleInput->clear();
}

