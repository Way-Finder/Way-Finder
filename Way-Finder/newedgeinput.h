#ifndef NEWEDGEINPUT_H
#define NEWEDGEINPUT_H

#include <QDialog>

namespace Ui {
class NewEdgeInput;
}

class NewEdgeInput : public QDialog
{
    Q_OBJECT

public:
    explicit NewEdgeInput(QWidget *parent = nullptr);
    ~NewEdgeInput();

    QString getVehicle();
    int getPrice();


private slots:
    void on_buttonBox_rejected();

private:
    Ui::NewEdgeInput *ui;
};

#endif // NEWEDGEINPUT_H
