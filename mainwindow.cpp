#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"
#include <QAction>
#include <QFileDialog>
#include <QMenuBar>
#include "food.h"
#include "income.h"
#include "analysis.h"
#include "drugstore.h"
#include "clothes.h"
#include "freetime.h"
#include "bills.h"
#include "transport.h"
#include "beauty.h"
#include "health.h"
#include "nocategory.h"
#include "cinema.h"
#include <memory>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("QtFinance");
    connect(ui->cbUseCurrentSize, SIGNAL(toggled(bool)), ui->sbWidth, SLOT(setDisabled(bool)));
    connect(ui->cbUseCurrentSize, SIGNAL(toggled(bool)), ui->sbHeight, SLOT(setDisabled(bool)));

    Document *plotObjectHandler = new Document(this);
//    std::unique_ptr<Document> plotObjectHandler(new Document);
    ui->textEdit->document()->documentLayout()->registerHandler(Document::PlotTextFormat, plotObjectHandler);
//    delete plotObjectHandler;
//    plotObjectHandler = nullptr;
}

MainWindow::~MainWindow()
{
    delete ui;
    ui = nullptr;
}

void MainWindow::on_actionArtyku_y_spo_ywcze_triggered()
{

    Food food;
    food.setModal(true);
    food.exec();
}



void MainWindow::on_actionDoch_d_triggered()
{
    Income income;
    income.setModal(true);
    income.exec();

}

void MainWindow::on_pushButton_clicked()
{
    QTextCursor cursor = ui->textEdit->textCursor();
    double width = ui->cbUseCurrentSize->isChecked() ? 0 : ui->sbWidth->value();
    double height = ui->cbUseCurrentSize->isChecked() ? 0 : ui->sbHeight->value();
    cursor.insertText(QString(QChar::ObjectReplacementCharacter), Document::generatePlotFormat(ui->customPlot, width, height));

    ui->textEdit->setTextCursor(cursor);
}


void MainWindow::on_actionDane_triggered()
{
    Analysis analysis;
    analysis.setModal(true);
    analysis.exec();
}

void MainWindow::on_actionKosmetyki_triggered()
{
    Drugstore drug;
    drug.setModal(true);
    drug.exec();
}


void MainWindow::on_pushButton_2_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Analiza finansowa", "Upewnij się, że napewno zostaną wyrysowane właściwe dane. Jeśli chcesz kontynuować wciśnij 'OK'.", QMessageBox::Yes | QMessageBox::No);
    if(reply == QMessageBox::Yes)
    {
        QVector<double> v;
        QFile input("food.json");
        if (input.open(QIODevice::ReadOnly))
        {
           QTextStream in(&input);
           if(in.atEnd()) v.push_back(0);
           while (!in.atEnd())
           {
                   QString line = in.readLine();
                   v.push_back(line.toDouble());
           }
           input.close();
        }

        QFile input1("drug_data.json");
        if (input1.open(QIODevice::ReadOnly))
        {
           QTextStream in1(&input1);
           if(in1.atEnd()) v.push_back(0);
           while (!in1.atEnd())
           {
                   QString line1 = in1.readLine();
                   v.push_back(line1.toDouble());
           }
           input1.close();
        }

        QFile input2("clothes_data.json");
        if (input2.open(QIODevice::ReadOnly))
        {
           QTextStream in2(&input2);
           if(in2.atEnd()) v.push_back(0);
           while (!in2.atEnd())
           {
                   QString line2 = in2.readLine();
                   v.push_back(line2.toDouble());
           }
           input2.close();
        }

        QFile input3("bills_data.json");
        if (input3.open(QIODevice::ReadOnly))
        {
           QTextStream in3(&input3);
           if(in3.atEnd()) v.push_back(0);
           while (!in3.atEnd())
           {
                   QString line3 = in3.readLine();
                   v.push_back(line3.toDouble());
           }
           input3.close();
        }

        QFile input4("freetime_data.json");
        if (input4.open(QIODevice::ReadOnly))
        {
           QTextStream in4(&input4);
           if(in4.atEnd()) v.push_back(0);
           while (!in4.atEnd())
           {
                   QString line4 = in4.readLine();
                   v.push_back(line4.toDouble());
           }
           input4.close();
        }

        QFile input5("cinema_data.json");
        if (input5.open(QIODevice::ReadOnly))
        {
           QTextStream in5(&input5);
           if(in5.atEnd()) v.push_back(0);
           while (!in5.atEnd())
           {
                   QString line5 = in5.readLine();
                   v.push_back(line5.toDouble());
           }
           input5.close();
        }

        QFile input6("transport_data.json");
        if (input6.open(QIODevice::ReadOnly))
        {
           QTextStream in6(&input6);
           if(in6.atEnd()) v.push_back(0);
           while (!in6.atEnd())
           {
                   QString line6 = in6.readLine();
                   v.push_back(line6.toDouble());
           }
           input6.close();
        }

        QFile input7("beauty_data.json");
        if (input7.open(QIODevice::ReadOnly))
        {
           QTextStream in7(&input7);
           if(in7.atEnd()) v.push_back(0);
           while (!in7.atEnd())
           {
                   QString line7 = in7.readLine();
                   v.push_back(line7.toDouble());
           }
           input7.close();
        }

        QFile input8("health_data.json");
        if (input8.open(QIODevice::ReadOnly))
        {
           QTextStream in8(&input8);
           if(in8.atEnd()) v.push_back(0);
           while (!in8.atEnd())
           {
                   QString line8 = in8.readLine();
                   v.push_back(line8.toDouble());
           }
           input8.close();
        }

        QFile input9("nocategory_data.json");
        if (input9.open(QIODevice::ReadOnly))
        {
           QTextStream in9(&input9);
           if(in9.atEnd()) v.push_back(0);
           while (!in9.atEnd())
           {
                   QString line9 = in9.readLine();
                   v.push_back(line9.toDouble());
           }
           input9.close();
        }

        QLinearGradient gradient(0, 0, 0, 400);
        gradient.setColorAt(0, QColor(90, 90, 90));
        gradient.setColorAt(0.38, QColor(105, 105, 105));
        gradient.setColorAt(1, QColor(70, 70, 70));
        ui->customPlot->setBackground(QBrush(gradient));

        QCPBars *myBars = new QCPBars(ui->customPlot->xAxis, ui->customPlot->yAxis);
        myBars->setName("Bars Series");
        QVector<double> valueData;
        QVector<double> ticks;
        QVector<QString> labels;
        ticks << 1 << 2 << 3 << 4 << 5 << 6 << 7 << 8 << 9 << 10;
        labels << "Artykuły spożywcze" << "Drogeria" << "Moda" << "Rachunki" << "Restauracje" << "Rozrywka"
               << "Transport" << "Uroda" << "Zdrowie" << "Inne";
        QSharedPointer<QCPAxisTickerText> textTicker(new QCPAxisTickerText);
        textTicker->addTicks(ticks, labels);
        ui->customPlot->xAxis->setTicker(textTicker);
        ui->customPlot->xAxis->setTickLabelRotation(60);
        ui->customPlot->xAxis->setSubTicks(false);
        ui->customPlot->xAxis->setTickLength(0, 4);
        ui->customPlot->xAxis->setRange(0, 10);
        ui->customPlot->yAxis->setPadding(5);
        ui->customPlot->xAxis->setBasePen(QPen(Qt::white));
        ui->customPlot->xAxis->setTickPen(QPen(Qt::white));
        ui->customPlot->xAxis->grid()->setVisible(true);
        ui->customPlot->xAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
        ui->customPlot->xAxis->setTickLabelColor(Qt::white);
        ui->customPlot->xAxis->setLabelColor(Qt::white);
        ui->customPlot->yAxis->setBasePen(QPen(Qt::white));
        ui->customPlot->yAxis->setTickPen(QPen(Qt::white));
        ui->customPlot->yAxis->setSubTickPen(QPen(Qt::white));
        ui->customPlot->yAxis->grid()->setSubGridVisible(true);
        ui->customPlot->yAxis->setTickLabelColor(Qt::white);
        ui->customPlot->yAxis->setLabelColor(Qt::white);
        ui->customPlot->yAxis->grid()->setPen(QPen(QColor(130, 130, 130), 0, Qt::SolidLine));
        ui->customPlot->yAxis->grid()->setSubGridPen(QPen(QColor(130, 130, 130), 0, Qt::DotLine));
        myBars->setPen(QPen(QColor(250, 170, 20).lighter(130)));
        myBars->setBrush(QColor(250, 170, 20));
        ui->customPlot->yAxis->setLabel("Wydatki w PLN");
        valueData << v[0] << v[1] << v[2] << v[3] << v[4] << v[5] << v[6] << v[7] << v[8] << v[9];
        myBars->setData(ticks, valueData);
        ui->customPlot->rescaleAxes();
        ui->customPlot->replot();
//        delete myBars;
//        myBars = nullptr;
    }
}

