#ifndef BILLS_H
#define BILLS_H

#include <QDialog>
#include "addition.h"

namespace Ui {
class Bills;
}

class Bills : public QDialog, public Addition
{
    Q_OBJECT

public:
    explicit Bills(QWidget *parent = 0);
    ~Bills();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Bills *ui;

    enum Column
    {
        DATE, TITLE, PAYMENT
    };

public:
    double Sum() override;
};

#endif // BILLS_H
