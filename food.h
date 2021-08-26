#ifndef FOOD_H
#define FOOD_H

#include <QDialog>
#include "addition.h"

namespace Ui {
class Food;
}

class Food : public QDialog, public Addition
{
    Q_OBJECT

public:
    explicit Food(QWidget *parent = 0);
    ~Food();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Food *ui;

    enum Column
    {
        DATE, SHOP, PAYMENT
    };

public:
    double Sum() override;
};

#endif // FOOD_H
