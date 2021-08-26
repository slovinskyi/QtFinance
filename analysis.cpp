#include "analysis.h"
#include "ui_analysis.h"
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QVector>
#include <algorithm>
#include <QMessageBox>

Analysis::Analysis(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Analysis)
{
    ui->setupUi(this);
    this->setWindowTitle("Analiza");

    QFile inputFile("food.json");
    if (inputFile.open(QIODevice::ReadOnly))
    {
       QTextStream in(&inputFile);
       if(in.atEnd()) ui->lineEdit->setText("0");
       while (!in.atEnd())
       {
          QString line = in.readLine();
          ui->lineEdit->setText(line);
          v.push_back(line.toDouble());
       }
       inputFile.close();
    }

    QFile input1("drug_data.json");
    if (input1.open(QIODevice::ReadOnly))
    {
       QTextStream in1(&input1);
       if(in1.atEnd()) ui->lineEdit_2->setText("0");
       while (!in1.atEnd())
       {
               QString line1 = in1.readLine();
               ui->lineEdit_2->setText(line1);
               v.push_back(line1.toDouble());
       }
       input1.close();
    }

    QFile input2("clothes_data.json");
    if (input2.open(QIODevice::ReadOnly))
    {
       QTextStream in2(&input2);
       if(in2.atEnd()) ui->lineEdit_4->setText("0");
       while (!in2.atEnd())
       {
               QString line2 = in2.readLine();
               ui->lineEdit_4->setText(line2);
               v.push_back(line2.toDouble());
       }
       input2.close();
    }

    QFile input3("bills_data.json");
    if (input3.open(QIODevice::ReadOnly))
    {
       QTextStream in3(&input3);
       if(in3.atEnd()) ui->lineEdit_5->setText("0");
       while (!in3.atEnd())
       {
               QString line3 = in3.readLine();
               ui->lineEdit_5->setText(line3);
               v.push_back(line3.toDouble());
       }
       input3.close();
    }

    QFile input4("freetime_data.json");
    if (input4.open(QIODevice::ReadOnly))
    {
       QTextStream in4(&input4);
       if(in4.atEnd()) ui->lineEdit_6->setText("0");
       while (!in4.atEnd())
       {
               QString line4 = in4.readLine();
               ui->lineEdit_6->setText(line4);
               v.push_back(line4.toDouble());
       }
       input4.close();
    }

    QFile input5("cinema_data.json");
    if (input5.open(QIODevice::ReadOnly))
    {
       QTextStream in5(&input5);
       if(in5.atEnd()) ui->lineEdit_11->setText("0");
       while (!in5.atEnd())
       {
               QString line5 = in5.readLine();
               ui->lineEdit_11->setText(line5);
               v.push_back(line5.toDouble());
       }
       input5.close();
    }

    QFile input6("transport_data.json");
    if (input6.open(QIODevice::ReadOnly))
    {
       QTextStream in6(&input6);
       if(in6.atEnd()) ui->lineEdit_7->setText("0");
       while (!in6.atEnd())
       {
               QString line6 = in6.readLine();
               ui->lineEdit_7->setText(line6);
               v.push_back(line6.toDouble());
       }
       input6.close();
    }

    QFile input7("beauty_data.json");
    if (input7.open(QIODevice::ReadOnly))
    {
       QTextStream in7(&input7);
       if(in7.atEnd()) ui->lineEdit_8->setText("0");
       while (!in7.atEnd())
       {
               QString line7 = in7.readLine();
               ui->lineEdit_8->setText(line7);
               v.push_back(line7.toDouble());
       }
       input7.close();
    }

    QFile input8("health_data.json");
    if (input8.open(QIODevice::ReadOnly))
    {
       QTextStream in8(&input8);
       if(in8.atEnd()) ui->lineEdit_9->setText("0");
       while (!in8.atEnd())
       {
               QString line8 = in8.readLine();
               ui->lineEdit_9->setText(line8);
               v.push_back(line8.toDouble());
       }
       input8.close();
    }

    QFile input9("nocategory_data.json");
    if (input9.open(QIODevice::ReadOnly))
    {
       QTextStream in9(&input9);
       if(in9.atEnd()) ui->lineEdit_10->setText("0");
       while (!in9.atEnd())
       {
               QString line9 = in9.readLine();
               ui->lineEdit_10->setText(line9);
               v.push_back(line9.toDouble());
       }
       input9.close();
    }

    double sum = std::accumulate(v.begin(), v.end(), 0.0);
    ui->lineEdit_12->setText(QString::number(sum));

    QFile inputn("income.json");
    if (inputn.open(QIODevice::ReadOnly))
    {
       QTextStream inn(&inputn);
       if(inn.atEnd())
       {
           ui->lineEdit_3->setText("0");
           ui->lineEdit_13->setText("0");
       }
       while (!inn.atEnd())
       {
               QString linen = inn.readLine();
               ui->lineEdit_3->setText(linen);
               ui->lineEdit_13->setText(linen);
               inc = linen.toDouble();
       }
       inputn.close();
    }
    ui->lineEdit_14->setText(QString::number(inc - sum));

}

