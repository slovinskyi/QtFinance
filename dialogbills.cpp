#include "dialogbills.h"
#include "ui_dialogbills.h"

DialogBills::DialogBills(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogBills)
{
    ui->setupUi(this);
    this->setWindowTitle("Rachunki");
}

DialogBills::~DialogBills()
{
    delete ui;
    ui = nullptr;
}

void DialogBills::on_buttonBox_accepted()
{
    accept();
}

void DialogBills::on_buttonBox_rejected()
{
    reject();
}

QString DialogBills::date() const
{
    return ui->dateEdit->text();
}
QString DialogBills::title() const
{
    return ui->lineEdit->text();
}
double DialogBills::payment() const
{
    return ui->doubleSpinBox->value();
}
