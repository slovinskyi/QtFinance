#ifndef DIALOGCLOTHES_H
#define DIALOGCLOTHES_H

#include <QDialog>

namespace Ui {
class DialogClothes;
}

class DialogClothes : public QDialog
{
    Q_OBJECT

public:
    explicit DialogClothes(QWidget *parent = 0);
    ~DialogClothes();

    QString date() const;
    QString shop() const;
    double payment() const;

private slots:
    void on_buttonBox_accepted();

    void on_buttonBox_rejected();

private:
    Ui::DialogClothes *ui;
};

#endif // DIALOGCLOTHES_H
