#ifndef HEALTH_H
#define HEALTH_H

#include <QDialog>
#include "addition.h"

namespace Ui {
class Health;
}

class Health : public QDialog, public Addition
{
    Q_OBJECT

public:
    explicit Health(QWidget *parent = 0);
    ~Health();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Health *ui;

    enum Column
    {
        DATE, TITLE, PAYMENT
    };

public:
    double Sum() override;
};

#endif // HEALTH_H
