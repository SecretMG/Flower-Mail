/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *total_layout;
    QHBoxLayout *user;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *name_lb;
    QLabel *password_lb;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *name_le;
    QLineEdit *pwd_le;
    QVBoxLayout *verticalLayout_3;
    QPushButton *register_btn;
    QPushButton *forgetpwd_btn;
    QHBoxLayout *settings;
    QLabel *empty_left_lb;
    QCheckBox *autologin_cb;
    QCheckBox *remempwd_btn;
    QLabel *empty_right;
    QHBoxLayout *buttons;
    QLabel *empty_left_lb_2;
    QPushButton *login_btn;
    QPushButton *cancel_btn;
    QLabel *empty_right_lb;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1149, 600);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        sizePolicy.setHeightForWidth(centralwidget->sizePolicy().hasHeightForWidth());
        centralwidget->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        total_layout = new QVBoxLayout();
        total_layout->setSpacing(4);
        total_layout->setObjectName(QStringLiteral("total_layout"));
        user = new QHBoxLayout();
        user->setSpacing(2);
        user->setObjectName(QStringLiteral("user"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout_2->addWidget(label);

        name_lb = new QLabel(centralwidget);
        name_lb->setObjectName(QStringLiteral("name_lb"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(name_lb->sizePolicy().hasHeightForWidth());
        name_lb->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(name_lb);

        password_lb = new QLabel(centralwidget);
        password_lb->setObjectName(QStringLiteral("password_lb"));
        password_lb->setEnabled(true);
        sizePolicy1.setHeightForWidth(password_lb->sizePolicy().hasHeightForWidth());
        password_lb->setSizePolicy(sizePolicy1);

        verticalLayout_2->addWidget(password_lb);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        verticalLayout_2->setStretch(1, 4);
        verticalLayout_2->setStretch(2, 7);

        user->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        name_le = new QLineEdit(centralwidget);
        name_le->setObjectName(QStringLiteral("name_le"));

        verticalLayout->addWidget(name_le);

        pwd_le = new QLineEdit(centralwidget);
        pwd_le->setObjectName(QStringLiteral("pwd_le"));
        pwd_le->setEchoMode(QLineEdit::Password);

        verticalLayout->addWidget(pwd_le);

        verticalLayout->setStretch(0, 4);
        verticalLayout->setStretch(1, 3);

        user->addLayout(verticalLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        register_btn = new QPushButton(centralwidget);
        register_btn->setObjectName(QStringLiteral("register_btn"));

        verticalLayout_3->addWidget(register_btn);

        forgetpwd_btn = new QPushButton(centralwidget);
        forgetpwd_btn->setObjectName(QStringLiteral("forgetpwd_btn"));

        verticalLayout_3->addWidget(forgetpwd_btn);


        user->addLayout(verticalLayout_3);

        user->setStretch(0, 2);
        user->setStretch(1, 7);
        user->setStretch(2, 3);

        total_layout->addLayout(user);

        settings = new QHBoxLayout();
        settings->setObjectName(QStringLiteral("settings"));
        empty_left_lb = new QLabel(centralwidget);
        empty_left_lb->setObjectName(QStringLiteral("empty_left_lb"));

        settings->addWidget(empty_left_lb);

        autologin_cb = new QCheckBox(centralwidget);
        autologin_cb->setObjectName(QStringLiteral("autologin_cb"));

        settings->addWidget(autologin_cb);

        remempwd_btn = new QCheckBox(centralwidget);
        remempwd_btn->setObjectName(QStringLiteral("remempwd_btn"));

        settings->addWidget(remempwd_btn);

        empty_right = new QLabel(centralwidget);
        empty_right->setObjectName(QStringLiteral("empty_right"));

        settings->addWidget(empty_right);

        settings->setStretch(0, 2);
        settings->setStretch(1, 3);
        settings->setStretch(2, 3);
        settings->setStretch(3, 2);

        total_layout->addLayout(settings);

        buttons = new QHBoxLayout();
        buttons->setSpacing(10);
        buttons->setObjectName(QStringLiteral("buttons"));
        buttons->setSizeConstraint(QLayout::SetDefaultConstraint);
        empty_left_lb_2 = new QLabel(centralwidget);
        empty_left_lb_2->setObjectName(QStringLiteral("empty_left_lb_2"));

        buttons->addWidget(empty_left_lb_2);

        login_btn = new QPushButton(centralwidget);
        login_btn->setObjectName(QStringLiteral("login_btn"));

        buttons->addWidget(login_btn);

        cancel_btn = new QPushButton(centralwidget);
        cancel_btn->setObjectName(QStringLiteral("cancel_btn"));

        buttons->addWidget(cancel_btn);

        empty_right_lb = new QLabel(centralwidget);
        empty_right_lb->setObjectName(QStringLiteral("empty_right_lb"));

        buttons->addWidget(empty_right_lb);

        buttons->setStretch(0, 3);
        buttons->setStretch(1, 5);
        buttons->setStretch(2, 5);
        buttons->setStretch(3, 4);

        total_layout->addLayout(buttons);

        total_layout->setStretch(0, 5);
        total_layout->setStretch(1, 1);
        total_layout->setStretch(2, 1);

        gridLayout->addLayout(total_layout, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 2, 1, 1, 1);

        gridLayout->setRowStretch(0, 2);
        gridLayout->setRowStretch(1, 3);
        gridLayout->setRowStretch(2, 2);
        gridLayout->setColumnStretch(0, 2);
        gridLayout->setColumnStretch(1, 3);
        gridLayout->setColumnStretch(2, 2);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1149, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);
        QObject::connect(cancel_btn, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        label->setText(QString());
        name_lb->setText(QApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        password_lb->setText(QApplication::translate("MainWindow", "\345\257\206\347\240\201", Q_NULLPTR));
        label_2->setText(QString());
        register_btn->setText(QApplication::translate("MainWindow", "\346\226\260\347\224\250\346\210\267\346\263\250\345\206\214", Q_NULLPTR));
        forgetpwd_btn->setText(QApplication::translate("MainWindow", "\345\277\230\350\256\260\345\257\206\347\240\201\357\274\237", Q_NULLPTR));
        empty_left_lb->setText(QString());
        autologin_cb->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\347\231\273\345\275\225", Q_NULLPTR));
        remempwd_btn->setText(QApplication::translate("MainWindow", "\350\256\260\344\275\217\345\257\206\347\240\201", Q_NULLPTR));
        empty_right->setText(QString());
        empty_left_lb_2->setText(QString());
        login_btn->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225", Q_NULLPTR));
        cancel_btn->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272", Q_NULLPTR));
        empty_right_lb->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
