#include "clothes.h"
#include "ui_clothes.h"
#include <QFile>
#include <QTextStream>
#include "dialogclothes.h"
#include "mainwindow.h"

Clothes::Clothes(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Clothes)
{
    ui->setupUi(this);
    QStringList titles;
    setWindowTitle("Moda");
    ui->tableWidget->setColumnCount(3);
    titles << "Data" << "Sklep" << "Kwota";
    ui->tableWidget->setHorizontalHeaderLabels(titles);
}

void Clothes::on_pushButton_2_clicked()
{
    int result;
    QString date;
    QString shop;
    double payment;
    DialogClothes dialog;
    dialog.setModal(true);
    result = dialog.exec();
    if(result == QDialog::Rejected) return;
    date = dialog.date();
    shop = dialog.shop();
    payment = dialog.payment();
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, DATE,
                             new QTableWidgetItem(date));
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, SHOP,
                             new QTableWidgetItem(shop));
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1, PAYMENT,
                             new QTableWidgetItem(QString::number(payment)));
}

double Clothes::Sum()
{
    QList<QTableWidgetItem *> selected = ui->tableWidget->selectedItems();
    QTableWidgetItem *item;
    int number = 0;
    double total = 0;
    foreach (item, selected)
    {
        bool ok;
        double value = item->text().toDouble(&ok);

        if (ok && !item->text().isEmpty())
        {
            total += value;
            number++;
        }
    }
    return total;
}

void Clothes::on_pushButton_clicked()
{
        ui->lineEdit->setText(QString::number(Clothes::Sum()));

        QFile file("clothes_data.json");
        if(!file.open(QIODevice::WriteOnly | QIODevice::Text)) return;
        QTextStream out(&file);
        out << Clothes::Sum();
        file.close();
}


Clothes::~Clothes()
{
    delete ui;
    ui = nullptr;
}

void Clothes::on_pushButton_3_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Raport", "Zanim wygenerujesz raport, upewnij się, że została policzona suma. Jeśli nie, wciśnij 'No' i policz sumę przyciskiem 'Sum'. Natomiast jeśli suma została policzona, wciśnij 'Yes'.", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QFile f("clothes_pdf.tex");
        if(!f.open(QIODevice::WriteOnly | QIODevice::Text)) return;
        QTextStream o(&f);
        o << "\\documentclass{article}" << "\n";
        o << "\\usepackage[utf8]{inputenc}" << "\n";
        o << "\\usepackage[T1]{fontenc}" << "\n";
        o << "\\usepackage[polish]{babel}" << "\n";
        o << "\\usepackage{graphicx}" << "\n";
        o << "\\begin{document}" << "\n";
//        o << "\\begin{figure}[!h]" << "\n";
//        o << "\\begin{center}" << "\n";
//        o << "\\includegraphics[scale = 0.4]{icons-hamburger-80.png}" << "\n";
//        o << "\\end{center}" << "\n";
//        o << "\\end{figure}" << "\n";
        o << "\\begin{center}" << "\n";
        o << "{\\huge Moda}" << "\n";
        o << "\\end{center}" << "\n";
        o << "\\begin{table}[!h]" << "\n";
        o << "\\begin{center}" << "\n";
        o << "\\begin{tabular}{llll}" << "\n";
        o << "\\hline" << "\n";
        o << "Data & Sklep & Kwota\\\\" << "\n";
        o << "\\hline" << "\n";
        for(int i = 0; i < ui->tableWidget->rowCount(); ++i)
        {
            for(int j = 0; j < 3; ++j)
            {
                QTableWidgetItem *itab= ui->tableWidget->item(i, j);
                QString itabtext = itab->text();
                o << itabtext << "&";
            }
            o << "z\\l{}" << "\\\\" << "\n";
        }
        o << "\\hline" << "\n";
        o << "&{\\bf Suma:}&" << Clothes::Sum() << "&" << "z\\l{}\\\\";
        o << "\\end{tabular}" << "\n";
        o << "\\end{center}" << "\n";
        o << "\\end{table}" << "\n";
        o << "\\end{document}";
        f.close();

        system("pdflatex clothes_pdf.tex");
        system("evince clothes_pdf.pdf&");
    }
}

