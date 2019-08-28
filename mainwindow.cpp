#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QString>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
   QString str="1";
    str1.append(str);
    ui->label->setText(str1);
}

void MainWindow::on_pushButton_6_clicked()
{
    QString str="2";
    str1.append(str);
    ui->label->setText(str1);
}

void MainWindow::on_pushButton_7_clicked()
{
    QString str="3";
    str1.append(str);
    ui->label->setText(str1);
}

void MainWindow::on_pushButton_2_clicked()
{
    QString str="4";
    str1.append(str);
    ui->label->setText(str1);
}

void MainWindow::on_pushButton_8_clicked()
{
    QString str="5";
    str1.append(str);
    ui->label->setText(str1);
}

void MainWindow::on_pushButton_11_clicked()
{
    QString str="6";
    str1.append(str);
    ui->label->setText(str1);
}

void MainWindow::on_pushButton_3_clicked()
{
    QString str="7";
    str1.append(str);
    ui->label->setText(str1);
}

void MainWindow::on_pushButton_9_clicked()
{
    QString str="8";
    str1.append(str);
    ui->label->setText(str1);
}

void MainWindow::on_pushButton_10_clicked()
{
    QString str="9";
    str1.append(str);
    ui->label->setText(str1);
}

void MainWindow::on_pushButton_14_clicked()
{
    QString str="0";
    str1.append(str);
    ui->label->setText(str1);
}

void MainWindow::on_pushButton_5_clicked()
{
    QString str="+";
    str1.append(str);
    ui->label->setText(str1);
}

void MainWindow::on_pushButton_12_clicked()
{
    QString str="-";
    str1.append(str);
    ui->label->setText(str1);
}

void MainWindow::on_pushButton_13_clicked()
{
    QString str="*";
    str1.append(str);
    ui->label->setText(str1);
}

void MainWindow::on_pushButton_16_clicked()
{
    QString str="/";
    str1.append(str);
    ui->label->setText(str1);
}

void MainWindow::on_pushButton_4_clicked()
{
    str1.clear();
    ui->label->clear();
}
