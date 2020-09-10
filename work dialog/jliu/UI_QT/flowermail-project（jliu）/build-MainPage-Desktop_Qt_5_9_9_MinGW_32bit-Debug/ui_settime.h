/********************************************************************************
** Form generated from reading UI file 'settime.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTIME_H
#define UI_SETTIME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_settime
{
public:

    void setupUi(QDialog *settime)
    {
        if (settime->objectName().isEmpty())
            settime->setObjectName(QStringLiteral("settime"));
        settime->resize(400, 300);

        retranslateUi(settime);

        QMetaObject::connectSlotsByName(settime);
    } // setupUi

    void retranslateUi(QDialog *settime)
    {
        settime->setWindowTitle(QApplication::translate("settime", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class settime: public Ui_settime {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTIME_H
