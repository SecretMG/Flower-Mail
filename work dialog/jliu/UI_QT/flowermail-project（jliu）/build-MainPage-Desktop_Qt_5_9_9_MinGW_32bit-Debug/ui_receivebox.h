/********************************************************************************
** Form generated from reading UI file 'receivebox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECEIVEBOX_H
#define UI_RECEIVEBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ReceiveBox
{
public:
    QWidget *centralwidget;
    QListView *listView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ReceiveBox)
    {
        if (ReceiveBox->objectName().isEmpty())
            ReceiveBox->setObjectName(QStringLiteral("ReceiveBox"));
        ReceiveBox->resize(655, 457);
        centralwidget = new QWidget(ReceiveBox);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        listView = new QListView(centralwidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(30, 20, 601, 381));
        ReceiveBox->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ReceiveBox);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 655, 26));
        ReceiveBox->setMenuBar(menubar);
        statusbar = new QStatusBar(ReceiveBox);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        ReceiveBox->setStatusBar(statusbar);

        retranslateUi(ReceiveBox);

        QMetaObject::connectSlotsByName(ReceiveBox);
    } // setupUi

    void retranslateUi(QMainWindow *ReceiveBox)
    {
        ReceiveBox->setWindowTitle(QApplication::translate("ReceiveBox", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ReceiveBox: public Ui_ReceiveBox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECEIVEBOX_H
