/********************************************************************************
** Form generated from reading UI file 'z_draft_alert.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_Z_DRAFT_ALERT_H
#define UI_Z_DRAFT_ALERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_ZDraftAlert
{
public:
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *ZDraftAlert)
    {
        if (ZDraftAlert->objectName().isEmpty())
            ZDraftAlert->setObjectName(QStringLiteral("ZDraftAlert"));
        ZDraftAlert->resize(188, 132);
        pushButton = new QPushButton(ZDraftAlert);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 80, 93, 28));
        label = new QLabel(ZDraftAlert);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 30, 141, 41));

        retranslateUi(ZDraftAlert);

        QMetaObject::connectSlotsByName(ZDraftAlert);
    } // setupUi

    void retranslateUi(QDialog *ZDraftAlert)
    {
        ZDraftAlert->setWindowTitle(QApplication::translate("ZDraftAlert", "Dialog", Q_NULLPTR));
        pushButton->setText(QApplication::translate("ZDraftAlert", "ok", Q_NULLPTR));
        label->setText(QApplication::translate("ZDraftAlert", "<html><head/><body><p><span style=\" font-size:12pt;\">\345\267\262\344\277\235\345\255\230\350\207\263\350\215\211\347\250\277\347\256\261</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZDraftAlert: public Ui_ZDraftAlert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_Z_DRAFT_ALERT_H
