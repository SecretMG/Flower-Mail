/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *main_btn;
    QPushButton *mail_btn;
    QPushButton *safe_btn;
    QPushButton *design_btn;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *page_2;

    void setupUi(QWidget *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QStringLiteral("Help"));
        Help->resize(810, 515);
        verticalLayoutWidget = new QWidget(Help);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 20, 160, 211));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        main_btn = new QPushButton(verticalLayoutWidget);
        main_btn->setObjectName(QStringLiteral("main_btn"));

        verticalLayout->addWidget(main_btn);

        mail_btn = new QPushButton(verticalLayoutWidget);
        mail_btn->setObjectName(QStringLiteral("mail_btn"));

        verticalLayout->addWidget(mail_btn);

        safe_btn = new QPushButton(verticalLayoutWidget);
        safe_btn->setObjectName(QStringLiteral("safe_btn"));

        verticalLayout->addWidget(safe_btn);

        design_btn = new QPushButton(verticalLayoutWidget);
        design_btn->setObjectName(QStringLiteral("design_btn"));

        verticalLayout->addWidget(design_btn);

        stackedWidget = new QStackedWidget(Help);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(230, 20, 551, 441));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        stackedWidget->addWidget(page_2);

        retranslateUi(Help);

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QWidget *Help)
    {
        Help->setWindowTitle(QApplication::translate("Help", "Form", Q_NULLPTR));
        main_btn->setText(QApplication::translate("Help", "\344\270\273\351\241\265", Q_NULLPTR));
        mail_btn->setText(QApplication::translate("Help", "\345\205\263\344\272\216\346\224\266\345\217\221\351\202\256\344\273\266", Q_NULLPTR));
        safe_btn->setText(QApplication::translate("Help", "\345\205\263\344\272\216\345\256\211\345\205\250", Q_NULLPTR));
        design_btn->setText(QApplication::translate("Help", "\345\205\263\344\272\216\347\225\214\351\235\242", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
