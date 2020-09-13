/********************************************************************************
** Form generated from reading UI file 'z_add_attach_alert.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_Z_ADD_ATTACH_ALERT_H
#define UI_Z_ADD_ATTACH_ALERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Zsentboxalert
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *Zsentboxalert)
    {
        if (Zsentboxalert->objectName().isEmpty())
            Zsentboxalert->setObjectName(QStringLiteral("Zsentboxalert"));
        Zsentboxalert->resize(186, 141);
        pushButton = new QPushButton(Zsentboxalert);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 80, 93, 28));
        label = new QLabel(Zsentboxalert);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 101, 31));

        retranslateUi(Zsentboxalert);

        QMetaObject::connectSlotsByName(Zsentboxalert);
    } // setupUi

    void retranslateUi(QDialog *Zsentboxalert)
    {
        Zsentboxalert->setWindowTitle(QApplication::translate("Zsentboxalert", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Zsentboxalert", "ok", Q_NULLPTR));
        label->setText(QApplication::translate("Zsentboxalert", "<html><head/><body><p><span style=\" font-size:12pt;\">\351\231\204\344\273\266\345\267\262\346\267\273\345\212\240</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Zsentboxalert: public Ui_Zsentboxalert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_Z_ADD_ATTACH_ALERT_H
