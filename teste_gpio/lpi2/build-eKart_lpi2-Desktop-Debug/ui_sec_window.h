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

class Ui_Sec_window
{
public:
    QLabel *label;
    QLabel *label_2;
    QPushButton *Sair_btt;

    void setupUi(QDialog *Sec_window)
    {
        if (Sec_window->objectName().isEmpty())
            Sec_window->setObjectName(QString::fromUtf8("Sec_window"));
        Sec_window->resize(400, 300);
        label = new QLabel(Sec_window);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(146, 10, 81, 20));
        label_2 = new QLabel(Sec_window);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 191, 17));
        Sair_btt = new QPushButton(Sec_window);
        Sair_btt->setObjectName(QString::fromUtf8("Sair_btt"));
        Sair_btt->setGeometry(QRect(290, 260, 89, 25));

        retranslateUi(Sec_window);

        QMetaObject::connectSlotsByName(Sec_window);
    } // setupUi

    void retranslateUi(QDialog *Sec_window)
    {
        Sec_window->setWindowTitle(QApplication::translate("Sec_window", "Dialog", nullptr));
        label->setText(QApplication::translate("Sec_window", "eKart", nullptr));
        label_2->setText(QApplication::translate("Sec_window", "Bem-Vindo Luiz", nullptr));
        Sair_btt->setText(QApplication::translate("Sec_window", "Sair", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Sec_window: public Ui_Sec_window {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEC_WINDOW_H
