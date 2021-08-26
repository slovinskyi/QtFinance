#ifndef INCOME_H
#define INCOME_H

#include <QDialog>

namespace Ui {
class Income;
}

class Income : public QDialog
{
    Q_OBJECT

public:
    explicit Income(QWidget *parent = 0);
    ~Income();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::Income *ui;

    enum Column
    {
        DATE, TITLE, PAYMENT
    };
};

#endif // INCOME_H
