#ifndef FREETIME_H
#define FREETIME_H

#include <QDialog>
#include "addition.h"

namespace Ui {
class FreeTime;
}

class FreeTime : public QDialog, public Addition
{
    Q_OBJECT

public:
    explicit FreeTime(QWidget *parent = 0);
    ~FreeTime();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::FreeTime *ui;

    enum Column
    {
        DATE, CAFE, PAYMENT
    };

public:
    double Sum() override;

};

#endif // FREETIME_H
