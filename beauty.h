#ifndef BEAUTY_H
#define BEAUTY_H

#include <QDialog>
#include "addition.h"

namespace Ui {
class Beauty;
}

class Beauty : public QDialog, public Addition
{
    Q_OBJECT

public:
    explicit Beauty(QWidget *parent = 0);
    ~Beauty();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::Beauty *ui;
    enum Column
    {
        DATE, TITLE, PAYMENT
    };

public:
    double Sum() override;
};

#endif // BEAUTY_H
