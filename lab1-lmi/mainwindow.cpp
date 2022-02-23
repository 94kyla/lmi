#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "cmath"
#include <QMessageBox>
#include <QDesktopWidget>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    float x = ui->lineEdit->text().toFloat();
    float res = tan(x) + tan(2*x) - tan(3*x);
    ui->label_5->setText(QString::number(res));
    QMessageBox::about(this, "formula #1",QString::number(res));
}


void MainWindow::on_pushButton_2_clicked()
{
    float x = ui->lineEdit_2->text().toFloat();
    float res = pow(2,1+pow(x,7)) - pow(2,1-pow(x,3));
    ui->label_6->setText(QString::number(res));
    QMessageBox show;
    show.about(this, "formula #2",QString::number(res));
}

