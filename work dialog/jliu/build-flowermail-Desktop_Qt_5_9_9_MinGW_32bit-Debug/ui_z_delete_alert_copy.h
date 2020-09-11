/********************************************************************************
** Form generated from reading UI file 'z_delete_alert_copy.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_Z_DELETE_ALERT_COPY_H
#define UI_Z_DELETE_ALERT_COPY_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Zdeletealert
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *Zdeletealert)
    {
        if (Zdeletealert->objectName().isEmpty())
            Zdeletealert->setObjectName(QStringLiteral("Zdeletealert"));
        Zdeletealert->resize(179, 141);
        pushButton = new QPushButton(Zdeletealert);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 80, 81, 28));
        label = new QLabel(Zdeletealert);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 40, 101, 31));

        retranslateUi(Zdeletealert);

        QMetaObject::connectSlotsByName(Zdeletealert);
    } // setupUi

    void retranslateUi(QDialog *Zdeletealert)
    {
        Zdeletealert->setWindowTitle(QApplication::translate("Zdeletealert", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("Zdeletealert", "ok", Q_NULLPTR));
        label->setText(QApplication::translate("Zdeletealert", "<html><head/><body><p><span style=\" font-size:12pt;\">\351\202\256\344\273\266\345\267\262\345\210\240\351\231\244</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Zdeletealert: public Ui_Zdeletealert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_Z_DELETE_ALERT_COPY_H
