/********************************************************************************
** Form generated from reading UI file 'contecterlistwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONTECTERLISTWINDOW_H
#define UI_CONTECTERLISTWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_ContecterListwindow
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QPushButton *AddContactBut;
    QTableView *tableView;
    QLabel *label_2;

    void setupUi(QDialog *ContecterListwindow)
    {
        if (ContecterListwindow->objectName().isEmpty())
            ContecterListwindow->setObjectName(QStringLiteral("ContecterListwindow"));
        ContecterListwindow->resize(701, 450);
        buttonBox = new QDialogButtonBox(ContecterListwindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(470, 350, 101, 71));
        buttonBox->setOrientation(Qt::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(ContecterListwindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(470, 50, 171, 101));
        AddContactBut = new QPushButton(ContecterListwindow);
        AddContactBut->setObjectName(QStringLiteral("AddContactBut"));
        AddContactBut->setGeometry(QRect(470, 150, 93, 28));
        tableView = new QTableView(ContecterListwindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 61, 431, 361));
        label_2 = new QLabel(ContecterListwindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 10, 231, 51));

        retranslateUi(ContecterListwindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), ContecterListwindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ContecterListwindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(ContecterListwindow);
    } // setupUi

    void retranslateUi(QDialog *ContecterListwindow)
    {
        ContecterListwindow->setWindowTitle(QApplication::translate("ContecterListwindow", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ContecterListwindow", "<html><head/><body><p>\346\262\241\346\234\211\346\202\250\351\234\200\350\246\201\347\232\204\350\201\224\347\263\273\344\272\272\357\274\237\346\202\250</p><p>\344\271\237\345\217\257\344\273\245\346\267\273\345\212\240\346\226\260\347\232\204\350\201\224\347\263\273\344\272\272</p></body></html>", Q_NULLPTR));
        AddContactBut->setText(QApplication::translate("ContecterListwindow", "\346\267\273\345\212\240\350\201\224\347\263\273\344\272\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("ContecterListwindow", "<html><head/><body><p><span style=\" font-size:11pt;\">\350\257\267\351\200\211\346\213\251\346\202\250\351\234\200\350\246\201\347\232\204\344\277\241\344\273\266\350\201\224\347\263\273\344\272\272</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ContecterListwindow: public Ui_ContecterListwindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONTECTERLISTWINDOW_H
