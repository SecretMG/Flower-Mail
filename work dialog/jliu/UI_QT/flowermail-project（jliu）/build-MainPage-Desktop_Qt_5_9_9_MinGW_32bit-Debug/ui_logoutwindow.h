/********************************************************************************
** Form generated from reading UI file 'logoutwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGOUTWINDOW_H
#define UI_LOGOUTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_Logoutwindow
{
public:
    QDialogButtonBox *Logoutconfirm;
    QTextBrowser *Logouttip;

    void setupUi(QDialog *Logoutwindow)
    {
        if (Logoutwindow->objectName().isEmpty())
            Logoutwindow->setObjectName(QStringLiteral("Logoutwindow"));
        Logoutwindow->resize(410, 284);
        Logoutconfirm = new QDialogButtonBox(Logoutwindow);
        Logoutconfirm->setObjectName(QStringLiteral("Logoutconfirm"));
        Logoutconfirm->setGeometry(QRect(90, 210, 201, 32));
        Logoutconfirm->setOrientation(Qt::Horizontal);
        Logoutconfirm->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        Logouttip = new QTextBrowser(Logoutwindow);
        Logouttip->setObjectName(QStringLiteral("Logouttip"));
        Logouttip->setGeometry(QRect(110, 100, 211, 71));

        retranslateUi(Logoutwindow);
        QObject::connect(Logoutconfirm, SIGNAL(accepted()), Logoutwindow, SLOT(accept()));
        QObject::connect(Logoutconfirm, SIGNAL(rejected()), Logoutwindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(Logoutwindow);
    } // setupUi

    void retranslateUi(QDialog *Logoutwindow)
    {
        Logoutwindow->setWindowTitle(QApplication::translate("Logoutwindow", "Dialog", Q_NULLPTR));
        Logouttip->setHtml(QApplication::translate("Logoutwindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:18pt;\">\347\241\256\350\256\244\347\231\273\345\207\272\357\274\237</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Logoutwindow: public Ui_Logoutwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGOUTWINDOW_H
