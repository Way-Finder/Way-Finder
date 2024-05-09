#ifndef GRAPHEDITOR_H
#define GRAPHEDITOR_H

#include <QWidget>
#include <QComboBox>
#include <QPushButton>
#include <adjgraph.h>

namespace Ui {
class GraphEditor;
}

class GraphEditor : public QWidget
{
    Q_OBJECT

public:
    explicit GraphEditor(adjmap *adj, QWidget *parent = nullptr);
    ~GraphEditor();

private slots:

    void on_secWindow_clicked();


private:
    Ui::GraphEditor *ui;
    adjmap *m_adj;
    QComboBox *cityBox;
    QComboBox *cityBox_2;
    QPushButton *secWindow;
};

#endif // GRAPHEDITOR_H
