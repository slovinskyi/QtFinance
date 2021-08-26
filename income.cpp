#include "income.h"
#include "ui_income.h"
#include "dialogincome.h"
#include <QFile>
#include <QTextStream>

Income::Income(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Income)
{
    ui->setupUi(this);
    QStringList titles;
//    setWindowIcon(QIcon("/images/icons8-increase-64.png"));
    setWindowTitle("Dochód");
    ui->tableWidget->setColumnCount(3);
    titles << "Data" << "Tytuł" << "Kwota";
    ui->tableWidget->setHorizontalHeaderLabels(titles);
}

Income::~Income()
{
    delete ui;
}

void Income::on_pushButton_clicked()
{
    int result;
    QString date;
    QString title;
    double payment;
    DialogIncome dialogIncom;
    dialogIncom.setModal(true);
    result = dialogIncom.exec();
    if(result == QDialog::Rejected) return;
    date = dialogIncom.date();
    title = dialogIncom.title();
    payment = dialogIncom.payment();
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, DATE,
                             new QTableWidgetItem(date));
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, TITLE,
                             new QTableWidgetItem(title));
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, PAYMENT,
                             new QTableWidgetItem(QString::number(payment)));
}

void Income::on_pushButton_2_clicked()
{
    QList<QTableWidgetItem *> selected = ui->tableWidget->selectedItems();
    QTableWidgetItem *item;
    int number = 0;
    double total = 0;
    foreach (item, selected) {
        bool ok;
        double value = item->text().toDouble(&ok);

        if (ok && !item->text().isEmpty()) {
            total += value;
            number++;
        }
    }

//    if (number > 0)
//        ui->LineEdit->setText(QString::number(total));
        ui->lineEdit->setText(QString::number(total));
    QFile file("income.json");
    if(!file.open(QIODevice::WriteOnly | QIODevice::Text)) return;
    QTextStream out(&file);
    out << total;
    file.close();
}
