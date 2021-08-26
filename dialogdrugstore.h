#ifndef DIALOGDRUGSTORE_H
#define DIALOGDRUGSTORE_H

#include <QDialog>

namespace Ui {
class DialogDrugstore;
}

class DialogDrugstore : public QDialog
{
    Q_OBJECT

public:
    explicit DialogDrugstore(QWidget *parent = 0);
    ~DialogDrugstore();

    QString date() const;
    QString drugstore() const;
    double payment() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::DialogDrugstore *ui;
};

#endif // DIALOGDRUGSTORE_H
