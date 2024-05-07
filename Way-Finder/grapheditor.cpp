#include "grapheditor.h"
#include "ui_grapheditor.h"
#include <QMessageBox>
#include <adjgraph.h>
#include "grapheditorsecwindow.h"

GraphEditor::GraphEditor(adjmap *adj, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::GraphEditor)
{
    ui->setupUi(this);

    setWindowTitle("Map modification");
    m_adj = adj;
    for (auto it = adj->constBegin(); it != adj->constEnd(); ++it) {
        ui->cityBox->addItem(it.key());
        ui->cityBox_2->addItem(it.key());
    }

}


GraphEditor::~GraphEditor()
{
    delete ui;
}



void GraphEditor::on_secWindow_clicked()
{

    QString city1 = ui->cityBox->currentText();
    QString city2 = ui->cityBox_2->currentText();

    if (city1 == city2) {
        QMessageBox::critical(this, "Error", "Please choose two different cities.");
        return;
    }


    GraphEditorSecWindow *secWindow = new GraphEditorSecWindow(city1, city2,m_adj);
    secWindow->setAttribute(Qt::WA_DeleteOnClose);
    secWindow->show();
   // close();

}
