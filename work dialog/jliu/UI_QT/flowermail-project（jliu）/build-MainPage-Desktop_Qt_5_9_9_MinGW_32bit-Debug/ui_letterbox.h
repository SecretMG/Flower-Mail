/********************************************************************************
** Form generated from reading UI file 'letterbox.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LETTERBOX_H
#define UI_LETTERBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_letterbox
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *letterbox)
    {
        if (letterbox->objectName().isEmpty())
            letterbox->setObjectName(QStringLiteral("letterbox"));
        letterbox->resize(614, 405);
        centralwidget = new QWidget(letterbox);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        letterbox->setCentralWidget(centralwidget);
        menubar = new QMenuBar(letterbox);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 614, 26));
        letterbox->setMenuBar(menubar);
        statusbar = new QStatusBar(letterbox);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        letterbox->setStatusBar(statusbar);

        retranslateUi(letterbox);

        QMetaObject::connectSlotsByName(letterbox);
    } // setupUi

    void retranslateUi(QMainWindow *letterbox)
    {
        letterbox->setWindowTitle(QApplication::translate("letterbox", "MainWindow", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class letterbox: public Ui_letterbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LETTERBOX_H
