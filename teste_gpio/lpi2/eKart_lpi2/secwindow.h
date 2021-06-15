#ifndef SECWINDOW_H
#define SECWINDOW_H
#include <wiringPi.h>
#include <QDialog>
#include <QtSerialPort/QSerialPort>
namespace Ui {
class SecWindow;
}

class SecWindow : public QDialog
{
    Q_OBJECT

public:
    explicit SecWindow(QWidget *parent = nullptr);
    ~SecWindow();

private slots:
    void on_SairBtt_clicked();

    void on_pushButton_clicked();
    void on_Received_Data();

    void incrementar_timer1();


private:
    Ui::SecWindow *ui;
};

#endif // SECWINDOW_H
