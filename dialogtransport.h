#ifndef DIALOGTRANSPORT_H
#define DIALOGTRANSPORT_H

#include <QDialog>

namespace Ui {
class DialogTransport;
}

class DialogTransport : public QDialog
{
    Q_OBJECT

public:
    explicit DialogTransport(QWidget *parent = 0);
    ~DialogTransport();

    QString date() const;
    QString title() const;
    double payment() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::DialogTransport *ui;
};

#endif // DIALOGTRANSPORT_H
