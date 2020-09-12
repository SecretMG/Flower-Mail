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
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
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
    QLabel *size_lb;
    QSlider *size_slider;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *font_layout;
    QLabel *font_label;
    QComboBox *font_cb;
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

    void setupUi(QWidget *Settings)
    {
        if (Settings->objectName().isEmpty())
            Settings->setObjectName(QStringLiteral("Settings"));
        Settings->resize(1165, 600);
        verticalLayoutWidget = new QWidget(Settings);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(260, 100, 101, 121));
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
        horizontalLayoutWidget_2->setGeometry(QRect(340, 220, 341, 51));
        size_layout = new QHBoxLayout(horizontalLayoutWidget_2);
        size_layout->setObjectName(QStringLiteral("size_layout"));
        size_layout->setContentsMargins(0, 0, 0, 0);
        size_lb = new QLabel(horizontalLayoutWidget_2);
        size_lb->setObjectName(QStringLiteral("size_lb"));

        size_layout->addWidget(size_lb);

        size_slider = new QSlider(horizontalLayoutWidget_2);
        size_slider->setObjectName(QStringLiteral("size_slider"));
        size_slider->setOrientation(Qt::Horizontal);

        size_layout->addWidget(size_slider);

        size_layout->setStretch(0, 2);
        size_layout->setStretch(1, 10);
        horizontalLayoutWidget = new QWidget(Settings);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(340, 270, 341, 61));
        font_layout = new QHBoxLayout(horizontalLayoutWidget);
        font_layout->setObjectName(QStringLiteral("font_layout"));
        font_layout->setContentsMargins(0, 0, 0, 0);
        font_label = new QLabel(horizontalLayoutWidget);
        font_label->setObjectName(QStringLiteral("font_label"));

        font_layout->addWidget(font_label);

        font_cb = new QComboBox(horizontalLayoutWidget);
        font_cb->setObjectName(QStringLiteral("font_cb"));

        font_layout->addWidget(font_cb);

        font_layout->setStretch(0, 2);
        font_layout->setStretch(1, 10);
        horizontalLayoutWidget_3 = new QWidget(Settings);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(340, 400, 341, 61));
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
        horizontalLayoutWidget_4->setGeometry(QRect(340, 330, 341, 61));
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
        color_layout->setStretch(1, 4);
        color_layout->setStretch(2, 5);
        choosethemebtn = new QPushButton(Settings);
        choosethemebtn->setObjectName(QStringLiteral("choosethemebtn"));
        choosethemebtn->setGeometry(QRect(340, 140, 131, 28));

        retranslateUi(Settings);
        QObject::connect(save_btn, SIGNAL(clicked()), Settings, SLOT(toPeosonInfo()));
        QObject::connect(cancel_btn, SIGNAL(clicked()), Settings, SLOT(close()));

        QMetaObject::connectSlotsByName(Settings);
    } // setupUi

    void retranslateUi(QWidget *Settings)
    {
        Settings->setWindowTitle(QApplication::translate("Settings", "Form", Q_NULLPTR));
        label->setText(QApplication::translate("Settings", "\344\270\273\351\242\230", Q_NULLPTR));
        textsettings_lb->setText(QApplication::translate("Settings", "\346\226\207\346\234\254\350\256\276\347\275\256", Q_NULLPTR));
        size_lb->setText(QApplication::translate("Settings", "\345\244\247\345\260\217", Q_NULLPTR));
        font_label->setText(QApplication::translate("Settings", "\345\255\227\344\275\223", Q_NULLPTR));
        save_btn->setText(QApplication::translate("Settings", "\344\277\235\345\255\230\350\256\276\347\275\256", Q_NULLPTR));
        cancel_btn->setText(QApplication::translate("Settings", "\345\217\226\346\266\210\350\256\276\347\275\256", Q_NULLPTR));
        color_lb->setText(QApplication::translate("Settings", "\351\242\234\350\211\262", Q_NULLPTR));
        choosecol_btn->setText(QApplication::translate("Settings", "\351\200\211\346\213\251\351\242\234\350\211\262", Q_NULLPTR));
        empty->setText(QString());
        choosethemebtn->setText(QApplication::translate("Settings", "\351\200\211\346\213\251\351\242\204\350\256\276\344\270\273\351\242\230", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Settings: public Ui_Settings {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGS_H
