#ifndef EDITEDGE_H
#define EDITEDGE_H

#include <QDialog>
#include <QList>
#include <QWidget>
#include <QComboBox>
#include <adjgraph.h>

namespace Ui {
class editedge;
}

class editedge : public QDialog
{
    Q_OBJECT

public:
    editedge(const QString &city1, const QString &city2, const QString &oldName, float oldPrice,adjmap *adj);
    void editEdge();
    ~editedge();

    void setNewPrice(float price);
    float getNewPrice() const;

    void setNewTransportation(const QString &transportation);
    QString getNewTransportation() const;

private slots:

private:
    Ui::editedge *ui;
    QString newTransportation;
    float newPrice, oldPrice;
    const QString city1, city2,oldTransportation;

    adjmap *edit_adj;
};

#endif // EDITEDGE_H
