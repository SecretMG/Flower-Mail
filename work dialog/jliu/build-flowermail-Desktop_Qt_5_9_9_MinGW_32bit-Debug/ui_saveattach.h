/********************************************************************************
** Form generated from reading UI file 'saveattach.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SAVEATTACH_H
#define UI_SAVEATTACH_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_SaveAttach
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SaveAttach)
    {
        if (SaveAttach->objectName().isEmpty())
            SaveAttach->setObjectName(QStringLiteral("SaveAttach"));
        SaveAttach->resize(499, 404);
        buttonBox = new QDialogButtonBox(SaveAttach);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(140, 340, 211, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(SaveAttach);
        QObject::connect(buttonBox, SIGNAL(accepted()), SaveAttach, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SaveAttach, SLOT(reject()));

        QMetaObject::connectSlotsByName(SaveAttach);
    } // setupUi

    void retranslateUi(QDialog *SaveAttach)
    {
        SaveAttach->setWindowTitle(QApplication::translate("SaveAttach", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class SaveAttach: public Ui_SaveAttach {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SAVEATTACH_H
