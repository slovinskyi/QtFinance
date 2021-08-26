#ifndef CINEMA_H
#define CINEMA_H

#include <QDialog>
#include "addition.h"

namespace Ui {
class Cinema;
}

class Cinema : public QDialog, public Addition
{
    Q_OBJECT

public:
    explicit Cinema(QWidget *parent = 0);
    ~Cinema();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Cinema *ui;

    enum Column
    {
        DATE, KIND, PAYMENT
    };

public:
    double Sum() override;
};

#endif // CINEMA_H
