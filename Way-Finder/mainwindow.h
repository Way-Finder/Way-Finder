#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <adjgraph.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

signals:
    void exitApp(const QString& filename = "TransportationMap.txt");
public:
    MainWindow(adjmap * adj = nullptr, QWidget *parent = nullptr);
    ~MainWindow();
    void start();
    adjmap* readFiles(const QString& filename="TransportationMap.txt");
    adjmap* getAdjmap();

private slots:
    void uploadFiles(const QString& filename="TransportationMap.txt");

    void on_pricein_textEdited(const QString &arg1);

    void on_pushButton_pressed();

    void on_DEFES_clicked();

    void on_BEFES_clicked();





    void on_destcity_currentTextChanged(const QString &arg1);

private:
    adjmap *madj;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
