#include "mainwindow.h"
#include "./ui_mainwindow.h"
//#include <QDebug>
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton_0,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_1,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_2,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_3,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_4,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_5,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_6,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_7,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_8,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_9,SIGNAL(released()),this,SLOT(digit_pressed()));
    connect(ui->pushButton_plusMinus,SIGNAL(released()),this,SLOT(unary_operation_pressed()));


}


MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::digit_pressed(){
    //qDebug()<<"test";
    QPushButton * button= (QPushButton*)sender();
    double labelNumber;
    QString newLable;
    labelNumber = (ui->label->text() + button->text()).toDouble();
    newLable = QString::number(labelNumber,'g',15);
    ui->label->setText(newLable);
}

void MainWindow::on_pushButton_decimal_released()
{
    ui->label->setText((ui->label->text()+"."));
}
void MainWindow::unary_operation_pressed(){
    QPushButton *button =(QPushButton*) sender();
    double labelNumber;
    QString newLable;
    if(button->text()== "+/-"){
        labelNumber = ui->label->text().toDouble();
        labelNumber = labelNumber * -1;
        newLable = QString::number(labelNumber,'g',15);
        ui->label->setText(newLable);
    }
}
