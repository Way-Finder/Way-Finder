#include "editedge.h"
#include "ui_editedge.h"
#include <QMessageBox>
editedge::editedge(const QString &city1, const QString &city2, const QString &oldName, float oldPrice, adjmap *adj)
    : ui(new Ui::editedge)
    , oldPrice(oldPrice)
    , city1(city1)
    , city2(city2)
    , oldTransportation(oldName)
    , edit_adj(adj)
{
    ui->setupUi(this);
}

editedge::~editedge()
{
    delete ui;
}

void editedge::editEdge() {



    for (auto it = (*edit_adj)[city1][city2].begin(); it != (*edit_adj)[city1][city2].end(); ++it) {
        if (it->vehicle == oldTransportation && it->cost == oldPrice) {
            it->cost = getNewPrice();
            it->vehicle = getNewTransportation();

            break;
        }
    }


    for (auto it = (*edit_adj)[city2][city1].begin(); it != (*edit_adj)[city2][city1].end(); ++it) {
        if (it->vehicle == oldTransportation && it->cost == oldPrice) {
            it->cost = getNewPrice();
            it->vehicle = getNewTransportation();

            break;
        }
    }


}
void editedge::setNewPrice(float price) {
    newPrice = price;
}


float editedge::getNewPrice() const {
    return newPrice;
}


void editedge::setNewTransportation(const QString &transportation) {
    newTransportation = transportation;
}


QString editedge::getNewTransportation() const {
    return newTransportation;
}


