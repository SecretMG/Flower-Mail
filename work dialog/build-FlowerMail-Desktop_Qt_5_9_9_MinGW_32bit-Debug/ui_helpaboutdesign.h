/********************************************************************************
** Form generated from reading UI file 'helpaboutdesign.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPABOUTDESIGN_H
#define UI_HELPABOUTDESIGN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpAboutDesign
{
public:
    QLabel *label;

    void setupUi(QWidget *HelpAboutDesign)
    {
        if (HelpAboutDesign->objectName().isEmpty())
            HelpAboutDesign->setObjectName(QStringLiteral("HelpAboutDesign"));
        HelpAboutDesign->resize(701, 661);
        HelpAboutDesign->setMinimumSize(QSize(701, 661));
        HelpAboutDesign->setMaximumSize(QSize(701, 661));
        label = new QLabel(HelpAboutDesign);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 50, 72, 15));

        retranslateUi(HelpAboutDesign);

        QMetaObject::connectSlotsByName(HelpAboutDesign);
    } // setupUi

    void retranslateUi(QWidget *HelpAboutDesign)
    {
        HelpAboutDesign->setWindowTitle(QApplication::translate("HelpAboutDesign", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("HelpAboutDesign", "\345\205\263\344\272\216\347\225\214\351\235\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HelpAboutDesign: public Ui_HelpAboutDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPABOUTDESIGN_H
