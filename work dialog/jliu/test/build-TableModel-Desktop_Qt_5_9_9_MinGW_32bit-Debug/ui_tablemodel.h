/********************************************************************************
** Form generated from reading UI file 'tablemodel.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEMODEL_H
#define UI_TABLEMODEL_H

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

class Ui_TableModel
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *TableModel)
    {
        if (TableModel->objectName().isEmpty())
            TableModel->setObjectName(QStringLiteral("TableModel"));
        TableModel->resize(800, 600);
        centralwidget = new QWidget(TableModel);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        TableModel->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TableModel);
        menubar->setObjectName(QStringLiteral("menubar"));
        TableModel->setMenuBar(menubar);
        statusbar = new QStatusBar(TableModel);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        TableModel->setStatusBar(statusbar);

        retranslateUi(TableModel);

        QMetaObject::connectSlotsByName(TableModel);
    } // setupUi

    void retranslateUi(QMainWindow *TableModel)
    {
        TableModel->setWindowTitle(QApplication::translate("TableModel", "TableModel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class TableModel: public Ui_TableModel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABLEMODEL_H
