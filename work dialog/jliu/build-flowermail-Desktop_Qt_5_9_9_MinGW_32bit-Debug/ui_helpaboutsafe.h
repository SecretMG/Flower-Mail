/********************************************************************************
** Form generated from reading UI file 'helpaboutsafe.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPABOUTSAFE_H
#define UI_HELPABOUTSAFE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpAboutSafe
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *HelpAboutSafe)
    {
        if (HelpAboutSafe->objectName().isEmpty())
            HelpAboutSafe->setObjectName(QStringLiteral("HelpAboutSafe"));
        HelpAboutSafe->resize(551, 441);
        label = new QLabel(HelpAboutSafe);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 40, 91, 21));
        label_2 = new QLabel(HelpAboutSafe);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 80, 481, 16));
        label_3 = new QLabel(HelpAboutSafe);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 120, 72, 15));
        label_4 = new QLabel(HelpAboutSafe);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 150, 531, 16));
        label_5 = new QLabel(HelpAboutSafe);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 180, 511, 16));
        label_6 = new QLabel(HelpAboutSafe);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 210, 431, 16));

        retranslateUi(HelpAboutSafe);

        QMetaObject::connectSlotsByName(HelpAboutSafe);
    } // setupUi

    void retranslateUi(QWidget *HelpAboutSafe)
    {
        HelpAboutSafe->setWindowTitle(QApplication::translate("HelpAboutSafe", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("HelpAboutSafe", "\345\257\206\344\277\235\351\227\256\351\242\230", Q_NULLPTR));
        label_2->setText(QApplication::translate("HelpAboutSafe", "\345\257\206\344\277\235\351\227\256\351\242\230\346\230\257\346\211\276\345\233\236\345\257\206\347\240\201\345\222\214\344\277\256\346\224\271\345\257\206\347\240\201\347\232\204\345\224\257\344\270\200\351\200\224\345\276\204\357\274\201\350\257\267\345\215\203\344\270\207\344\270\215\350\246\201\345\277\230\350\256\260\357\274\201", Q_NULLPTR));
        label_3->setText(QApplication::translate("HelpAboutSafe", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        label_4->setText(QApplication::translate("HelpAboutSafe", "\347\224\250\346\210\267\345\220\215\346\230\257\346\202\250\345\234\250Flower-Mail\344\270\255\351\200\232\350\241\214\347\232\204\345\224\257\344\270\200\345\207\255\350\257\201\357\274\214\345\217\252\350\203\275\345\214\205\346\213\254\350\213\261\346\226\207\345\255\227", Q_NULLPTR));
        label_5->setText(QApplication::translate("HelpAboutSafe", "\346\257\215\357\274\214\347\254\246\345\217\267\357\274\210\345\210\206\345\217\267\351\231\244\345\244\226\357\274\211\346\210\226\350\200\205\346\225\260\345\255\227\343\200\202", Q_NULLPTR));
        label_6->setText(QApplication::translate("HelpAboutSafe", "\347\224\250\346\210\267\345\220\215\344\277\256\346\224\271\350\257\267\350\277\233\345\205\245\344\270\252\344\272\272\344\270\255\345\277\203-\347\224\250\346\210\267\345\220\215\344\277\256\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HelpAboutSafe: public Ui_HelpAboutSafe {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPABOUTSAFE_H
