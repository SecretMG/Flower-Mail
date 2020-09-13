/********************************************************************************
** Form generated from reading UI file 'nofocuswidget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOFOCUSWIDGET_H
#define UI_NOFOCUSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NoFocusWidget
{
public:

    void setupUi(QWidget *NoFocusWidget)
    {
        if (NoFocusWidget->objectName().isEmpty())
            NoFocusWidget->setObjectName(QStringLiteral("NoFocusWidget"));
        NoFocusWidget->resize(400, 300);

        retranslateUi(NoFocusWidget);

        QMetaObject::connectSlotsByName(NoFocusWidget);
    } // setupUi

    void retranslateUi(QWidget *NoFocusWidget)
    {
        NoFocusWidget->setWindowTitle(QApplication::translate("NoFocusWidget", "Form", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NoFocusWidget: public Ui_NoFocusWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOFOCUSWIDGET_H
