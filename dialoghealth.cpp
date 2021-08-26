#include "dialoghealth.h"
#include "ui_dialoghealth.h"

DialogHealth::DialogHealth(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogHealth)
{
    ui->setupUi(this);
    this->setWindowTitle("Zdrowie");
}

DialogHealth::~DialogHealth()
{
    delete ui;
    ui = nullptr;
}

void DialogHealth::on_buttonBox_accepted()
{
    accept();
}

void DialogHealth::on_buttonBox_rejected()
{
    reject();
}

QString DialogHealth::date() const
{
    return ui->dateEdit->text();
}
QString DialogHealth::title() const
{
    return ui->lineEdit->text();
}
double DialogHealth::payment() const
{
    return ui->doubleSpinBox->value();
}
