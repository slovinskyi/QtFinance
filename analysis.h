#ifndef ANALYSIS_H
#define ANALYSIS_H

#include <QDialog>
#include "food.h"

namespace Ui {
class Analysis;
}

class Analysis : public QDialog
{
    Q_OBJECT

public:
    QVector<double> v;
    double inc = 0;

public:
    explicit Analysis(QWidget *parent = 0);
    ~Analysis();

private slots:
    void on_pushButton_clicked();


private:
    Ui::Analysis *ui;
};

#endif // ANALYSIS_H
