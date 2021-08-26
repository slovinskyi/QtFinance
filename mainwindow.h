#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtCore>
#include <QtGui>
#include <QStandardItemModel>
#include "qcustomplot.h"
#include "document.h"




namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

//    QStandardItemModel *tableViewModel;

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();



private slots:

    void on_actionArtyku_y_spo_ywcze_triggered();

    void on_actionDoch_d_triggered();

    void on_pushButton_clicked();

    void on_actionDane_triggered();

    void on_actionKosmetyki_triggered();

    void on_pushButton_2_clicked();

    void on_actionOdzie_triggered();

    void on_actionRozrywka_i_wypoczynek_triggered();

    void on_actionRachunki_triggered();

    void on_actionTransport_triggered();

    void on_actionUroda_triggered();

    void on_actionZdrowie_triggered();

    void on_actionBez_kategorii_triggered();

    void on_actionRozrywka_triggered();

    void on_pushButton_3_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
