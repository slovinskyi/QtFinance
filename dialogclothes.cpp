#include "dialogclothes.h"
#include "ui_dialogclothes.h"
#include <QFile>
#include <QTextStream>

DialogClothes::DialogClothes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogClothes)
{
    ui->setupUi(this);
    this->setWindowTitle("Moda");
    QFile inputFile(":/images/clothes.txt");
    if (inputFile.open(QIODevice::ReadOnly))
    {
       QTextStream in(&inputFile);
       while (!in.atEnd())
       {
          QString line = in.readLine();
          ui->comboBox->addItem(line);
       }
       inputFile.close();
    }
}

DialogClothes::~DialogClothes()
{
    delete ui;
    ui = nullptr;
}

void DialogClothes::on_buttonBox_accepted()
{
    accept();
}

void DialogClothes::on_buttonBox_rejected()
{
    reject();
}

QString DialogClothes::date() const
{
    return ui->dateEdit->text();
}
QString DialogClothes::shop() const
{
    return ui->comboBox->currentText();
}
double DialogClothes::payment() const
{
    return ui->doubleSpinBox->value();
}