void MainWindow::on_actionOdzie_triggered()
{
    Clothes cl;
    cl.setModal(true);
    cl.exec();
}

void MainWindow::on_actionRozrywka_i_wypoczynek_triggered()
{
    FreeTime t;
    t.setModal(true);
    t.exec();
}

void MainWindow::on_actionRachunki_triggered()
{
    Bills b;
    b.setModal(true);
    b.exec();
}

void MainWindow::on_actionTransport_triggered()
{
    Transport tr;
    tr.setModal(true);
    tr.exec();
}

void MainWindow::on_actionUroda_triggered()
{
    Beauty be;
    be.setModal(true);
    be.exec();
}

void MainWindow::on_actionZdrowie_triggered()
{
    Health h;
    h.setModal(true);
    h.exec();
}

void MainWindow::on_actionBez_kategorii_triggered()
{
    NoCategory nc;
    nc.setModal(true);
    nc.exec();
}

void MainWindow::on_actionRozrywka_triggered()
{
    Cinema c;
    c.setModal(true);
    c.exec();
}

void MainWindow::on_pushButton_3_clicked()
{
    QString fileName = QFileDialog::getSaveFileName(this, "Save document", qApp->applicationDirPath(), "*.pdf");
    if (!fileName.isEmpty())
    {
      QPrinter printer;
      printer.setOutputFormat(QPrinter::PdfFormat);
      printer.setOutputFileName(fileName);
      QMargins pageMargins(20, 20, 20, 20);
  #if QT_VERSION < QT_VERSION_CHECK(5, 3, 0)
      printer.setFullPage(false);
      printer.setPaperSize(QPrinter::A4);
      printer.setOrientation(QPrinter::Portrait);
      printer.setPageMargins(pageMargins.left(), pageMargins.top(), pageMargins.right(), pageMargins.bottom(), QPrinter::Millimeter);
  #else
      QPageLayout pageLayout;
      pageLayout.setMode(QPageLayout::StandardMode);
      pageLayout.setOrientation(QPageLayout::Portrait);
      pageLayout.setPageSize(QPageSize(QPageSize::A4));
      pageLayout.setUnits(QPageLayout::Millimeter);
      pageLayout.setMargins(QMarginsF(pageMargins));
      printer.setPageLayout(pageLayout);
  #endif
      ui->textEdit->document()->setPageSize(printer.pageRect().size());
      ui->textEdit->document()->print(&printer);
    }
}
