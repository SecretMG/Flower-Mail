/********************************************************************************
** Form generated from reading UI file 'addattachwindows.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDATTACHWINDOWS_H
#define UI_ADDATTACHWINDOWS_H

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

class Ui_AddAttachWindows
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QTextEdit *textEdit;
    QLabel *label_2;

    void setupUi(QDialog *AddAttachWindows)
    {
        if (AddAttachWindows->objectName().isEmpty())
            AddAttachWindows->setObjectName(QStringLiteral("AddAttachWindows"));
        AddAttachWindows->resize(516, 465);
        buttonBox = new QDialogButtonBox(AddAttachWindows);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(160, 410, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(AddAttachWindows);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 221, 21));
        textEdit = new QTextEdit(AddAttachWindows);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(20, 360, 481, 41));
        label_2 = new QLabel(AddAttachWindows);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 330, 381, 16));

        retranslateUi(AddAttachWindows);
        QObject::connect(buttonBox, SIGNAL(accepted()), AddAttachWindows, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AddAttachWindows, SLOT(reject()));

        QMetaObject::connectSlotsByName(AddAttachWindows);
    } // setupUi

    void retranslateUi(QDialog *AddAttachWindows)
    {
        AddAttachWindows->setWindowTitle(QApplication::translate("AddAttachWindows", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("AddAttachWindows", "\350\257\267\351\200\211\346\213\251\346\202\250\350\246\201\346\267\273\345\212\240\347\232\204\351\231\204\344\273\266", Q_NULLPTR));
        label_2->setText(QApplication::translate("AddAttachWindows", "\346\262\241\346\234\211\346\202\250\347\232\204\351\231\204\344\273\266\357\274\237\344\271\237\345\217\257\344\273\245\345\234\250\346\255\244\347\233\264\346\216\245\345\241\253\345\206\231\350\267\257\345\276\204", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AddAttachWindows: public Ui_AddAttachWindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDATTACHWINDOWS_H
