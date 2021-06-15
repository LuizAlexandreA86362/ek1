#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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


void MainWindow::on_start_btt_clicked()
{
        QMessageBox::about(this,"eKart","Bem Vindo ao eKart!!");
        hide();
        sec =   new SecWindow(this);
        sec->show();

}
