/********************************************************************************
** Form generated from reading UI file 'wordcolor.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDCOLOR_H
#define UI_WORDCOLOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_WordColor
{
public:

    void setupUi(QDialog *WordColor)
    {
        if (WordColor->objectName().isEmpty())
            WordColor->setObjectName(QStringLiteral("WordColor"));
        WordColor->resize(400, 300);

        retranslateUi(WordColor);

        QMetaObject::connectSlotsByName(WordColor);
    } // setupUi

    void retranslateUi(QDialog *WordColor)
    {
        WordColor->setWindowTitle(QApplication::translate("WordColor", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WordColor: public Ui_WordColor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDCOLOR_H
