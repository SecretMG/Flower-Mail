/********************************************************************************
** Form generated from reading UI file 'resetpassword.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RESETPASSWORD_H
#define UI_RESETPASSWORD_H

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

class Ui_Resetpassword
{
public:
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *newpwd_layout;
    QLabel *newpwb_lb;
    QLineEdit *newpwd_le;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *checkpwd_layout;
    QLabel *checkpwd_lb;
    QLineEdit *checkpwb_le;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *buttons_layout;
    QPushButton *submit_btn;
    QPushButton *cancel_btn;

    void setupUi(QWidget *Resetpassword)
    {
        if (Resetpassword->objectName().isEmpty())
            Resetpassword->setObjectName(QStringLiteral("Resetpassword"));
        Resetpassword->resize(974, 605);
        horizontalLayoutWidget = new QWidget(Resetpassword);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(280, 170, 331, 61));
        newpwd_layout = new QHBoxLayout(horizontalLayoutWidget);
        newpwd_layout->setObjectName(QStringLiteral("newpwd_layout"));
        newpwd_layout->setContentsMargins(0, 0, 0, 0);
        newpwb_lb = new QLabel(horizontalLayoutWidget);
        newpwb_lb->setObjectName(QStringLiteral("newpwb_lb"));

        newpwd_layout->addWidget(newpwb_lb);

        newpwd_le = new QLineEdit(horizontalLayoutWidget);
        newpwd_le->setObjectName(QStringLiteral("newpwd_le"));

        newpwd_layout->addWidget(newpwd_le);

        newpwd_layout->setStretch(0, 2);
        newpwd_layout->setStretch(1, 8);
        horizontalLayoutWidget_2 = new QWidget(Resetpassword);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(280, 240, 331, 61));
        checkpwd_layout = new QHBoxLayout(horizontalLayoutWidget_2);
        checkpwd_layout->setObjectName(QStringLiteral("checkpwd_layout"));
        checkpwd_layout->setContentsMargins(0, 0, 0, 0);
        checkpwd_lb = new QLabel(horizontalLayoutWidget_2);
        checkpwd_lb->setObjectName(QStringLiteral("checkpwd_lb"));

        checkpwd_layout->addWidget(checkpwd_lb);

        checkpwb_le = new QLineEdit(horizontalLayoutWidget_2);
        checkpwb_le->setObjectName(QStringLiteral("checkpwb_le"));

        checkpwd_layout->addWidget(checkpwb_le);

        checkpwd_layout->setStretch(0, 2);
        checkpwd_layout->setStretch(1, 8);
        horizontalLayoutWidget_3 = new QWidget(Resetpassword);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(280, 309, 331, 61));
        buttons_layout = new QHBoxLayout(horizontalLayoutWidget_3);
        buttons_layout->setSpacing(25);
        buttons_layout->setObjectName(QStringLiteral("buttons_layout"));
        buttons_layout->setContentsMargins(0, 0, 0, 0);
        submit_btn = new QPushButton(horizontalLayoutWidget_3);
        submit_btn->setObjectName(QStringLiteral("submit_btn"));

        buttons_layout->addWidget(submit_btn);

        cancel_btn = new QPushButton(horizontalLayoutWidget_3);
        cancel_btn->setObjectName(QStringLiteral("cancel_btn"));

        buttons_layout->addWidget(cancel_btn);

        buttons_layout->setStretch(0, 5);
        buttons_layout->setStretch(1, 5);

        retranslateUi(Resetpassword);
        QObject::connect(cancel_btn, SIGNAL(clicked()), Resetpassword, SLOT(close()));

        QMetaObject::connectSlotsByName(Resetpassword);
    } // setupUi

    void retranslateUi(QWidget *Resetpassword)
    {
        Resetpassword->setWindowTitle(QApplication::translate("Resetpassword", "Form", Q_NULLPTR));
        newpwb_lb->setText(QApplication::translate("Resetpassword", "\346\226\260\345\257\206\347\240\201", Q_NULLPTR));
        checkpwd_lb->setText(QApplication::translate("Resetpassword", "\347\241\256\350\256\244\345\257\206\347\240\201", Q_NULLPTR));
        submit_btn->setText(QApplication::translate("Resetpassword", "\347\241\256\350\256\244", Q_NULLPTR));
        cancel_btn->setText(QApplication::translate("Resetpassword", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Resetpassword: public Ui_Resetpassword {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RESETPASSWORD_H
