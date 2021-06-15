/********************************************************************************
** Form generated from reading UI file 'secwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SECWINDOW_H
#define UI_SECWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_SecWindow
{
public:
    QLabel *label;
    QLabel *e_label;
    QPushButton *SairBtt;
    QPushButton *pushButton;
    QLabel *label_3;
    QPushButton *marcha_btt;
    QLabel *label_2;

    void setupUi(QDialog *SecWindow)
    {
        if (SecWindow->objectName().isEmpty())
            SecWindow->setObjectName(QStringLiteral("SecWindow"));
        SecWindow->resize(474, 336);
        label = new QLabel(SecWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 0, 68, 22));
        e_label = new QLabel(SecWindow);
        e_label->setObjectName(QStringLiteral("e_label"));
        e_label->setGeometry(QRect(20, 50, 81, 61));
        SairBtt = new QPushButton(SecWindow);
        SairBtt->setObjectName(QStringLiteral("SairBtt"));
        SairBtt->setGeometry(QRect(330, 260, 81, 21));
        pushButton = new QPushButton(SecWindow);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(310, 100, 125, 36));
        label_3 = new QLabel(SecWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(160, 50, 91, 61));
        marcha_btt = new QPushButton(SecWindow);
        marcha_btt->setObjectName(QStringLiteral("marcha_btt"));
        marcha_btt->setGeometry(QRect(310, 170, 125, 36));
        label_2 = new QLabel(SecWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 100, 221, 181));

        retranslateUi(SecWindow);

        QMetaObject::connectSlotsByName(SecWindow);
    } // setupUi

    void retranslateUi(QDialog *SecWindow)
    {
        SecWindow->setWindowTitle(QApplication::translate("SecWindow", "Dialog", nullptr));
        label->setText(QApplication::translate("SecWindow", "eKart", nullptr));
        e_label->setText(QString());
        SairBtt->setText(QApplication::translate("SecWindow", "Sair", nullptr));
        pushButton->setText(QApplication::translate("SecWindow", "Buzina", nullptr));
        label_3->setText(QString());
        marcha_btt->setText(QApplication::translate("SecWindow", "Marcha-atr\303\241s", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SecWindow: public Ui_SecWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SECWINDOW_H
