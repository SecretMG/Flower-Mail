/********************************************************************************
** Form generated from reading UI file 'z_receivebox_alert.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_Z_RECEIVEBOX_ALERT_H
#define UI_Z_RECEIVEBOX_ALERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ZreceiveboxAlert
{
public:
    QLabel *label;
    QPushButton *pushButton;

    void setupUi(QDialog *ZreceiveboxAlert)
    {
        if (ZreceiveboxAlert->objectName().isEmpty())
            ZreceiveboxAlert->setObjectName(QStringLiteral("ZreceiveboxAlert"));
        ZreceiveboxAlert->resize(212, 137);
        label = new QLabel(ZreceiveboxAlert);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 30, 141, 41));
        pushButton = new QPushButton(ZreceiveboxAlert);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(60, 80, 93, 28));

        retranslateUi(ZreceiveboxAlert);

        QMetaObject::connectSlotsByName(ZreceiveboxAlert);
    } // setupUi

    void retranslateUi(QDialog *ZreceiveboxAlert)
    {
        ZreceiveboxAlert->setWindowTitle(QApplication::translate("ZreceiveboxAlert", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ZreceiveboxAlert", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\267\262\344\277\235\345\255\230\350\207\263\346\224\266\344\273\266\347\256\261</span></p></body></html>", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ZreceiveboxAlert", "ok", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZreceiveboxAlert: public Ui_ZreceiveboxAlert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_Z_RECEIVEBOX_ALERT_H
