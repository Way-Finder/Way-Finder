#ifndef VALIDTRIPSSCENE_H
#define VALIDTRIPSSCENE_H

#include <QWidget>

namespace Ui {
class ValidTripsScene;
}

class ValidTripsScene : public QWidget
{
    Q_OBJECT

public:
    explicit ValidTripsScene(QWidget *parent = nullptr);
    ~ValidTripsScene();

private:
    Ui::ValidTripsScene *ui;
};

#endif // VALIDTRIPSSCENE_H
