/********************************************************************************
** Form generated from reading UI file 'writeletterwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITELETTERWINDOW_H
#define UI_WRITELETTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WriteLetterWindow
{
public:
    QWidget *centralwidget;
    QPushButton *Lsend;
    QTextEdit *Lcontext;
    QPushButton *UPloadattach;
    QTextEdit *Lreceiver;
    QLabel *Lreciver;
    QLabel *Ltheme;
    QTextEdit *LthemInput;
    QPushButton *SetTimeLaunch;
    QPushButton *SaveDraftButton;
    QPushButton *ReceiveListButton;
    QTextEdit *LreceivOther;
    QLabel *LreciverOther;
    QTextEdit *LreceiverSecert;
    QLabel *LreciverSecert;
    QPushButton *Wcolor;
    QPushButton *Wtype;
    QPushButton *Wsize;
    QMenuBar *menubar;
    QMenu *menu;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WriteLetterWindow)
    {
        if (WriteLetterWindow->objectName().isEmpty())
            WriteLetterWindow->setObjectName(QStringLiteral("WriteLetterWindow"));
        WriteLetterWindow->resize(800, 670);
        centralwidget = new QWidget(WriteLetterWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Lsend = new QPushButton(centralwidget);
        Lsend->setObjectName(QStringLiteral("Lsend"));
        Lsend->setGeometry(QRect(600, 550, 181, 71));
        Lcontext = new QTextEdit(centralwidget);
        Lcontext->setObjectName(QStringLiteral("Lcontext"));
        Lcontext->setGeometry(QRect(20, 230, 751, 301));
        UPloadattach = new QPushButton(centralwidget);
        UPloadattach->setObjectName(QStringLiteral("UPloadattach"));
        UPloadattach->setGeometry(QRect(20, 550, 161, 71));
        Lreceiver = new QTextEdit(centralwidget);
        Lreceiver->setObjectName(QStringLiteral("Lreceiver"));
        Lreceiver->setGeometry(QRect(120, 20, 221, 31));
        Lreciver = new QLabel(centralwidget);
        Lreciver->setObjectName(QStringLiteral("Lreciver"));
        Lreciver->setGeometry(QRect(30, 30, 72, 15));
        Ltheme = new QLabel(centralwidget);
        Ltheme->setObjectName(QStringLiteral("Ltheme"));
        Ltheme->setGeometry(QRect(30, 170, 72, 15));
        LthemInput = new QTextEdit(centralwidget);
        LthemInput->setObjectName(QStringLiteral("LthemInput"));
        LthemInput->setGeometry(QRect(120, 160, 631, 31));
        SetTimeLaunch = new QPushButton(centralwidget);
        SetTimeLaunch->setObjectName(QStringLiteral("SetTimeLaunch"));
        SetTimeLaunch->setGeometry(QRect(700, 200, 93, 28));
        SaveDraftButton = new QPushButton(centralwidget);
        SaveDraftButton->setObjectName(QStringLiteral("SaveDraftButton"));
        SaveDraftButton->setGeometry(QRect(610, 200, 93, 28));
        ReceiveListButton = new QPushButton(centralwidget);
        ReceiveListButton->setObjectName(QStringLiteral("ReceiveListButton"));
        ReceiveListButton->setGeometry(QRect(520, 20, 93, 28));
        LreceivOther = new QTextEdit(centralwidget);
        LreceivOther->setObjectName(QStringLiteral("LreceivOther"));
        LreceivOther->setGeometry(QRect(120, 60, 631, 31));
        LreciverOther = new QLabel(centralwidget);
        LreciverOther->setObjectName(QStringLiteral("LreciverOther"));
        LreciverOther->setGeometry(QRect(30, 70, 72, 15));
        LreceiverSecert = new QTextEdit(centralwidget);
        LreceiverSecert->setObjectName(QStringLiteral("LreceiverSecert"));
        LreceiverSecert->setGeometry(QRect(120, 100, 631, 31));
        LreciverSecert = new QLabel(centralwidget);
        LreciverSecert->setObjectName(QStringLiteral("LreciverSecert"));
        LreciverSecert->setGeometry(QRect(30, 110, 72, 15));
        Wcolor = new QPushButton(centralwidget);
        Wcolor->setObjectName(QStringLiteral("Wcolor"));
        Wcolor->setGeometry(QRect(200, 200, 93, 28));
        Wtype = new QPushButton(centralwidget);
        Wtype->setObjectName(QStringLiteral("Wtype"));
        Wtype->setGeometry(QRect(20, 200, 93, 28));
        Wsize = new QPushButton(centralwidget);
        Wsize->setObjectName(QStringLiteral("Wsize"));
        Wsize->setGeometry(QRect(110, 200, 93, 28));
        WriteLetterWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WriteLetterWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        menu = new QMenu(menubar);
        menu->setObjectName(QStringLiteral("menu"));
        WriteLetterWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(WriteLetterWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        WriteLetterWindow->setStatusBar(statusbar);

        menubar->addAction(menu->menuAction());

        retranslateUi(WriteLetterWindow);

        QMetaObject::connectSlotsByName(WriteLetterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WriteLetterWindow)
    {
        WriteLetterWindow->setWindowTitle(QApplication::translate("WriteLetterWindow", "MainWindow", Q_NULLPTR));
        Lsend->setText(QApplication::translate("WriteLetterWindow", "\345\217\221\351\200\201", Q_NULLPTR));
        UPloadattach->setText(QApplication::translate("WriteLetterWindow", "\351\231\204\344\273\266\344\270\212\344\274\240", Q_NULLPTR));
        Lreciver->setText(QApplication::translate("WriteLetterWindow", "\346\224\266\344\273\266\344\272\272", Q_NULLPTR));
        Ltheme->setText(QApplication::translate("WriteLetterWindow", "\344\270\273\351\242\230", Q_NULLPTR));
        SetTimeLaunch->setText(QApplication::translate("WriteLetterWindow", "\345\256\232\346\227\266\345\217\221\351\200\201", Q_NULLPTR));
        SaveDraftButton->setText(QApplication::translate("WriteLetterWindow", "\345\255\230\350\207\263\350\215\211\347\250\277\347\256\261", Q_NULLPTR));
        ReceiveListButton->setText(QApplication::translate("WriteLetterWindow", "\350\201\224\347\263\273\344\272\272\345\210\227\350\241\250", Q_NULLPTR));
        LreciverOther->setText(QApplication::translate("WriteLetterWindow", "\346\212\204\351\200\201\344\272\272", Q_NULLPTR));
        LreciverSecert->setText(QApplication::translate("WriteLetterWindow", "\345\257\206\351\200\201\344\272\272", Q_NULLPTR));
        Wcolor->setText(QApplication::translate("WriteLetterWindow", "\351\242\234\350\211\262", Q_NULLPTR));
        Wtype->setText(QApplication::translate("WriteLetterWindow", "\345\255\227\345\236\213", Q_NULLPTR));
        Wsize->setText(QApplication::translate("WriteLetterWindow", "\345\255\227\345\217\267", Q_NULLPTR));
        menu->setTitle(QApplication::translate("WriteLetterWindow", "\347\274\226\350\276\221\351\202\256\344\273\266", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WriteLetterWindow: public Ui_WriteLetterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITELETTERWINDOW_H
