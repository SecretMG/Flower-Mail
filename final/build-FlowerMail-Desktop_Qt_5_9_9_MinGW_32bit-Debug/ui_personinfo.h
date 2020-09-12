/********************************************************************************
** Form generated from reading UI file 'personinfo.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSONINFO_H
#define UI_PERSONINFO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Personinfo
{
public:
    QGraphicsView *graphicsView;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *username_lb;
    QLabel *usernamec_lb;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *mail_layout;
    QLabel *mail_lb;
    QLabel *mailaddress_lb;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *buttons_layout;
    QPushButton *safe_btn;
    QPushButton *logout_btn;
    QPushButton *changeinfo_btn;
    QPushButton *changephoto_btn;

    void setupUi(QWidget *Personinfo)
    {
        if (Personinfo->objectName().isEmpty())
            Personinfo->setObjectName(QStringLiteral("Personinfo"));
        Personinfo->resize(1149, 637);
        graphicsView = new QGraphicsView(Personinfo);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(100, 160, 291, 191));
        horizontalLayoutWidget = new QWidget(Personinfo);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(430, 170, 431, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        username_lb = new QLabel(horizontalLayoutWidget);
        username_lb->setObjectName(QStringLiteral("username_lb"));

        horizontalLayout->addWidget(username_lb);

        usernamec_lb = new QLabel(horizontalLayoutWidget);
        usernamec_lb->setObjectName(QStringLiteral("usernamec_lb"));

        horizontalLayout->addWidget(usernamec_lb);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 7);
        horizontalLayoutWidget_2 = new QWidget(Personinfo);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(430, 230, 431, 41));
        mail_layout = new QHBoxLayout(horizontalLayoutWidget_2);
        mail_layout->setObjectName(QStringLiteral("mail_layout"));
        mail_layout->setContentsMargins(0, 0, 0, 0);
        mail_lb = new QLabel(horizontalLayoutWidget_2);
        mail_lb->setObjectName(QStringLiteral("mail_lb"));

        mail_layout->addWidget(mail_lb);

        mailaddress_lb = new QLabel(horizontalLayoutWidget_2);
        mailaddress_lb->setObjectName(QStringLiteral("mailaddress_lb"));

        mail_layout->addWidget(mailaddress_lb);

        mail_layout->setStretch(0, 3);
        mail_layout->setStretch(1, 7);
        horizontalLayoutWidget_3 = new QWidget(Personinfo);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(430, 290, 431, 51));
        buttons_layout = new QHBoxLayout(horizontalLayoutWidget_3);
        buttons_layout->setSpacing(90);
        buttons_layout->setObjectName(QStringLiteral("buttons_layout"));
        buttons_layout->setContentsMargins(0, 0, 0, 0);
        safe_btn = new QPushButton(horizontalLayoutWidget_3);
        safe_btn->setObjectName(QStringLiteral("safe_btn"));

        buttons_layout->addWidget(safe_btn);

        logout_btn = new QPushButton(horizontalLayoutWidget_3);
        logout_btn->setObjectName(QStringLiteral("logout_btn"));

        buttons_layout->addWidget(logout_btn);

        changeinfo_btn = new QPushButton(Personinfo);
        changeinfo_btn->setObjectName(QStringLiteral("changeinfo_btn"));
        changeinfo_btn->setGeometry(QRect(870, 180, 121, 31));
        changephoto_btn = new QPushButton(Personinfo);
        changephoto_btn->setObjectName(QStringLiteral("changephoto_btn"));
        changephoto_btn->setGeometry(QRect(100, 360, 291, 28));

        retranslateUi(Personinfo);

        QMetaObject::connectSlotsByName(Personinfo);
    } // setupUi

    void retranslateUi(QWidget *Personinfo)
    {
        Personinfo->setWindowTitle(QApplication::translate("Personinfo", "Form", Q_NULLPTR));
        username_lb->setText(QApplication::translate("Personinfo", "\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        usernamec_lb->setText(QApplication::translate("Personinfo", "\350\277\231\351\207\214\346\230\257\344\273\216\346\225\260\346\215\256\345\272\223\351\207\214\346\213\277\345\207\272\346\235\245\347\232\204\346\225\260\346\215\256", Q_NULLPTR));
        mail_lb->setText(QApplication::translate("Personinfo", "\351\202\256\347\256\261\345\234\260\345\235\200", Q_NULLPTR));
        mailaddress_lb->setText(QApplication::translate("Personinfo", "\350\277\231\351\207\214\346\230\257\347\224\250\346\210\267\350\207\252\345\267\261\346\220\236\345\276\227\351\202\256\347\256\261\345\234\260\345\235\200,\344\270\215\345\217\257\344\277\256\346\224\271", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        safe_btn->setToolTip(QApplication::translate("Personinfo", "<html><head/><body><p>\344\277\256\346\224\271\345\257\206\344\277\235\351\227\256\351\242\230</p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        safe_btn->setText(QApplication::translate("Personinfo", "\345\256\211\345\205\250\350\256\276\347\275\256", Q_NULLPTR));
        logout_btn->setText(QApplication::translate("Personinfo", "\351\200\200\345\207\272\347\231\273\345\275\225", Q_NULLPTR));
        changeinfo_btn->setText(QApplication::translate("Personinfo", "\344\277\256\346\224\271\347\224\250\346\210\267\345\220\215", Q_NULLPTR));
        changephoto_btn->setText(QApplication::translate("Personinfo", "\344\277\256\346\224\271\345\244\264\345\203\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Personinfo: public Ui_Personinfo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSONINFO_H
