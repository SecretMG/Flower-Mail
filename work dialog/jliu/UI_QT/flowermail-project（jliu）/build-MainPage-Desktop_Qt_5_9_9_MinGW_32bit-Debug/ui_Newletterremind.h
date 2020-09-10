/********************************************************************************
** Form generated from reading UI file 'Newletterremind.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWLETTERREMIND_H
#define UI_NEWLETTERREMIND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_NewLetterAlert
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *NewLetterAlert)
    {
        if (NewLetterAlert->objectName().isEmpty())
            NewLetterAlert->setObjectName(QStringLiteral("NewLetterAlert"));
        NewLetterAlert->resize(400, 300);
        buttonBox = new QDialogButtonBox(NewLetterAlert);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(NewLetterAlert);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 70, 241, 71));

        retranslateUi(NewLetterAlert);
        QObject::connect(buttonBox, SIGNAL(accepted()), NewLetterAlert, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), NewLetterAlert, SLOT(reject()));

        QMetaObject::connectSlotsByName(NewLetterAlert);
    } // setupUi

    void retranslateUi(QDialog *NewLetterAlert)
    {
        NewLetterAlert->setWindowTitle(QApplication::translate("NewLetterAlert", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("NewLetterAlert", "\346\202\250\346\234\211\344\270\200\345\260\201\346\226\260\351\202\256\344\273\266\357\274\214\350\257\267\351\227\256\346\230\257\345\220\246\350\267\263\350\275\254\357\274\237", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class NewLetterAlert: public Ui_NewLetterAlert {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWLETTERREMIND_H
