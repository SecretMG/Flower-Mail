/********************************************************************************
** Form generated from reading UI file 'safesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAFESETTINGS_H
#define UI_SAFESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SafeSettings
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *SafeSettings)
    {
        if (SafeSettings->objectName().isEmpty())
            SafeSettings->setObjectName(QStringLiteral("SafeSettings"));
        SafeSettings->resize(736, 508);
        label = new QLabel(SafeSettings);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 140, 72, 15));
        label_2 = new QLabel(SafeSettings);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(120, 200, 72, 15));

        retranslateUi(SafeSettings);

        QMetaObject::connectSlotsByName(SafeSettings);
    } // setupUi

    void retranslateUi(QWidget *SafeSettings)
    {
        SafeSettings->setWindowTitle(QApplication::translate("SafeSettings", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("SafeSettings", "\345\257\206\344\277\235\351\227\256\351\242\230", Q_NULLPTR));
        label_2->setText(QApplication::translate("SafeSettings", "\345\257\206\344\277\235\347\255\224\346\241\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SafeSettings: public Ui_SafeSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAFESETTINGS_H
