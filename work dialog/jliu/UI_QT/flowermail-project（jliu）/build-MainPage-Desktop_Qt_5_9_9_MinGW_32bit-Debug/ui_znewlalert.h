/********************************************************************************
** Form generated from reading UI file 'znewlalert.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ZNEWLALERT_H
#define UI_ZNEWLALERT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ZnewLAlert
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *ZnewLAlert)
    {
        if (ZnewLAlert->objectName().isEmpty())
            ZnewLAlert->setObjectName(QStringLiteral("ZnewLAlert"));
        ZnewLAlert->resize(249, 161);
        buttonBox = new QDialogButtonBox(ZnewLAlert);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 110, 211, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(ZnewLAlert);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 20, 201, 81));

        retranslateUi(ZnewLAlert);
        QObject::connect(buttonBox, SIGNAL(accepted()), ZnewLAlert, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ZnewLAlert, SLOT(reject()));

        QMetaObject::connectSlotsByName(ZnewLAlert);
    } // setupUi

    void retranslateUi(QDialog *ZnewLAlert)
    {
        ZnewLAlert->setWindowTitle(QApplication::translate("ZnewLAlert", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ZnewLAlert", "<html><head/><body><p><span style=\" font-size:16pt;\">\346\202\250\346\234\211\344\270\200\345\260\201\346\226\260\351\202\256\344\273\266\357\274\214</span></p><p><span style=\" font-size:16pt;\">\350\257\267\346\263\250\346\204\217\346\237\245\346\224\266</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ZnewLAlert: public Ui_ZnewLAlert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ZNEWLALERT_H
