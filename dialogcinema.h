#ifndef DIALOGCINEMA_H
#define DIALOGCINEMA_H

#include <QDialog>

namespace Ui {
class DialogCinema;
}

class DialogCinema : public QDialog
{
    Q_OBJECT

public:
    explicit DialogCinema(QWidget *parent = 0);
    ~DialogCinema();

    QString date() const;
    QString kind() const;
    double payment() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::DialogCinema *ui;
};

#endif // DIALOGCINEMA_H
