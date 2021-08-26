#include "dialog.h"
#include "ui_dialog.h"
#include <QMessageBox>
#include <QFile>
#include <QTextStream>
#include <QLabel>
#include <food.h>

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setWindowTitle("Artykuły spożywcze");
    QFile inputFile(":/images/spozywcze.txt");
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

Dialog::~Dialog()
{
    delete ui;
    ui = nullptr;
}

void Dialog::on_buttonBox_accepted()
{
    accept();
}

void Dialog::on_buttonBox_rejected()
{
    reject();
}


QString Dialog::date() const
{
    return ui->dateEdit->text();
}
QString Dialog::shop() const
{
    return ui->comboBox->currentText();
}
double Dialog::payment() const
{
    return ui->doubleSpinBox->value();
}
