/********************************************************************************
** Form generated from reading UI file 'sec_window.ui'
**
** Created by: Qt User Interface Compiler version 5.12.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEC_WINDOW_H
#define UI_SEC_WINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_sec_window
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *sair_btt;

    void setupUi(QDialog *sec_window)
    {
        if (sec_window->objectName().isEmpty())
            sec_window->setObjectName(QString::fromUtf8("sec_window"));
        sec_window->resize(400, 300);
        label = new QLabel(sec_window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(160, 10, 67, 17));
        label_2 = new QLabel(sec_window);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(140, 110, 211, 17));
        sair_btt = new QPushButton(sec_window);
        sair_btt->setObjectName(QString::fromUtf8("sair_btt"));
        sair_btt->setGeometry(QRect(290, 250, 89, 25));

        retranslateUi(sec_window);

        QMetaObject::connectSlotsByName(sec_window);
    } // setupUi

    void retranslateUi(QDialog *sec_window)
    {
        sec_window->setWindowTitle(QApplication::translate("sec_window", "Dialog", nullptr));
        label->setText(QApplication::translate("sec_window", "    eKart", nullptr));
        label_2->setText(QApplication::translate("sec_window", "Bem-vindo Luiz ", nullptr));
        sair_btt->setText(QApplication::translate("sec_window", "SAIR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sec_window: public Ui_sec_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEC_WINDOW_H
