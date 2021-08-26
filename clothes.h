#ifndef CLOTHES_H
#define CLOTHES_H

#include <QDialog>
#include "addition.h"

namespace Ui {
class Clothes;
}

class Clothes : public QDialog, public Addition
{
    Q_OBJECT

public:
    explicit Clothes(QWidget *parent = 0);
    ~Clothes();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Clothes *ui;

    enum Column
    {
        DATE, SHOP, PAYMENT
    };
public:
    double Sum() override;
};

#endif // CLOTHES_H
