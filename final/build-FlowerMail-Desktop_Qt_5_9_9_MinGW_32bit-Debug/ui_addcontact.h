/********************************************************************************
** Form generated from reading UI file 'addcontact.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCONTACT_H
#define UI_ADDCONTACT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_AddContact
{
public:
    QDialogButtonBox *AddContactInput;
    QLabel *label;
    QTextEdit *textEdit;

    void setupUi(QDialog *AddContact)
    {
        if (AddContact->objectName().isEmpty())
            AddContact->setObjectName(QStringLiteral("AddContact"));
        AddContact->resize(400, 300);
        AddContactInput = new QDialogButtonBox(AddContact);
        AddContactInput->setObjectName(QStringLiteral("AddContactInput"));
        AddContactInput->setGeometry(QRect(300, 220, 81, 71));
        AddContactInput->setOrientation(Qt::Vertical);
        AddContactInput->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(AddContact);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(290, 20, 101, 181));
        textEdit = new QTextEdit(AddContact);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(40, 30, 231, 241));

        retranslateUi(AddContact);
        QObject::connect(AddContactInput, SIGNAL(accepted()), AddContact, SLOT(accept()));
        QObject::connect(AddContactInput, SIGNAL(rejected()), AddContact, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddContact);
    } // setupUi

    void retranslateUi(QDialog *AddContact)
    {
        AddContact->setWindowTitle(QApplication::translate("AddContact", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("AddContact", "<html><head/><body><p><span style=\" font-size:12pt;\">\350\257\267\350\276\223\345\205\245\344\275\240</span></p><p><span style=\" font-size:12pt;\">\350\246\201\346\267\273\345\212\240\347\232\204</span></p><p><span style=\" font-size:12pt;\">\350\201\224\347\263\273\344\272\272\357\274\214</span></p><p><span style=\" font-size:12pt;\">\345\271\266\344\273\245\342\200\234\357\274\233\342\200\235</span></p><p><span style=\" font-size:12pt;\">\345\210\206\345\211\262</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddContact: public Ui_AddContact {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCONTACT_H
