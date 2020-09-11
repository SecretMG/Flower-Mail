/********************************************************************************
** Form generated from reading UI file 'changephoto.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGEPHOTO_H
#define UI_CHANGEPHOTO_H

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

class Ui_Changephoto
{
public:
    QGraphicsView *biggraph_gv;
    QGraphicsView *smallgraph_gv;
    QPushButton *submit_btn;
    QLabel *big_lb;
    QLabel *small_gv;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *buttons_layout;
    QPushButton *yes_btn;
    QPushButton *cancel_btn;

    void setupUi(QWidget *Changephoto)
    {
        if (Changephoto->objectName().isEmpty())
            Changephoto->setObjectName(QStringLiteral("Changephoto"));
        Changephoto->resize(974, 607);
        biggraph_gv = new QGraphicsView(Changephoto);
        biggraph_gv->setObjectName(QStringLiteral("biggraph_gv"));
        biggraph_gv->setGeometry(QRect(100, 90, 431, 341));
        smallgraph_gv = new QGraphicsView(Changephoto);
        smallgraph_gv->setObjectName(QStringLiteral("smallgraph_gv"));
        smallgraph_gv->setGeometry(QRect(600, 90, 256, 192));
        submit_btn = new QPushButton(Changephoto);
        submit_btn->setObjectName(QStringLiteral("submit_btn"));
        submit_btn->setGeometry(QRect(600, 330, 261, 31));
        big_lb = new QLabel(Changephoto);
        big_lb->setObjectName(QStringLiteral("big_lb"));
        big_lb->setGeometry(QRect(100, 450, 101, 16));
        small_gv = new QLabel(Changephoto);
        small_gv->setObjectName(QStringLiteral("small_gv"));
        small_gv->setGeometry(QRect(600, 300, 72, 15));
        horizontalLayoutWidget = new QWidget(Changephoto);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(600, 370, 261, 51));
        buttons_layout = new QHBoxLayout(horizontalLayoutWidget);
        buttons_layout->setObjectName(QStringLiteral("buttons_layout"));
        buttons_layout->setContentsMargins(0, 0, 0, 0);
        yes_btn = new QPushButton(horizontalLayoutWidget);
        yes_btn->setObjectName(QStringLiteral("yes_btn"));

        buttons_layout->addWidget(yes_btn);

        cancel_btn = new QPushButton(horizontalLayoutWidget);
        cancel_btn->setObjectName(QStringLiteral("cancel_btn"));

        buttons_layout->addWidget(cancel_btn);


        retranslateUi(Changephoto);

        QMetaObject::connectSlotsByName(Changephoto);
    } // setupUi

    void retranslateUi(QWidget *Changephoto)
    {
        Changephoto->setWindowTitle(QApplication::translate("Changephoto", "Form", Q_NULLPTR));
        submit_btn->setText(QApplication::translate("Changephoto", "\344\270\212\344\274\240\351\231\204\344\273\266", Q_NULLPTR));
        big_lb->setText(QApplication::translate("Changephoto", "\345\244\247\345\260\272\345\257\270\351\242\204\350\247\210", Q_NULLPTR));
        small_gv->setText(QApplication::translate("Changephoto", "\345\260\217\345\260\272\345\257\270\351\242\204\350\247\210", Q_NULLPTR));
        yes_btn->setText(QApplication::translate("Changephoto", "\347\241\256\350\256\244", Q_NULLPTR));
        cancel_btn->setText(QApplication::translate("Changephoto", "\345\217\226\346\266\210\346\233\264\346\224\271", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Changephoto: public Ui_Changephoto {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGEPHOTO_H