Analysis::~Analysis()
{
    delete ui;
    ui = nullptr;
}

void Analysis::on_pushButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Raport", "Zanim wygenerujesz raport, upewnij się, że został zaznaczony właściwy okres. Jeśli tsk, wciśnik 'Yes'.", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QFile f("analysis_pdf.tex");
        if(!f.open(QIODevice::WriteOnly | QIODevice::Text)) return;
        QTextStream o(&f);
        o << "\\documentclass{article}" << "\n";
        o << "\\usepackage[utf8]{inputenc}" << "\n";
        o << "\\usepackage[T1]{fontenc}" << "\n";
        o << "\\usepackage[polish]{babel}" << "\n";
        o << "\\begin{document}" << "\n";
        o << "\\begin{center}" << "\n";
        o << "{\\huge Raport}" << "\n";
        o << "\\end{center}" << "\n";
        o << "\\begin{center}" << "\n";
        o << "{\\bf Okres: }" << ui->dateEdit->text() << " -- "<< ui->dateEdit_2->text() << "\n";
        o << "\\end{center}" << "\n";
        o << "\\begin{table}[!h]" << "\n";
        o << "\\begin{center}" << "\n";
        o << "\\begin{tabular}{lll}" << "\n";
        o << "\\hline" << "\n";
        o << "Wydatek & Kwota & \\\\" << "\n";
        o << "\\hline" << "\n";
        o << "Artyku\\l{}y spo\\.zywcze &" << v[0] << "&z\\l{}\\\\";
        o << "Drogeria&" << v[1] << "&z\\l{}\\\\";
        o << "Moda&" << v[2] << "&z\\l{}\\\\";
        o << "Rachunki&" << v[3] << "&z\\l{}\\\\";
        o << "Restauracje&" << v[4] << "&z\\l{}\\\\";
        o << "Rozrywka&" << v[5] << "&z\\l{}\\\\";
        o << "Transport &" << v[6] << "&z\\l{}\\\\";
        o << "Uroda &" << v[7] << "&z\\l{}\\\\";
        o << "Zdrowie &" << v[8] << "&z\\l{}\\\\";
        o << "Bez kategorii &" << v[9] << "&z\\l{}\\\\";
        o << "\\hline" << "\n";
        o << "{\\bf Suma wydatk\\'ow:}&" << std::accumulate(v.begin(), v.end(), 0.0) << "&" << "z\\l{}\\\\";
        o << "&&\\\\" << "\n";
        o << "{\\bf Doch\\'od: }&" << inc << "&z\\l{}\\\\";
        o << "{\\bf Saldo: }&" << inc - std::accumulate(v.begin(), v.end(), 0.0) << "&z\\l{}\\\\";
        o << "\\end{tabular}" << "\n";
        o << "\\end{center}" << "\n";
        o << "\\end{table}" << "\n";
        o << "\\end{document}";
        f.close();

        system("pdflatex analysis_pdf.tex");
        system("evince analysis_pdf.pdf&");
    }
}
