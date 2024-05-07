#ifndef GRAPHEDITORSECWINDOW_H
#define GRAPHEDITORSECWINDOW_H

#include <QDialog>
#include <QList>
#include <QWidget>
#include <QComboBox>
#include <adjgraph.h>

namespace Ui {
class GraphEditorSecWindow;
}

class GraphEditorSecWindow : public QDialog
{
    Q_OBJECT

public:
    GraphEditorSecWindow(const QString &city1, const QString &city2, adjmap *adj, QWidget *parent = nullptr);
    ~GraphEditorSecWindow();
    void removeEdge(const QString &vehicle, int cost, adjmap *adj);
    void populateModifyBox(adjmap *adj);

private slots:


    void deleteEdge();

    void addEdgeButton();

    void editButton();

    void editEdge();

    void sortCostAscending();

    void sortCostDescending();
private:
    const QString city1,city2;
    QString oldVehicle,oldPrice;
    Ui::GraphEditorSecWindow *ui;
    adjmap *test_adj;
    void loadEdges();
    void addGroupBox(QString vehicle,int cost,int edgeInd);
    void addEdges(QString vehicle,int cost,int edgeInd,bool addToMap);
    void removeGroupBoxes();
};

#endif // GRAPHEDITORSECWINDOW_H
