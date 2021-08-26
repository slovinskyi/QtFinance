#include "dialogtransport.h"
#include "ui_dialogtransport.h"

DialogTransport::DialogTransport(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogTransport)
{
    ui->setupUi(this);
    this->setWindowTitle("Transport");
}

DialogTransport::~DialogTransport()
{
    delete ui;
    ui = nullptr;
}

void DialogTransport::on_buttonBox_accepted()
{
    accept();
}

void DialogTransport::on_buttonBox_rejected()
{
    reject();
}

QString DialogTransport::date() const
{
    return ui->dateEdit_2->text();
}
QString DialogTransport::title() const
{
    return ui->lineEdit->text();
}
double DialogTransport::payment() const
{
    return ui->doubleSpinBox_2->value();
}
