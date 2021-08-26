#ifndef DIALOGBILLS_H
#define DIALOGBILLS_H

#include <QDialog>

namespace Ui {
class DialogBills;
}

class DialogBills : public QDialog
{
    Q_OBJECT

public:
    explicit DialogBills(QWidget *parent = 0);
    ~DialogBills();

    QString date() const;
    QString title() const;
    double payment() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::DialogBills *ui;
};

#endif // DIALOGBILLS_H
