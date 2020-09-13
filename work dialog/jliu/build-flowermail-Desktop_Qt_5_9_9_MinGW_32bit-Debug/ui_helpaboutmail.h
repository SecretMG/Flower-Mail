/********************************************************************************
** Form generated from reading UI file 'helpaboutmail.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPABOUTMAIL_H
#define UI_HELPABOUTMAIL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpAboutMail
{
public:
    QLabel *label_2;

    void setupUi(QWidget *HelpAboutMail)
    {
        if (HelpAboutMail->objectName().isEmpty())
            HelpAboutMail->setObjectName(QStringLiteral("HelpAboutMail"));
        HelpAboutMail->resize(701, 661);
        HelpAboutMail->setMinimumSize(QSize(701, 661));
        HelpAboutMail->setMaximumSize(QSize(701, 661));
        label_2 = new QLabel(HelpAboutMail);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 30, 271, 16));

        retranslateUi(HelpAboutMail);

        QMetaObject::connectSlotsByName(HelpAboutMail);
    } // setupUi

    void retranslateUi(QWidget *HelpAboutMail)
    {
        HelpAboutMail->setWindowTitle(QApplication::translate("HelpAboutMail", "Form", Q_NULLPTR));
        label_2->setText(QApplication::translate("HelpAboutMail", "\346\254\242\350\277\216\346\235\245\345\210\260\351\202\256\344\273\266\345\270\256\345\212\251\347\225\214\351\235\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HelpAboutMail: public Ui_HelpAboutMail {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPABOUTMAIL_H
