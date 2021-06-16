#include "secwindow.h"
#include "ui_secwindow.h"
#include <QMessageBox>
#include <QtSerialPort/QSerialPort>
#include <QtDebug>
#include <QTimer>
#include <wiringPi.h>

QSerialPort* serial;

QTimer *timer1 = new QTimer();

SecWindow::SecWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SecWindow)
{
    ui->setupUi(this);
    serial = new QSerialPort(this);
    serial->setPortName("ttyS0");
    serial->setBaudRate(QSerialPort::Baud115200);
    serial->setDataBits(QSerialPort::Data8);
    serial->setParity(QSerialPort::NoParity);
    serial->setStopBits(QSerialPort::OneStop);
    serial->setFlowControl((QSerialPort::NoFlowControl));
    serial->open(QIODevice::ReadWrite);
    if(serial->isOpen()==true){
        qDebug()<<"Serial is opem..";
        connect(serial,SIGNAL(readyRead()),this,SLOT(on_Received_Data()));
    }

    connect(timer1,SIGNAL(timeout()),this,SLOT(incrementar_timer1())); //timer da buzina

 /*   APARTIR DAQUI QUE DÁ ERRO
  *
  * NÃO CONHECE AS FUNÇÕES pinMode e wiringPiSetup
  //  if(wiringPiSetup()==-1) exit(1);

    pinMode(5,INPUT);//PISCA DA ESQUERDA
    pinMode(6,INPUT);//PISCA DA DIREITA
    pinMode(16,OUTPUT);//buzina*/
}

SecWindow::~SecWindow()
{
    delete ui;
    serial->close();
}

void SecWindow::on_SairBtt_clicked()
{
    QMessageBox::StandardButton reply = QMessageBox::question(this, "Sair","Tem a certeza que deseja sair?",QMessageBox::Yes|QMessageBox::No);

    if (reply == QMessageBox::Yes) hide();
}

void SecWindow::on_pushButton_clicked() //para a buzina
{

    if(timer1->isActive())
    {
        timer1->stop();
        //digitalWrite(16,0);
        ui->pushButton->setText("Ligar Buzina");

    }
    else {
            timer1->start(1000);
            ui->pushButton->setText("Desligar Buzina");
    }

}

void SecWindow::incrementar_timer1()
{
 //   digitalWrite(16,1); ---------------------------------TAMBÉM NÃO CONHECE ESTA FUNÇÃO

}

void SecWindow::on_Received_Data() //RX
{
    QByteArray ba;
    ba=serial->readAll();
    ui->label_2->setText((ui->label_2->text()+ba));
    qDebug() << ba;

}

void SecWindow::on_marcha_btt_clicked() //TX
{
    if(serial->isOpen()==true)
    {
        serial->write("MA\n"); //o comando utilizado para efetuar a marcha atrás
        qDebug()<<"Message Send";
        ui->label_2->setText(" ");
    }
}
