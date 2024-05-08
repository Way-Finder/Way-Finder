#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <adjgraph.h>
MainWindow::MainWindow(adjmap adj,QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    for (auto it = adj.constBegin(); it != adj.constEnd(); ++it) {
        ui->depcity->addItem(it.key());
        ui->destcity->addItem(it.key());
    }
    ui->BEFES->setEnabled(false);
    ui->DEFES->setEnabled(false);

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

