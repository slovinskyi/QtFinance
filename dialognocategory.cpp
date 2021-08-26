#include "dialognocategory.h"
#include "ui_dialognocategory.h"

DialogNoCategory::DialogNoCategory(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogNoCategory)
{
    ui->setupUi(this);
        this->setWindowTitle("Bez kategorii");
}

DialogNoCategory::~DialogNoCategory()
{
    delete ui;
    ui = nullptr;
}

void DialogNoCategory::on_buttonBox_accepted()
{
    accept();
}

void DialogNoCategory::on_buttonBox_rejected()
{
    reject();
}

QString DialogNoCategory::date() const
{
    return ui->dateEdit->text();
}
QString DialogNoCategory::title() const
{
    return ui->lineEdit->text();
}
double DialogNoCategory::payment() const
{
    return ui->doubleSpinBox->value();
}
