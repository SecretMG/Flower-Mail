/********************************************************************************
** Form generated from reading UI file 'tablevieshow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEVIESHOW_H
#define UI_TABLEVIESHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tableVieShow
{
public:
    QWidget *centralwidget;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *tableVieShow)
    {
        if (tableVieShow->objectName().isEmpty())
            tableVieShow->setObjectName(QStringLiteral("tableVieShow"));
        tableVieShow->resize(800, 600);
        centralwidget = new QWidget(tableVieShow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(65, 41, 651, 381));
        tableVieShow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(tableVieShow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 26));
        tableVieShow->setMenuBar(menubar);
        statusbar = new QStatusBar(tableVieShow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        tableVieShow->setStatusBar(statusbar);

        retranslateUi(tableVieShow);

        QMetaObject::connectSlotsByName(tableVieShow);
    } // setupUi

    void retranslateUi(QMainWindow *tableVieShow)
    {
        tableVieShow->setWindowTitle(QApplication::translate("tableVieShow", "tableVieShow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tableVieShow: public Ui_tableVieShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEVIESHOW_H
