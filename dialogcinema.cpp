#include "dialogcinema.h"
#include "ui_dialogcinema.h"
#include <QFile>
#include <QTextStream>

DialogCinema::DialogCinema(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogCinema)
{
    ui->setupUi(this);
    this->setWindowTitle("Rozrywka");
    QFile inputFile(":/images/rest.txt");
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

DialogCinema::~DialogCinema()
{
    delete ui;
    ui = nullptr;
}

void DialogCinema::on_buttonBox_accepted()
{
    accept();
}

void DialogCinema::on_buttonBox_rejected()
{
    reject();
}

QString DialogCinema::date() const
{
    return ui->dateEdit->text();
}
QString DialogCinema::kind() const
{
    return ui->comboBox->currentText();
}
double DialogCinema::payment() const
{
    return ui->doubleSpinBox->value();
}
