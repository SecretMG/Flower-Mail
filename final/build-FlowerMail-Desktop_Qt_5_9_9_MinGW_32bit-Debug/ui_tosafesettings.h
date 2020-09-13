/********************************************************************************
** Form generated from reading UI file 'tosafesettings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TOSAFESETTINGS_H
#define UI_TOSAFESETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ToSafeSettings
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *question_layout;
    QLabel *ques_lb;
    QLabel *ques_change;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *ans_layout;
    QLabel *ans_lb;
    QLineEdit *ans_le;
    QPushButton *next_btn;

    void setupUi(QDialog *ToSafeSettings)
    {
        if (ToSafeSettings->objectName().isEmpty())
            ToSafeSettings->setObjectName(QStringLiteral("ToSafeSettings"));
        ToSafeSettings->resize(682, 429);
        horizontalLayoutWidget = new QWidget(ToSafeSettings);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(130, 160, 431, 41));
        question_layout = new QHBoxLayout(horizontalLayoutWidget);
        question_layout->setObjectName(QStringLiteral("question_layout"));
        question_layout->setContentsMargins(0, 0, 0, 0);
        ques_lb = new QLabel(horizontalLayoutWidget);
        ques_lb->setObjectName(QStringLiteral("ques_lb"));

        question_layout->addWidget(ques_lb);

        ques_change = new QLabel(horizontalLayoutWidget);
        ques_change->setObjectName(QStringLiteral("ques_change"));

        question_layout->addWidget(ques_change);

        question_layout->setStretch(0, 3);
        question_layout->setStretch(1, 7);
        horizontalLayoutWidget_2 = new QWidget(ToSafeSettings);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(130, 200, 431, 51));
        ans_layout = new QHBoxLayout(horizontalLayoutWidget_2);
        ans_layout->setObjectName(QStringLiteral("ans_layout"));
        ans_layout->setContentsMargins(0, 0, 0, 0);
        ans_lb = new QLabel(horizontalLayoutWidget_2);
        ans_lb->setObjectName(QStringLiteral("ans_lb"));

        ans_layout->addWidget(ans_lb);

        ans_le = new QLineEdit(horizontalLayoutWidget_2);
        ans_le->setObjectName(QStringLiteral("ans_le"));

        ans_layout->addWidget(ans_le);

        ans_layout->setStretch(0, 3);
        ans_layout->setStretch(1, 7);
        next_btn = new QPushButton(ToSafeSettings);
        next_btn->setObjectName(QStringLiteral("next_btn"));
        next_btn->setGeometry(QRect(280, 280, 93, 28));

        retranslateUi(ToSafeSettings);

        QMetaObject::connectSlotsByName(ToSafeSettings);
    } // setupUi

    void retranslateUi(QDialog *ToSafeSettings)
    {
        ToSafeSettings->setWindowTitle(QApplication::translate("ToSafeSettings", "Dialog", Q_NULLPTR));
        ques_lb->setText(QApplication::translate("ToSafeSettings", "\345\257\206\344\277\235\351\227\256\351\242\230", Q_NULLPTR));
        ques_change->setText(QApplication::translate("ToSafeSettings", "\350\277\231\351\207\214\346\224\276\344\273\216\346\225\260\346\215\256\345\272\223\351\207\214\346\213\277\345\207\272\346\235\245\347\232\204\345\257\206\344\277\235\351\227\256\351\242\230", Q_NULLPTR));
        ans_lb->setText(QApplication::translate("ToSafeSettings", "\345\257\206\344\277\235\347\255\224\346\241\210", Q_NULLPTR));
        next_btn->setText(QApplication::translate("ToSafeSettings", "\344\270\213\344\270\200\346\255\245", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ToSafeSettings: public Ui_ToSafeSettings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TOSAFESETTINGS_H
