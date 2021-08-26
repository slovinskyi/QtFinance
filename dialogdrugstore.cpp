#include "dialogdrugstore.h"
#include "ui_dialogdrugstore.h"
#include <QFile>
#include <QTextStream>
DialogDrugstore::DialogDrugstore(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogDrugstore)
{
    ui->setupUi(this);
    this->setWindowTitle("Artykuły spożywcze");
    QFile inputFile(":/images/drugstore.txt");
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

DialogDrugstore::~DialogDrugstore()
{
    delete ui;
    ui = nullptr;
}

void DialogDrugstore::on_buttonBox_accepted()
{
    accept();
}

void DialogDrugstore::on_buttonBox_rejected()
{
    reject();
}

QString DialogDrugstore::date() const
{
    return ui->dateEdit->text();
}
QString DialogDrugstore::drugstore() const
{
    return ui->comboBox->currentText();
}
double DialogDrugstore::payment() const
{
    return ui->doubleSpinBox->value();
}
