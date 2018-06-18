#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "generators.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("X0");
    ui->progressBar->setRange(0,1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{

    Generators *gen = new Generators();
    unsigned int x;

    int length = ui->spinBox->value();
    ui->plainTextEdit->clear();
    int maxValue = ui->spinBox_3->value();
    int minValue = ui->spinBox_4->value();
    ui->progressBar->reset();

    a.clear();
    y.clear();
    vals.clear();
    str.clear();
    vals.reserve(ui->spinBox->value());
    ui->progressBar->show();
    ui->progressBar->setRange(0, length-1);
    a.resize(ui->spinBox->value());
    y.resize(ui->spinBox->value());

    switch (ui->comboBox->currentIndex())
    {
    case 0 : x = gen->mmq(ui->spinBox_2->value());
        break;
    case 1 : x = gen->lcg(ui->spinBox_2->value());
        break;
    case 2 :
        x = gen->lemer(ui->spinBox_2->value());
        break;
    case 3:
        x = gen->fib();
        break;
    case 4:
        x = gen->comb(ui->spinBox_2->value());
        break;
    case 7:
    {
        const int n = ui->spinBox->value();
        std::random_device device;
        std::mt19937 generator(device());
        std::uniform_int_distribution<int> distribution(minValue,maxValue);


        for (int i = 0; i < n; i++)
        {
            vals.push_back(distribution(generator));
            a[i] = static_cast <double> (i+1);
            y[i] = static_cast <double> (vals[i]);
            str += QString::number(vals[i]) + " ";
            ui->progressBar->setValue(i);
        }
        ui->plainTextEdit->insertPlainText(str);
        ui->plainTextEdit->moveCursor(QTextCursor::End);
        break;
    }

    default:
        x = ui->spinBox_2->value();
        break;
    }


    if (ui->comboBox->currentIndex() != 7)
        for (int i = 0; i < length; i++)
        {
            switch(ui->comboBox->currentIndex())
            {
            case 0:
                x = gen->mmq(x); break;
            case 1:
                x = gen->lcg(x);
                break;
            case 2:
                x = gen->lemer(x);
                break;
            case 3:
                x = gen->fib();
                break;
            case 4 :
                x = gen->comb(x);
                break;
            case 5 :
                x = gen->mult(x);
                break;

            case 6 :
                x = gen->lin();
                break;
            case 8 :
                x = gen->xorshift32((unsigned int )x);
                break;

            case 9:
                x = gen->mwc();
                break;


            }
            vals.push_back((x % (maxValue - minValue - 1))+minValue);
            a[i] = static_cast <double> (i+1);
            y[i] = static_cast <double> (vals[i]);
            str += QString::number((x % (maxValue - minValue - 1))+minValue) + " ";
            ui->progressBar->setValue(i);
        }


    ui->plainTextEdit->insertPlainText(str);
    ui->plainTextEdit->moveCursor(QTextCursor::End);


    auto customPlot = ui->widget;
    customPlot->addGraph();
    customPlot->graph(0)->setData(a,y);
    customPlot ->xAxis->setLabel("x");
    customPlot->yAxis->setLabel("y");
    customPlot->xAxis->setRange(0,vals.size());
    customPlot->yAxis->setRange(0,*std::max_element(vals.begin(), vals.end()));
    customPlot->graph(0)->setLineStyle(QCPGraph::lsNone);
    customPlot->graph(0)->setScatterStyle(QCPScatterStyle(QCPScatterStyle::ssCircle, 4));
    customPlot->xAxis->setLabel("Індекс");
    customPlot->yAxis->setLabel("Значення");
    customPlot->replot();

}

void MainWindow::on_comboBox_activated(int index)
{
    switch (index) {
    case 0 :
        ui->groupBox_2->show();
        ui->spinBox->show();
        ui->label->setText("X0");

        ui->spinBox_2->show();
        ui->label->show();
        break;
    case 1:
        ui->spinBox->show();
        ui->groupBox_2->show();
        break;
    case 7:
        ui->spinBox_2->hide();
        ui->label->hide();
        break;
    case 3:
        ui->spinBox_2->hide();
        ui->label->hide();
        break;
    case 9:
        ui->spinBox_2->hide();
        ui->label->hide();
        break;

    default :
        ui->spinBox_2->show();
        ui->groupBox_2->show();
        ui->label->setText("X0");
        ui->label->show();
        break;
    }

}
