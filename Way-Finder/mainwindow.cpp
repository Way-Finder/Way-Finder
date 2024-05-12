#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <adjgraph.h>
#include <QPixmap>
#include <grapheditorsecwindow.h>
#include <searchscene.h>
#include <validtripsscene.h>
#include <QStackedWidget>

MainWindow::MainWindow(adjmap * adj,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for (auto it = adj->constBegin(); it != adj->constEnd(); ++it) {
        ui->depcity->addItem(it.key());
        ui->destcity->addItem(it.key());
    }
    ui->BEFES->setEnabled(false);
    ui->DEFES->setEnabled(false);

    QPixmap defespic("D:/Cutie/Way-Finder/Way-Finder/Assets/DFS.png");
    QPixmap befespic("D:/Cutie/Way-Finder/Way-Finder/Assets/BFS.png");

    ui->DFS_pic->setPixmap(defespic);
    ui->BFS_pic->setPixmap(befespic);

}

MainWindow::~MainWindow()
{
    delete ui;
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
    SearchScene searchscene;
    searchscene.readfile("TransportationMap.txt");
    GraphEditorSecWindow *editEdgePage=new GraphEditorSecWindow(searchscene.getAdjMap());
    this->close();
    editEdgePage->setAttribute(Qt::WA_DeleteOnClose);
    editEdgePage->show();

}

void MainWindow::on_DEFES_clicked()
{
    SearchScene searchscene;
    searchscene.readfile("TransportationMap.txt");
    QString deptartureCity = ui->depcity->currentText();
    QString destinationCity = ui->destcity->currentText();
    int budget = ui->pricein->displayText().toInt();
    adjmap map = searchscene.adj;
    auto newWindow = new ValidTripsScene(deptartureCity,destinationCity,true,budget,map);
    newWindow->show();
    close();
}


void MainWindow::on_BEFES_clicked()
{
    SearchScene searchscene;
    searchscene.readfile("TransportationMap.txt");
    QString deptartureCity = ui->depcity->currentText();
    QString destinationCity = ui->destcity->currentText();
    int budget = ui->pricein->displayText().toInt();
    adjmap map = searchscene.adj;
    auto newWindow = new ValidTripsScene(deptartureCity,destinationCity,false,budget,map);
    newWindow->show();
    close();
}

