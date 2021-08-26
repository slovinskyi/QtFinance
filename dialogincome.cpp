#include "dialogincome.h"
#include "ui_dialogincome.h"

DialogIncome::DialogIncome(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogIncome)
{
    ui->setupUi(this);
    this->setWindowTitle("Dochód");
}

DialogIncome::~DialogIncome()
{
    delete ui;
    ui = nullptr;
}

QString DialogIncome::date() const
{
    return ui->dateEdit->text();
}
QString DialogIncome::title() const
{
    return ui->lineEdit->text();
}
double DialogIncome::payment() const
{
    return ui->doubleSpinBox->value();
}

void DialogIncome::on_buttonBox_accepted()
{
    accept();
}

void DialogIncome::on_buttonBox_rejected()
{
    reject();
}
