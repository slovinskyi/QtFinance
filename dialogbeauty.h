#ifndef DIALOGBEAUTY_H
#define DIALOGBEAUTY_H

#include <QDialog>

namespace Ui {
class DialogBeauty;
}

class DialogBeauty : public QDialog
{
    Q_OBJECT

public:
    explicit DialogBeauty(QWidget *parent = 0);
    ~DialogBeauty();

    QString date() const;
    QString title() const;
    double payment() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::DialogBeauty *ui;
};

#endif // DIALOGBEAUTY_H
