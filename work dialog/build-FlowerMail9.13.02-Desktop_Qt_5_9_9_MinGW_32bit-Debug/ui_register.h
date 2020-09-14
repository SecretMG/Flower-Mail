/********************************************************************************
** Form generated from reading UI file 'register.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTER_H
#define UI_REGISTER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Register
{
public:
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *usename_layout;
    QLabel *username_lb;
    QLineEdit *username_le;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *pwd_layout;
    QLabel *pwd_lb;
    QLineEdit *pwd_le;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *checkpwd_layout;
    QLabel *checkpwd_lb;
    QLineEdit *checkpwd_le;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *buttons_layout;
    QPushButton *submit_btn;
    QPushButton *cancel_btn;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *ques_lb;
    QLineEdit *ques_le;
    QWidget *horizontalLayoutWidget_6;
    QHBoxLayout *horizontalLayout_2;
    QLabel *ans_lb;
    QLineEdit *ans_le;

    void setupUi(QWidget *Register)
    {
        if (Register->objectName().isEmpty())
            Register->setObjectName(QStringLiteral("Register"));
        Register->resize(1000, 661);
        Register->setMinimumSize(QSize(1000, 661));
        Register->setMaximumSize(QSize(1000, 661));
        horizontalLayoutWidget_2 = new QWidget(Register);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(230, 150, 491, 51));
        usename_layout = new QHBoxLayout(horizontalLayoutWidget_2);
        usename_layout->setObjectName(QStringLiteral("usename_layout"));
        usename_layout->setContentsMargins(0, 0, 0, 0);
        username_lb = new QLabel(horizontalLayoutWidget_2);
        username_lb->setObjectName(QStringLiteral("username_lb"));

        usename_layout->addWidget(username_lb);

        username_le = new QLineEdit(horizontalLayoutWidget_2);
        username_le->setObjectName(QStringLiteral("username_le"));

        usename_layout->addWidget(username_le);

        usename_layout->setStretch(0, 3);
        usename_layout->setStretch(1, 9);
        horizontalLayoutWidget_3 = new QWidget(Register);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(230, 200, 491, 51));
        pwd_layout = new QHBoxLayout(horizontalLayoutWidget_3);
        pwd_layout->setObjectName(QStringLiteral("pwd_layout"));
        pwd_layout->setContentsMargins(0, 0, 0, 0);
        pwd_lb = new QLabel(horizontalLayoutWidget_3);
        pwd_lb->setObjectName(QStringLiteral("pwd_lb"));

        pwd_layout->addWidget(pwd_lb);

        pwd_le = new QLineEdit(horizontalLayoutWidget_3);
        pwd_le->setObjectName(QStringLiteral("pwd_le"));
        pwd_le->setEchoMode(QLineEdit::Password);

        pwd_layout->addWidget(pwd_le);

        pwd_layout->setStretch(0, 3);
        pwd_layout->setStretch(1, 9);
        horizontalLayoutWidget_4 = new QWidget(Register);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(230, 250, 491, 51));
        checkpwd_layout = new QHBoxLayout(horizontalLayoutWidget_4);
        checkpwd_layout->setObjectName(QStringLiteral("checkpwd_layout"));
        checkpwd_layout->setContentsMargins(0, 0, 0, 0);
        checkpwd_lb = new QLabel(horizontalLayoutWidget_4);
        checkpwd_lb->setObjectName(QStringLiteral("checkpwd_lb"));

        checkpwd_layout->addWidget(checkpwd_lb);

        checkpwd_le = new QLineEdit(horizontalLayoutWidget_4);
        checkpwd_le->setObjectName(QStringLiteral("checkpwd_le"));
        checkpwd_le->setEchoMode(QLineEdit::Password);

        checkpwd_layout->addWidget(checkpwd_le);

        checkpwd_layout->setStretch(0, 3);
        checkpwd_layout->setStretch(1, 9);
        horizontalLayoutWidget_5 = new QWidget(Register);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(450, 410, 271, 51));
        buttons_layout = new QHBoxLayout(horizontalLayoutWidget_5);
        buttons_layout->setObjectName(QStringLiteral("buttons_layout"));
        buttons_layout->setContentsMargins(0, 0, 0, 0);
        submit_btn = new QPushButton(horizontalLayoutWidget_5);
        submit_btn->setObjectName(QStringLiteral("submit_btn"));

        buttons_layout->addWidget(submit_btn);

        cancel_btn = new QPushButton(horizontalLayoutWidget_5);
        cancel_btn->setObjectName(QStringLiteral("cancel_btn"));

        buttons_layout->addWidget(cancel_btn);

        horizontalLayoutWidget = new QWidget(Register);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(230, 300, 491, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ques_lb = new QLabel(horizontalLayoutWidget);
        ques_lb->setObjectName(QStringLiteral("ques_lb"));

        horizontalLayout->addWidget(ques_lb);

        ques_le = new QLineEdit(horizontalLayoutWidget);
        ques_le->setObjectName(QStringLiteral("ques_le"));

        horizontalLayout->addWidget(ques_le);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 9);
        horizontalLayoutWidget_6 = new QWidget(Register);
        horizontalLayoutWidget_6->setObjectName(QStringLiteral("horizontalLayoutWidget_6"));
        horizontalLayoutWidget_6->setGeometry(QRect(230, 350, 491, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        ans_lb = new QLabel(horizontalLayoutWidget_6);
        ans_lb->setObjectName(QStringLiteral("ans_lb"));

        horizontalLayout_2->addWidget(ans_lb);

        ans_le = new QLineEdit(horizontalLayoutWidget_6);
        ans_le->setObjectName(QStringLiteral("ans_le"));

        horizontalLayout_2->addWidget(ans_le);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 9);

        retranslateUi(Register);
        QObject::connect(cancel_btn, SIGNAL(clicked()), Register, SLOT(close()));

        QMetaObject::connectSlotsByName(Register);
    } // setupUi

    void retranslateUi(QWidget *Register)
    {
        Register->setWindowTitle(QApplication::translate("Register", "Form", Q_NULLPTR));
        username_lb->setText(QApplication::translate("Register", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        username_le->setToolTip(QApplication::translate("Register", "<html><head/><body><p><br/></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        pwd_lb->setText(QApplication::translate("Register", "\345\257\206\347\240\201", Q_NULLPTR));
        checkpwd_lb->setText(QApplication::translate("Register", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        submit_btn->setText(QApplication::translate("Register", "\347\241\256\350\256\244", Q_NULLPTR));
        cancel_btn->setText(QApplication::translate("Register", "\345\217\226\346\266\210", Q_NULLPTR));
        ques_lb->setText(QApplication::translate("Register", "\345\257\206\344\277\235\351\227\256\351\242\230", Q_NULLPTR));
        ans_lb->setText(QApplication::translate("Register", "\345\257\206\344\277\235\347\255\224\346\241\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Register: public Ui_Register {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTER_H
