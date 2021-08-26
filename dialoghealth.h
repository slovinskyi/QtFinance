#ifndef DIALOGHEALTH_H
#define DIALOGHEALTH_H

#include <QDialog>

namespace Ui {
class DialogHealth;
}

class DialogHealth : public QDialog
{
    Q_OBJECT

public:
    explicit DialogHealth(QWidget *parent = 0);
    ~DialogHealth();

    QString date() const;
    QString title() const;
    double payment() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::DialogHealth *ui;
};

#endif // DIALOGHEALTH_H
