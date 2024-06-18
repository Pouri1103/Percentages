#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <QDebug>
#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->le_oldPrice_4->setFocus();
    ui->le_oldPrice->setFocus();

    connect(ui->le_oldPrice ,&QLineEdit::textEdited,this,&MainWindow::calculation);
    connect(ui->le_percent ,&QLineEdit::textEdited,this,&MainWindow::calculation);

    connect(ui->le_oldPrice_2 ,&QLineEdit::textEdited,this,&MainWindow::calculation2);
    connect(ui->le_percent_2 ,&QLineEdit::textEdited,this,&MainWindow::calculation2);

    connect(ui->le_oldPrice_3 ,&QLineEdit::textEdited,this,&MainWindow::calculation3);
    connect(ui->le_percent_3 ,&QLineEdit::textEdited,this,&MainWindow::calculation3);

    connect(ui->le_newPrice_4 ,&QLineEdit::textEdited,this,&MainWindow::calculation4);
    connect(ui->le_percent_4 ,&QLineEdit::textEdited,this,&MainWindow::calculation4);

    connect(ui->le_oldPrice_5 ,&QLineEdit::textEdited,this,&MainWindow::calculation5);
    connect(ui->le_newPrice_5 ,&QLineEdit::textEdited,this,&MainWindow::calculation5);

}

MainWindow::~MainWindow()
{
    delete ui;
}

//------------------------------------------------------------------------------------------------------------------------------------------------

void MainWindow::calculation()
{
    ui->le_newPrice->setText(QString::number(ui->le_oldPrice->text().toInt() * ui->le_percent->text().toFloat()/100));
}

void MainWindow::calculation2()
{
    ui->le_newPrice_2->setText(
        QString::number(ui->le_oldPrice_2->text().toInt() + ui->le_oldPrice_2->text().toInt() * (ui->le_percent_2->text().toFloat()/100)));
}

void MainWindow::calculation3()
{
    ui->le_newPrice_3->setText(
        QString::number(ui->le_oldPrice_3->text().toInt() - ui->le_oldPrice_3->text().toInt() * (ui->le_percent_3->text().toFloat()/100)));
}

void MainWindow::calculation4()
{
    ui->le_oldPrice_4->setText(QString::number(ui->le_newPrice_4->text().toInt() / (ui->le_percent_4->text().toFloat()/100)));
}

void MainWindow::calculation5()
{
    ui->le_percent_5->setText(QString::number(ui->le_newPrice_5->text().toInt() / ui->le_oldPrice_5->text().toFloat() * 100));
}

//------------------------------------------------------------------------------------------------------------------------------------------------

void MainWindow::on_pb_page_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}


void MainWindow::on_pb_page_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

