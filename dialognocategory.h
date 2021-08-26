#ifndef DIALOGNOCATEGORY_H
#define DIALOGNOCATEGORY_H

#include <QDialog>

namespace Ui {
class DialogNoCategory;
}

class DialogNoCategory : public QDialog
{
    Q_OBJECT

public:
    explicit DialogNoCategory(QWidget *parent = 0);
    ~DialogNoCategory();

    QString date() const;
    QString title() const;
    double payment() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::DialogNoCategory *ui;
};

#endif // DIALOGNOCATEGORY_H
