#ifndef DIALOGINCOME_H
#define DIALOGINCOME_H

#include <QDialog>

namespace Ui {
class DialogIncome;
}

class DialogIncome : public QDialog
{
    Q_OBJECT

public:
    explicit DialogIncome(QWidget *parent = 0);
    ~DialogIncome();

    QString date() const;
    QString title() const;
    double payment() const;


private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::DialogIncome *ui;
};

#endif // DIALOGINCOME_H
