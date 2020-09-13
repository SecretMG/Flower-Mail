/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *ReceiveBox;
    QPushButton *Logout;
    QPushButton *SentBox;
    QPushButton *TrashBox;
    QPushButton *ScriptBox;
    QPushButton *WriteEmail;
    QPushButton *UnreaedBox;
    QFrame *line;
    QLabel *label;
    QPushButton *SearchButton;
    QTextEdit *textEdit;
    QPushButton *SettingB;
    QTableView *tableView;
    QPushButton *help_btn;
    QPushButton *safe_btn;
    QLabel *timeUpdate;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(980, 712);
        MainWindow->setMinimumSize(QSize(980, 712));
        MainWindow->setMaximumSize(QSize(980, 712));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        ReceiveBox = new QPushButton(centralwidget);
        ReceiveBox->setObjectName(QStringLiteral("ReceiveBox"));
        ReceiveBox->setGeometry(QRect(20, 250, 181, 61));
        Logout = new QPushButton(centralwidget);
        Logout->setObjectName(QStringLiteral("Logout"));
        Logout->setGeometry(QRect(880, 10, 93, 28));
        SentBox = new QPushButton(centralwidget);
        SentBox->setObjectName(QStringLiteral("SentBox"));
        SentBox->setGeometry(QRect(20, 310, 181, 61));
        TrashBox = new QPushButton(centralwidget);
        TrashBox->setObjectName(QStringLiteral("TrashBox"));
        TrashBox->setGeometry(QRect(20, 430, 181, 61));
        ScriptBox = new QPushButton(centralwidget);
        ScriptBox->setObjectName(QStringLiteral("ScriptBox"));
        ScriptBox->setGeometry(QRect(20, 370, 181, 61));
        WriteEmail = new QPushButton(centralwidget);
        WriteEmail->setObjectName(QStringLiteral("WriteEmail"));
        WriteEmail->setGeometry(QRect(580, 50, 111, 111));
        UnreaedBox = new QPushButton(centralwidget);
        UnreaedBox->setObjectName(QStringLiteral("UnreaedBox"));
        UnreaedBox->setGeometry(QRect(420, 50, 111, 111));
        line = new QFrame(centralwidget);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(0, 190, 981, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(770, 70, 191, 101));
        label->setMinimumSize(QSize(191, 101));
        label->setMaximumSize(QSize(191, 101));
        SearchButton = new QPushButton(centralwidget);
        SearchButton->setObjectName(QStringLiteral("SearchButton"));
        SearchButton->setGeometry(QRect(150, 210, 51, 28));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 210, 121, 31));
        SettingB = new QPushButton(centralwidget);
        SettingB->setObjectName(QStringLiteral("SettingB"));
        SettingB->setGeometry(QRect(10, 10, 93, 28));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(235, 231, 711, 421));
        help_btn = new QPushButton(centralwidget);
        help_btn->setObjectName(QStringLiteral("help_btn"));
        help_btn->setGeometry(QRect(780, 10, 93, 28));
        safe_btn = new QPushButton(centralwidget);
        safe_btn->setObjectName(QStringLiteral("safe_btn"));
        safe_btn->setGeometry(QRect(120, 10, 93, 28));
        timeUpdate = new QLabel(centralwidget);
        timeUpdate->setObjectName(QStringLiteral("timeUpdate"));
        timeUpdate->setGeometry(QRect(40, 110, 281, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 980, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        ReceiveBox->setText(QApplication::translate("MainWindow", "\346\224\266\344\273\266\347\256\261", Q_NULLPTR));
        Logout->setText(QApplication::translate("MainWindow", "\347\231\273\345\207\272", Q_NULLPTR));
        SentBox->setText(QApplication::translate("MainWindow", "\345\267\262\345\217\221\351\200\201", Q_NULLPTR));
        TrashBox->setText(QApplication::translate("MainWindow", "\345\236\203\345\234\276\347\256\261", Q_NULLPTR));
        ScriptBox->setText(QApplication::translate("MainWindow", "\350\215\211\347\250\277\347\256\261", Q_NULLPTR));
        WriteEmail->setText(QApplication::translate("MainWindow", "\345\206\231\351\202\256\344\273\266", Q_NULLPTR));
        UnreaedBox->setText(QApplication::translate("MainWindow", "\346\234\252\350\257\273\351\202\256\344\273\266", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\346\254\242\350\277\216\346\202\250\344\275\277\347\224\250FlowerMail\357\274\201", Q_NULLPTR));
        SearchButton->setText(QApplication::translate("MainWindow", "\346\220\234\347\264\242", Q_NULLPTR));
        SettingB->setText(QApplication::translate("MainWindow", "\344\270\273\351\242\230\350\256\276\347\275\256", Q_NULLPTR));
        help_btn->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", Q_NULLPTR));
        safe_btn->setText(QApplication::translate("MainWindow", "\345\256\211\345\205\250\350\256\276\347\275\256", Q_NULLPTR));
        timeUpdate->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\346\227\266\351\227\264", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
