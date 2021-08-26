#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <QDialog>
#include "addition.h"

namespace Ui {
class Transport;
}

class Transport : public QDialog, public Addition
{
    Q_OBJECT

public:
    explicit Transport(QWidget *parent = 0);
    ~Transport();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Transport *ui;
    enum Column
    {
        DATE, TITLE, PAYMENT
    };

public:
    double Sum() override;
};

#endif // TRANSPORT_H
