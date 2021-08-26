#include "dialogbeauty.h"
#include "ui_dialogbeauty.h"
#include "dialogbeauty.h"

DialogBeauty::DialogBeauty(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogBeauty)
{
    ui->setupUi(this);
    this -> setWindowTitle("Barber & Salony Urody");
}

DialogBeauty::~DialogBeauty()
{
    delete ui;
    ui = nullptr;
}

void DialogBeauty::on_buttonBox_accepted()
{
    accept();
}

void DialogBeauty::on_buttonBox_rejected()
{
    reject();
}

QString DialogBeauty::date() const
{
    return ui->dateEdit->text();
}
QString DialogBeauty::title() const
{
    return ui->lineEdit->text();
}
double DialogBeauty::payment() const
{
    return ui->doubleSpinBox->value();
}
