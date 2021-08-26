#ifndef DIALOGFREETIME_H
#define DIALOGFREETIME_H

#include <QDialog>

namespace Ui {
class DialogFreeTime;
}

class DialogFreeTime : public QDialog
{
    Q_OBJECT

public:
    explicit DialogFreeTime(QWidget *parent = 0);
    ~DialogFreeTime();

    QString date() const;
    QString cafe() const;
//    QString rest() const;
//    QString pubs() const;
    double payment() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

//    void on_radioButton_1_clicked();

private:
    Ui::DialogFreeTime *ui;
};

#endif // DIALOGFREETIME_H
