/********************************************************************************
** Form generated from reading UI file 'helpmainpage.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPMAINPAGE_H
#define UI_HELPMAINPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_HelpMainPage
{
public:
    QLabel *label;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;

    void setupUi(QWidget *HelpMainPage)
    {
        if (HelpMainPage->objectName().isEmpty())
            HelpMainPage->setObjectName(QStringLiteral("HelpMainPage"));
        HelpMainPage->resize(569, 317);
        label = new QLabel(HelpMainPage);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 10, 251, 41));
        verticalLayoutWidget = new QWidget(HelpMainPage);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 90, 347, 141));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(verticalLayoutWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout->addWidget(label_2);

        label_3 = new QLabel(verticalLayoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));

        verticalLayout->addWidget(label_3);

        label_4 = new QLabel(verticalLayoutWidget);
        label_4->setObjectName(QStringLiteral("label_4"));

        verticalLayout->addWidget(label_4);

        verticalLayoutWidget_2 = new QWidget(HelpMainPage);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(400, 90, 111, 141));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget_2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        verticalLayout_2->addWidget(pushButton_2);

        pushButton = new QPushButton(verticalLayoutWidget_2);
        pushButton->setObjectName(QStringLiteral("pushButton"));

        verticalLayout_2->addWidget(pushButton);

        pushButton_3 = new QPushButton(verticalLayoutWidget_2);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));

        verticalLayout_2->addWidget(pushButton_3);


        retranslateUi(HelpMainPage);

        QMetaObject::connectSlotsByName(HelpMainPage);
    } // setupUi

    void retranslateUi(QWidget *HelpMainPage)
    {
        HelpMainPage->setWindowTitle(QApplication::translate("HelpMainPage", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("HelpMainPage", "\346\254\242\350\277\216\346\235\245\345\210\260Flower-Mail\345\270\256\345\212\251\344\270\255\345\277\203\357\274\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("HelpMainPage", "\345\246\202\346\236\234\344\275\240\351\201\207\345\210\260\344\270\216\345\217\221\351\202\256\344\273\266\347\233\270\345\205\263\347\232\204\351\227\256\351\242\230\357\274\214\350\257\267\350\267\263\350\275\254\350\207\263\357\274\232", Q_NULLPTR));
        label_3->setText(QApplication::translate("HelpMainPage", "\345\205\263\344\272\216\345\256\211\345\205\250\357\274\210\345\246\202\345\257\206\344\277\235\351\227\256\351\242\230\357\274\214\350\256\276\347\275\256\345\257\206\347\240\201\347\255\211\357\274\211\357\274\214\350\257\267\350\267\263\350\275\254\350\207\263\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("HelpMainPage", "\345\205\263\344\272\216\347\225\214\351\235\242\347\276\216\350\247\202\357\274\210\345\246\202\344\270\273\351\242\230\357\274\214\345\255\227\344\275\223\347\255\211\357\274\211\357\274\214\350\257\267\350\267\263\350\275\254\350\207\263\357\274\232", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("HelpMainPage", "\346\224\266\345\217\221\351\202\256\344\273\266", Q_NULLPTR));
        pushButton->setText(QApplication::translate("HelpMainPage", "\345\205\263\344\272\216\345\256\211\345\205\250", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("HelpMainPage", "\347\225\214\351\235\242\350\256\276\347\275\256", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class HelpMainPage: public Ui_HelpMainPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPMAINPAGE_H
