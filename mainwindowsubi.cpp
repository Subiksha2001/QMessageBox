#include "mainwindowsubi.h"
#include "ui_mainwindowsubi.h"
#include<QMessageBox>
#include<QDebug>
#include<QtCore>
#include<QtGui>

MainWindowsubi::MainWindowsubi(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindowsubi)
{
    ui->setupUi(this);
}

MainWindowsubi::~MainWindowsubi()
{
    delete ui;
}


void MainWindowsubi::on_pushButton_clicked()
{
     QMessageBox :: information(this,"Subiksha_212218104161","This is the information box");
}

void MainWindowsubi::on_pushButton_2_clicked()
{
    QMessageBox:: StandardButton reply;

       reply=QMessageBox:: question(this,"Subiksha_212218104161","Do you like oranges?",
                              QMessageBox::Yes | QMessageBox::No);
       if(reply==QMessageBox::Yes)
          {
           QMessageBox::information(this,"Title Here","You love oranges");
       }
       else
       {
           QMessageBox::information(this,"Title Here","You don't love oranges");
       }
}

void MainWindowsubi::on_pushButton_3_clicked()
{
      QMessageBox::warning(this,"Subiksha_212218104161","This is a warning message");
}

void MainWindowsubi::on_pushButton_4_clicked()
{
    QMessageBox:: StandardButton reply;

       reply=QMessageBox:: question(this,"Subiksha_212218104161","Do you like oranges?",
                              QMessageBox::Yes | QMessageBox::No |QMessageBox::YesToAll|QMessageBox::NoToAll);
       if(reply==QMessageBox::Yes)
          {
           QMessageBox::information(this,"Title Here","You love oranges");
       }
       if(reply==QMessageBox::YesToAll)
       {
           QMessageBox::information(this,"Title Here","Yeah i love them all");
       }
       else
       {
           QMessageBox::information(this,"Title Here","You don't love oranges");
       }
}
