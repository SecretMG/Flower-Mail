/********************************************************************************
** Form generated from reading UI file 'writeletterwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WRITELETTERWINDOW_H
#define UI_WRITELETTERWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WriteLetterWindow
{
public:
    QWidget *centralwidget;
    QTextEdit *Lcontext;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *Lreciver;
    QLabel *LreciverOther;
    QLabel *LreciverSecert;
    QLabel *Ltheme;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout;
    QTextEdit *Lreceiver;
    QLabel *label;
    QPushButton *ReceiveListButton;
    QTextEdit *LreceivOther;
    QTextEdit *LthemInput;
    QTextEdit *LreceiverSecert;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *LchooseFont;
    QPushButton *LchooseFontColor;
    QLabel *label_2;
    QPushButton *SaveDraftButton;
    QPushButton *SetTimeLaunch;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *UPloadattach;
    QLabel *label_3;
    QPushButton *Lsend;

    void setupUi(QMainWindow *WriteLetterWindow)
    {
        if (WriteLetterWindow->objectName().isEmpty())
            WriteLetterWindow->setObjectName(QStringLiteral("WriteLetterWindow"));
        WriteLetterWindow->resize(980, 712);
        centralwidget = new QWidget(WriteLetterWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        Lcontext = new QTextEdit(centralwidget);
        Lcontext->setObjectName(QStringLiteral("Lcontext"));
        Lcontext->setGeometry(QRect(100, 240, 811, 331));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(100, 20, 101, 181));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        Lreciver = new QLabel(verticalLayoutWidget);
        Lreciver->setObjectName(QStringLiteral("Lreciver"));

        verticalLayout->addWidget(Lreciver);

        LreciverOther = new QLabel(verticalLayoutWidget);
        LreciverOther->setObjectName(QStringLiteral("LreciverOther"));

        verticalLayout->addWidget(LreciverOther);

        LreciverSecert = new QLabel(verticalLayoutWidget);
        LreciverSecert->setObjectName(QStringLiteral("LreciverSecert"));

        verticalLayout->addWidget(LreciverSecert);

        Ltheme = new QLabel(verticalLayoutWidget);
        Ltheme->setObjectName(QStringLiteral("Ltheme"));

        verticalLayout->addWidget(Ltheme);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QStringLiteral("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(200, 30, 711, 171));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setSpacing(20);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(90);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        Lreceiver = new QTextEdit(verticalLayoutWidget_2);
        Lreceiver->setObjectName(QStringLiteral("Lreceiver"));

        horizontalLayout->addWidget(Lreceiver);

        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        ReceiveListButton = new QPushButton(verticalLayoutWidget_2);
        ReceiveListButton->setObjectName(QStringLiteral("ReceiveListButton"));

        horizontalLayout->addWidget(ReceiveListButton);

        horizontalLayout->setStretch(0, 4);
        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 2);

        verticalLayout_2->addLayout(horizontalLayout);

        LreceivOther = new QTextEdit(verticalLayoutWidget_2);
        LreceivOther->setObjectName(QStringLiteral("LreceivOther"));

        verticalLayout_2->addWidget(LreceivOther);

        LthemInput = new QTextEdit(verticalLayoutWidget_2);
        LthemInput->setObjectName(QStringLiteral("LthemInput"));

        verticalLayout_2->addWidget(LthemInput);

        LreceiverSecert = new QTextEdit(verticalLayoutWidget_2);
        LreceiverSecert->setObjectName(QStringLiteral("LreceiverSecert"));

        verticalLayout_2->addWidget(LreceiverSecert);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QStringLiteral("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(100, 200, 811, 41));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        LchooseFont = new QPushButton(horizontalLayoutWidget_2);
        LchooseFont->setObjectName(QStringLiteral("LchooseFont"));

        horizontalLayout_2->addWidget(LchooseFont);

        LchooseFontColor = new QPushButton(horizontalLayoutWidget_2);
        LchooseFontColor->setObjectName(QStringLiteral("LchooseFontColor"));

        horizontalLayout_2->addWidget(LchooseFontColor);

        label_2 = new QLabel(horizontalLayoutWidget_2);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        SaveDraftButton = new QPushButton(horizontalLayoutWidget_2);
        SaveDraftButton->setObjectName(QStringLiteral("SaveDraftButton"));

        horizontalLayout_2->addWidget(SaveDraftButton);

        SetTimeLaunch = new QPushButton(horizontalLayoutWidget_2);
        SetTimeLaunch->setObjectName(QStringLiteral("SetTimeLaunch"));

        horizontalLayout_2->addWidget(SetTimeLaunch);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 1);
        horizontalLayout_2->setStretch(2, 5);
        horizontalLayout_2->setStretch(3, 1);
        horizontalLayout_2->setStretch(4, 1);
        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QStringLiteral("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(100, 570, 811, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        UPloadattach = new QPushButton(horizontalLayoutWidget_3);
        UPloadattach->setObjectName(QStringLiteral("UPloadattach"));

        horizontalLayout_3->addWidget(UPloadattach);

        label_3 = new QLabel(horizontalLayoutWidget_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        Lsend = new QPushButton(horizontalLayoutWidget_3);
        Lsend->setObjectName(QStringLiteral("Lsend"));

        horizontalLayout_3->addWidget(Lsend);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 4);
        horizontalLayout_3->setStretch(2, 1);
        WriteLetterWindow->setCentralWidget(centralwidget);

        retranslateUi(WriteLetterWindow);

        QMetaObject::connectSlotsByName(WriteLetterWindow);
    } // setupUi

    void retranslateUi(QMainWindow *WriteLetterWindow)
    {
        WriteLetterWindow->setWindowTitle(QApplication::translate("WriteLetterWindow", "MainWindow", Q_NULLPTR));
        Lreciver->setText(QApplication::translate("WriteLetterWindow", "\346\224\266\344\273\266\344\272\272", Q_NULLPTR));
        LreciverOther->setText(QApplication::translate("WriteLetterWindow", "\346\212\204\351\200\201\344\272\272", Q_NULLPTR));
        LreciverSecert->setText(QApplication::translate("WriteLetterWindow", "\345\257\206\351\200\201\344\272\272", Q_NULLPTR));
        Ltheme->setText(QApplication::translate("WriteLetterWindow", "\344\270\273\351\242\230", Q_NULLPTR));
        label->setText(QString());
        ReceiveListButton->setText(QApplication::translate("WriteLetterWindow", "\350\201\224\347\263\273\344\272\272\345\210\227\350\241\250", Q_NULLPTR));
        LchooseFont->setText(QApplication::translate("WriteLetterWindow", "\351\200\211\346\213\251\345\205\250\346\226\207\345\255\227\344\275\223", Q_NULLPTR));
        LchooseFontColor->setText(QApplication::translate("WriteLetterWindow", "\351\200\211\346\213\251\345\205\250\346\226\207\351\242\234\350\211\262", Q_NULLPTR));
        label_2->setText(QString());
        SaveDraftButton->setText(QApplication::translate("WriteLetterWindow", "\345\255\230\350\207\263\350\215\211\347\250\277\347\256\261", Q_NULLPTR));
        SetTimeLaunch->setText(QApplication::translate("WriteLetterWindow", "\345\256\232\346\227\266\345\217\221\351\200\201", Q_NULLPTR));
        UPloadattach->setText(QApplication::translate("WriteLetterWindow", "\351\231\204\344\273\266\344\270\212\344\274\240", Q_NULLPTR));
        label_3->setText(QString());
        Lsend->setText(QApplication::translate("WriteLetterWindow", "\345\217\221\351\200\201", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class WriteLetterWindow: public Ui_WriteLetterWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WRITELETTERWINDOW_H
