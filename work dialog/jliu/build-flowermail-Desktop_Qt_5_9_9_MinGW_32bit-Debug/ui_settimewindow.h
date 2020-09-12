/********************************************************************************
** Form generated from reading UI file 'settimewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTIMEWINDOW_H
#define UI_SETTIMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCalendarWidget>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_SetTimeWindow
{
public:
    QDialogButtonBox *SetTimeButton;
    QCalendarWidget *calendarWidget;
    QDateTimeEdit *SetTimeEdit;

    void setupUi(QDialog *SetTimeWindow)
    {
        if (SetTimeWindow->objectName().isEmpty())
            SetTimeWindow->setObjectName(QStringLiteral("SetTimeWindow"));
        SetTimeWindow->resize(341, 384);
        SetTimeButton = new QDialogButtonBox(SetTimeWindow);
        SetTimeButton->setObjectName(QStringLiteral("SetTimeButton"));
        SetTimeButton->setGeometry(QRect(110, 330, 201, 32));
        SetTimeButton->setOrientation(Qt::Horizontal);
        SetTimeButton->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        calendarWidget = new QCalendarWidget(SetTimeWindow);
        calendarWidget->setObjectName(QStringLiteral("calendarWidget"));
        calendarWidget->setGeometry(QRect(20, 30, 296, 236));
        SetTimeEdit = new QDateTimeEdit(SetTimeWindow);
        SetTimeEdit->setObjectName(QStringLiteral("SetTimeEdit"));
        SetTimeEdit->setGeometry(QRect(120, 290, 194, 22));

        retranslateUi(SetTimeWindow);
        QObject::connect(SetTimeButton, SIGNAL(accepted()), SetTimeWindow, SLOT(accept()));
        QObject::connect(SetTimeButton, SIGNAL(rejected()), SetTimeWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(SetTimeWindow);
    } // setupUi

    void retranslateUi(QDialog *SetTimeWindow)
    {
        SetTimeWindow->setWindowTitle(QApplication::translate("SetTimeWindow", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SetTimeWindow: public Ui_SetTimeWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTIMEWINDOW_H
