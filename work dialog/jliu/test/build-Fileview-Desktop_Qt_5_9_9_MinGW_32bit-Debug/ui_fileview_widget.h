/********************************************************************************
** Form generated from reading UI file 'fileview_widget.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILEVIEW_WIDGET_H
#define UI_FILEVIEW_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Fileview_Widget
{
public:

    void setupUi(QWidget *Fileview_Widget)
    {
        if (Fileview_Widget->objectName().isEmpty())
            Fileview_Widget->setObjectName(QStringLiteral("Fileview_Widget"));
        Fileview_Widget->resize(552, 372);

        retranslateUi(Fileview_Widget);

        QMetaObject::connectSlotsByName(Fileview_Widget);
    } // setupUi

    void retranslateUi(QWidget *Fileview_Widget)
    {
        Fileview_Widget->setWindowTitle(QApplication::translate("Fileview_Widget", "Fileview_Widget", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Fileview_Widget: public Ui_Fileview_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILEVIEW_WIDGET_H
