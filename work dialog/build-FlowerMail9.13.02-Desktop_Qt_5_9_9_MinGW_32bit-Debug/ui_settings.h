/********************************************************************************
** Form generated from reading UI file 'settings.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGS_H
#define UI_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Settings
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QLabel *textsettings_lb;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *size_layout;
    QLabel *label_2;
    QPushButton *buttonCol_btn;
    QLabel *label_3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *font_layout;
    QLabel *font_label;
    QPushButton *fontType_btn;
    QLabel *empty_2;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *buttons_layout;
    QPushButton *save_btn;
    QPushButton *cancel_btn;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *color_layout;
    QLabel *color_lb;
    QPushButton *choosecol_btn;
    QLabel *empty;
    QPushButton *choosethemebtn;
    QWidget *horizontalLayoutWidget_5;
    QHBoxLayout *horizontalLayout;
    QLabel *back_lb;
    QPushButton *background_btn;
    QLabel *empty_3;

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(800, 661);
        Settings->setMinimumSize(QSize(800, 661));
        Settings->setMaximumSize(QSize(800, 661));
        verticalLayoutWidget = new QWidget(Settings);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(150, 110, 101, 121));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        textsettings_lb = new QLabel(verticalLayoutWidget);
        textsettings_lb->setObjectName(QStringLiteral("textsettings_lb"));

        verticalLayout->addWidget(textsettings_lb);

        horizontalLayoutWidget_2 = new QWidget(Settings);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(240, 320, 341, 51));
        size_layout = new QHBoxLayout(horizontalLayoutWidget_2);
        size_layout->setSpacing(30);
        size_layout->setObjectName(QStringLiteral("size_layout"));
        size_layout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        size_layout->addWidget(label_2);

        buttonCol_btn = new QPushButton(horizontalLayoutWidget_2);
        buttonCol_btn->setObjectName(QStringLiteral("buttonCol_btn"));

        size_layout->addWidget(buttonCol_btn);

        label_3 = new QLabel(horizontalLayoutWidget_2);
        label_3->setObjectName(QStringLiteral("label_3"));

        size_layout->addWidget(label_3);

        size_layout->setStretch(0, 1);
        size_layout->setStretch(1, 2);
        size_layout->setStretch(2, 2);
        horizontalLayoutWidget = new QWidget(Settings);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(240, 370, 341, 61));
        font_layout = new QHBoxLayout(horizontalLayoutWidget);
        font_layout->setSpacing(30);
        font_layout->setObjectName(QStringLiteral("font_layout"));
        font_layout->setContentsMargins(0, 0, 0, 0);
        font_label = new QLabel(horizontalLayoutWidget);
        font_label->setObjectName(QStringLiteral("font_label"));

        font_layout->addWidget(font_label);

        fontType_btn = new QPushButton(horizontalLayoutWidget);
        fontType_btn->setObjectName(QStringLiteral("fontType_btn"));

        font_layout->addWidget(fontType_btn);

        empty_2 = new QLabel(horizontalLayoutWidget);
        empty_2->setObjectName(QStringLiteral("empty_2"));

        font_layout->addWidget(empty_2);

        font_layout->setStretch(0, 1);
        font_layout->setStretch(1, 2);
        font_layout->setStretch(2, 2);
        horizontalLayoutWidget_3 = new QWidget(Settings);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(240, 500, 341, 61));
        buttons_layout = new QHBoxLayout(horizontalLayoutWidget_3);
        buttons_layout->setSpacing(25);
        buttons_layout->setObjectName(QStringLiteral("buttons_layout"));
        buttons_layout->setContentsMargins(0, 0, 0, 0);
        save_btn = new QPushButton(horizontalLayoutWidget_3);
        save_btn->setObjectName(QStringLiteral("save_btn"));

        buttons_layout->addWidget(save_btn);

        cancel_btn = new QPushButton(horizontalLayoutWidget_3);
        cancel_btn->setObjectName(QStringLiteral("cancel_btn"));

        buttons_layout->addWidget(cancel_btn);

        horizontalLayoutWidget_4 = new QWidget(Settings);
        horizontalLayoutWidget_4->setObjectName(QStringLiteral("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(240, 430, 341, 61));
        color_layout = new QHBoxLayout(horizontalLayoutWidget_4);
        color_layout->setSpacing(30);
        color_layout->setObjectName(QStringLiteral("color_layout"));
        color_layout->setContentsMargins(0, 0, 0, 0);
        color_lb = new QLabel(horizontalLayoutWidget_4);
        color_lb->setObjectName(QStringLiteral("color_lb"));

        color_layout->addWidget(color_lb);

        choosecol_btn = new QPushButton(horizontalLayoutWidget_4);
        choosecol_btn->setObjectName(QStringLiteral("choosecol_btn"));

        color_layout->addWidget(choosecol_btn);

        empty = new QLabel(horizontalLayoutWidget_4);
        empty->setObjectName(QStringLiteral("empty"));

        color_layout->addWidget(empty);

        color_layout->setStretch(0, 1);
        color_layout->setStretch(1, 2);
        color_layout->setStretch(2, 2);
        choosethemebtn = new QPushButton(Settings);
        choosethemebtn->setObjectName(QStringLiteral("choosethemebtn"));
        choosethemebtn->setGeometry(QRect(230, 150, 131, 28));
        horizontalLayoutWidget_5 = new QWidget(Settings);
        horizontalLayoutWidget_5->setObjectName(QStringLiteral("horizontalLayoutWidget_5"));
        horizontalLayoutWidget_5->setGeometry(QRect(240, 260, 341, 61));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget_5);
        horizontalLayout->setSpacing(30);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        back_lb = new QLabel(horizontalLayoutWidget_5);
        back_lb->setObjectName(QStringLiteral("back_lb"));

        horizontalLayout->addWidget(back_lb);

        background_btn = new QPushButton(horizontalLayoutWidget_5);
        background_btn->setObjectName(QStringLiteral("background_btn"));

        horizontalLayout->addWidget(background_btn);

        empty_3 = new QLabel(horizontalLayoutWidget_5);
        empty_3->setObjectName(QStringLiteral("empty_3"));

        horizontalLayout->addWidget(empty_3);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 2);
        horizontalLayout->setStretch(2, 2);

        retranslateUi(Settings);

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Settings", "\344\270\273\351\242\230", Q_NULLPTR));
        textsettings_lb->setText(QApplication::translate("Settings", "\350\207\252\345\256\232\344\271\211\344\270\273\351\242\230", Q_NULLPTR));
        label_2->setText(QApplication::translate("Settings", "\346\214\211\351\222\256\351\242\234\350\211\262", Q_NULLPTR));
        buttonCol_btn->setText(QApplication::translate("Settings", "\351\200\211\346\213\251\351\242\234\350\211\262", Q_NULLPTR));
        label_3->setText(QString());
        font_label->setText(QApplication::translate("Settings", "\345\255\227\344\275\223\346\240\267\345\274\217", Q_NULLPTR));
        fontType_btn->setText(QApplication::translate("Settings", "\351\200\211\346\213\251\345\255\227\344\275\223", Q_NULLPTR));
        empty_2->setText(QString());
        save_btn->setText(QApplication::translate("Settings", "\344\277\235\345\255\230\350\256\276\347\275\256", Q_NULLPTR));
        cancel_btn->setText(QApplication::translate("Settings", "\345\217\226\346\266\210\350\256\276\347\275\256", Q_NULLPTR));
        color_lb->setText(QApplication::translate("Settings", "\345\255\227\344\275\223\351\242\234\350\211\262", Q_NULLPTR));
        choosecol_btn->setText(QApplication::translate("Settings", "\351\200\211\346\213\251\351\242\234\350\211\262", Q_NULLPTR));
        empty->setText(QString());
        choosethemebtn->setText(QApplication::translate("Settings", "\351\200\211\346\213\251\351\242\204\350\256\276\344\270\273\351\242\230", Q_NULLPTR));
        back_lb->setText(QApplication::translate("Settings", "\350\203\214\346\231\257\351\242\234\350\211\262", Q_NULLPTR));
        background_btn->setText(QApplication::translate("Settings", "\351\200\211\346\213\251\351\242\234\350\211\262", Q_NULLPTR));
        empty_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
