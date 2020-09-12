/********************************************************************************
** Form generated from reading UI file 'checklogout.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHECKLOGOUT_H
#define UI_CHECKLOGOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Checklogout
{
public:
    QLabel *label;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *buttons;
    QPushButton *yes_btn;
    QPushButton *cancel_btn;

    void setupUi(QDialog *Checklogout)
    {
        if (Checklogout->objectName().isEmpty())
            Checklogout->setObjectName(QStringLiteral("Checklogout"));
        Checklogout->resize(368, 218);
        label = new QLabel(Checklogout);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 70, 191, 51));
        horizontalLayoutWidget = new QWidget(Checklogout);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(70, 120, 231, 41));
        buttons = new QHBoxLayout(horizontalLayoutWidget);
        buttons->setObjectName(QStringLiteral("buttons"));
        buttons->setContentsMargins(0, 0, 0, 0);
        yes_btn = new QPushButton(horizontalLayoutWidget);
        yes_btn->setObjectName(QStringLiteral("yes_btn"));

        buttons->addWidget(yes_btn);

        cancel_btn = new QPushButton(horizontalLayoutWidget);
        cancel_btn->setObjectName(QStringLiteral("cancel_btn"));

        buttons->addWidget(cancel_btn);


        retranslateUi(Checklogout);
        QObject::connect(yes_btn, SIGNAL(clicked()), Checklogout, SLOT(close()));
        QObject::connect(cancel_btn, SIGNAL(clicked()), Checklogout, SLOT(close()));

        QMetaObject::connectSlotsByName(Checklogout);
    } // setupUi

    void retranslateUi(QDialog *Checklogout)
    {
        Checklogout->setWindowTitle(QApplication::translate("Checklogout", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("Checklogout", "\347\241\256\350\256\244\351\200\200\345\207\272\347\231\273\345\275\225\345\220\227\357\274\237", Q_NULLPTR));
        yes_btn->setText(QApplication::translate("Checklogout", "\347\241\256\350\256\244", Q_NULLPTR));
        cancel_btn->setText(QApplication::translate("Checklogout", "\345\217\226\346\266\210", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Checklogout: public Ui_Checklogout {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHECKLOGOUT_H
