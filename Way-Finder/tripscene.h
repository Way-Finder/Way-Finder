#ifndef TRIPSCENE_H
#define TRIPSCENE_H

#include <QWidget>

namespace Ui {
class tripscene;
}

class tripscene : public QWidget
{
    Q_OBJECT

public:
    explicit tripscene(const QString& departureCity,const QString& arrivalCity,const QString& budget,const QString& tripDetails,QWidget *parent=nullptr);
    ~tripscene();

private:
    Ui::tripscene *ui;
};

#endif // TRIPSCENE_H
