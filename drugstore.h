#ifndef DRUGSTORE_H
#define DRUGSTORE_H

#include <QDialog>
#include "addition.h"

namespace Ui {
class Drugstore;
}

class Drugstore : public QDialog, public Addition
{
    Q_OBJECT

public:
    explicit Drugstore(QWidget *parent = 0);
    ~Drugstore();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Drugstore *ui;

    enum Column
    {
        DATE, SHOP, PAYMENT
    };

public:
    double Sum() override;
};

#endif // DRUGSTORE_H
