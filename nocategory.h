#ifndef NOCATEGORY_H
#define NOCATEGORY_H

#include <QDialog>
#include "addition.h"

namespace Ui {
class NoCategory;
}

class NoCategory : public QDialog, public Addition
{
    Q_OBJECT

public:
    explicit NoCategory(QWidget *parent = 0);
    ~NoCategory();

private slots:
    void on_pushButton_3_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::NoCategory *ui;

    enum Column
    {
        DATE, TITLE, PAYMENT
    };

public:
    double Sum() override;
};

#endif // NOCATEGORY_H
