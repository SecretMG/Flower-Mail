/********************************************************************************
** Form generated from reading UI file 'wordsize.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WORDSIZE_H
#define UI_WORDSIZE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_WordSize
{
public:

    void setupUi(QDialog *WordSize)
    {
        if (WordSize->objectName().isEmpty())
            WordSize->setObjectName(QStringLiteral("WordSize"));
        WordSize->resize(400, 300);

        retranslateUi(WordSize);

        QMetaObject::connectSlotsByName(WordSize);
    } // setupUi

    void retranslateUi(QDialog *WordSize)
    {
        WordSize->setWindowTitle(QApplication::translate("WordSize", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WordSize: public Ui_WordSize {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WORDSIZE_H
