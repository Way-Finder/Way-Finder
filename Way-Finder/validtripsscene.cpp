#include "validtripsscene.h"
#include "ui_validtripsscene.h"

ValidTripsScene::ValidTripsScene(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::ValidTripsScene)
{
    ui->setupUi(this);
}

ValidTripsScene::~ValidTripsScene()
{
    delete ui;
}
