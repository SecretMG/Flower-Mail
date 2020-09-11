/********************************************************************************
** Form generated from reading UI file 'searchresultwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHRESULTWINDOW_H
#define UI_SEARCHRESULTWINDOW_H

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

class Ui_SearchResultWindow
{
public:
    QWidget *centralwidget;
    QListView *listView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *SearchResultWindow)
    {
        if (SearchResultWindow->objectName().isEmpty())
            SearchResultWindow->setObjectName(QStringLiteral("SearchResultWindow"));
        SearchResultWindow->resize(742, 490);
        centralwidget = new QWidget(SearchResultWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        listView = new QListView(centralwidget);
        listView->setObjectName(QStringLiteral("listView"));
        listView->setGeometry(QRect(30, 21, 681, 411));
        SearchResultWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(SearchResultWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 742, 26));
        SearchResultWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(SearchResultWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        SearchResultWindow->setStatusBar(statusbar);

        retranslateUi(SearchResultWindow);

        QMetaObject::connectSlotsByName(SearchResultWindow);
    } // setupUi

    void retranslateUi(QMainWindow *SearchResultWindow)
    {
        SearchResultWindow->setWindowTitle(QApplication::translate("SearchResultWindow", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SearchResultWindow: public Ui_SearchResultWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHRESULTWINDOW_H
