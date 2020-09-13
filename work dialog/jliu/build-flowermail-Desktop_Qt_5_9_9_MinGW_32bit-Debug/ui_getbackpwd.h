/********************************************************************************
** Form generated from reading UI file 'getbackpwd.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GETBACKPWD_H
#define UI_GETBACKPWD_H

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

class Ui_Getbackpwd
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *mail_layout;
    QLabel *mail_lb;
    QLineEdit *mail_le;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *buttons_layout;
    QLabel *empty_btn_lb;
    QPushButton *yes_btn;
    QPushButton *cancel_btn;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEdit;

    void setupUi(QWidget *Getbackpwd)
    {
        if (Getbackpwd->objectName().isEmpty())
            Getbackpwd->setObjectName(QStringLiteral("Getbackpwd"));
        Getbackpwd->resize(979, 615);
        horizontalLayoutWidget = new QWidget(Getbackpwd);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(240, 250, 476, 31));
        mail_layout = new QHBoxLayout(horizontalLayoutWidget);
        mail_layout->setObjectName(QStringLiteral("mail_layout"));
        mail_layout->setContentsMargins(0, 0, 0, 0);
        mail_lb = new QLabel(horizontalLayoutWidget);
        mail_lb->setObjectName(QStringLiteral("mail_lb"));

        mail_layout->addWidget(mail_lb);

        mail_le = new QLineEdit(horizontalLayoutWidget);
        mail_le->setObjectName(QStringLiteral("mail_le"));

        mail_layout->addWidget(mail_le);

        mail_layout->setStretch(0, 3);
        mail_layout->setStretch(1, 7);
        horizontalLayoutWidget_5 = new QWidget(Getbackpwd);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(240, 300, 476, 32));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        buttons_layout = new QHBoxLayout();
        buttons_layout->setObjectName(QStringLiteral("buttons_layout"));
        empty_btn_lb = new QLabel(horizontalLayoutWidget_5);
        empty_btn_lb->setObjectName(QStringLiteral("empty_btn_lb"));

        buttons_layout->addWidget(empty_btn_lb);

        yes_btn = new QPushButton(horizontalLayoutWidget_5);
        yes_btn->setObjectName(QStringLiteral("yes_btn"));

        buttons_layout->addWidget(yes_btn);

        cancel_btn = new QPushButton(horizontalLayoutWidget_5);
        cancel_btn->setObjectName(QStringLiteral("cancel_btn"));

        buttons_layout->addWidget(cancel_btn);


        horizontalLayout->addLayout(buttons_layout);

        horizontalLayout->setStretch(0, 7);
        horizontalLayoutWidget_2 = new QWidget(Getbackpwd);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(240, 210, 471, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(horizontalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        lineEdit = new QLineEdit(horizontalLayoutWidget_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        horizontalLayout_2->addWidget(lineEdit);

        horizontalLayout_2->setStretch(0, 3);
        horizontalLayout_2->setStretch(1, 7);

        retranslateUi(Getbackpwd);
        QObject::connect(cancel_btn, SIGNAL(clicked()), Getbackpwd, SLOT(close()));

        QMetaObject::connectSlotsByName(Getbackpwd);
    } // setupUi

    void retranslateUi(QWidget *Getbackpwd)
    {
        Getbackpwd->setWindowTitle(QApplication::translate("Getbackpwd", "Form", Q_NULLPTR));
        mail_lb->setText(QApplication::translate("Getbackpwd", "\345\257\206\344\277\235\351\227\256\351\242\230", Q_NULLPTR));
        empty_btn_lb->setText(QString());
        yes_btn->setText(QApplication::translate("Getbackpwd", "\344\270\213\344\270\200\346\255\245", Q_NULLPTR));
        cancel_btn->setText(QApplication::translate("Getbackpwd", "\345\217\226\346\266\210", Q_NULLPTR));
        label->setText(QApplication::translate("Getbackpwd", "\345\257\206\344\277\235\347\255\224\346\241\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Getbackpwd: public Ui_Getbackpwd {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GETBACKPWD_H
