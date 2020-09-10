/********************************************************************************
** Form generated from reading UI file 'wordtype.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDTYPE_H
#define UI_WORDTYPE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_WordType
{
public:

    void setupUi(QDialog *WordType)
    {
        if (WordType->objectName().isEmpty())
            WordType->setObjectName(QStringLiteral("WordType"));
        WordType->resize(400, 300);

        retranslateUi(WordType);

        QMetaObject::connectSlotsByName(WordType);
    } // setupUi

    void retranslateUi(QDialog *WordType)
    {
        WordType->setWindowTitle(QApplication::translate("WordType", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WordType: public Ui_WordType {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDTYPE_H
