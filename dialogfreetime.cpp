#include "dialogfreetime.h"
#include "ui_dialogfreetime.h"
#include <QFile>
#include <freetime.h>
#include <QTextStream>

DialogFreeTime::DialogFreeTime(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::DialogFreeTime)
{
    ui->setupUi(this);
    this->setWindowTitle("Restauracje");
    QFile inputFile1(":/images/cafe.txt");
    if (inputFile1.open(QIODevice::ReadOnly))
    {
       QTextStream in1(&inputFile1);
       while (!in1.atEnd())
       {
          QString line1 = in1.readLine();
          ui->comboBox->addItem(line1);
       }
       inputFile1.close();
    }

//    QFile inputFile2("/home/vladyslav/Desktop/C++_project/rest.txt");
//    if (inputFile2.open(QIODevice::ReadOnly))
//    {
//       QTextStream in2(&inputFile1);
//       while (!in2.atEnd())
//       {
//          QString line2 = in2.readLine();
//          ui->comboBox->addItem(line2);
//       }
//       inputFile2.close();
//    }

//    QFile inputFile3("/home/vladyslav/Desktop/C++_project/pubs.txt");
//    if (inputFile3.open(QIODevice::ReadOnly))
//    {
//       QTextStream in3(&inputFile1);
//       while (!in3.atEnd())
//       {
//          QString line3 = in3.readLine();
//          ui->comboBox->addItem(line3);
//       }
//       inputFile3.close();
//    }
}

DialogFreeTime::~DialogFreeTime()
{
    delete ui;
    ui = nullptr;
}

void DialogFreeTime::on_buttonBox_accepted()
{
    accept();
}

void DialogFreeTime::on_buttonBox_rejected()
{
    reject();
}


QString DialogFreeTime::date() const
{
    return ui->dateEdit->text();
}

QString DialogFreeTime::cafe() const
{
    return ui->comboBox->currentText();
}
//QString DialogFreeTime::cafe() const
//{
//    return ui->comboBox->currentText();
//}
//QString DialogFreeTime::rest() const
//{
//    return ui->comboBox_2->currentText();
//}

//QString DialogFreeTime::pubs() const
//{
//    return ui->comboBox_3->currentText();
//}
double DialogFreeTime::payment() const
{
    return ui->doubleSpinBox->value();
}

//void DialogFreeTime::on_radioButton_1_clicked()
//{
//    DialogFreeTime c;
//    c.cafe();
//}
