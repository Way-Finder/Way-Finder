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

public:
    MainWindow(adjmap adj, QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pricein_textEdited(const QString &arg1);

    void on_pushButton_pressed();

    void on_DEFES_clicked();

    void on_BEFES_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
