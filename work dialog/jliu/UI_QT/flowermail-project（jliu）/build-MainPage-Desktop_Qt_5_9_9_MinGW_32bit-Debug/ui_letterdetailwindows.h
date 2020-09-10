/********************************************************************************
** Form generated from reading UI file 'letterdetailwindows.ui'
**
** Created by: Qt User Interface Compiler version 5.9.9
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LETTERDETAILWINDOWS_H
#define UI_LETTERDETAILWINDOWS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LetterDetailWindows
{
public:
    QWidget *centralwidget;
    QTextBrowser *LetterDetailsContext;
    QLabel *label;
    QLabel *label_2;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QLabel *label_3;
    QTextBrowser *textBrowser_3;
    QTextBrowser *textBrowser_4;
    QLabel *label_4;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *LetterDetailWindows)
    {
        if (LetterDetailWindows->objectName().isEmpty())
            LetterDetailWindows->setObjectName(QStringLiteral("LetterDetailWindows"));
        LetterDetailWindows->resize(814, 574);
        centralwidget = new QWidget(LetterDetailWindows);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        LetterDetailsContext = new QTextBrowser(centralwidget);
        LetterDetailsContext->setObjectName(QStringLiteral("LetterDetailsContext"));
        LetterDetailsContext->setGeometry(QRect(45, 221, 721, 301));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 72, 15));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 150, 72, 15));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(140, 10, 311, 31));
        textBrowser_2 = new QTextBrowser(centralwidget);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(140, 150, 621, 31));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(50, 190, 93, 28));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(140, 190, 93, 28));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(230, 190, 93, 28));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(670, 190, 93, 28));
        pushButton_5 = new QPushButton(centralwidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(580, 190, 93, 28));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(772, 0, 41, 31));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 90, 72, 15));
        textBrowser_3 = new QTextBrowser(centralwidget);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(140, 90, 621, 31));
        textBrowser_4 = new QTextBrowser(centralwidget);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(140, 50, 311, 31));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(50, 60, 72, 15));
        LetterDetailWindows->setCentralWidget(centralwidget);
        menubar = new QMenuBar(LetterDetailWindows);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 814, 26));
        LetterDetailWindows->setMenuBar(menubar);
        statusbar = new QStatusBar(LetterDetailWindows);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        LetterDetailWindows->setStatusBar(statusbar);

        retranslateUi(LetterDetailWindows);

        QMetaObject::connectSlotsByName(LetterDetailWindows);
    } // setupUi

    void retranslateUi(QMainWindow *LetterDetailWindows)
    {
        LetterDetailWindows->setWindowTitle(QApplication::translate("LetterDetailWindows", "MainWindow", Q_NULLPTR));
        label->setText(QApplication::translate("LetterDetailWindows", "\345\217\221\344\273\266\344\272\272", Q_NULLPTR));
        label_2->setText(QApplication::translate("LetterDetailWindows", "\344\270\273\351\242\230", Q_NULLPTR));
        pushButton->setText(QApplication::translate("LetterDetailWindows", "\345\233\236\345\244\215", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("LetterDetailWindows", "\350\275\254\345\217\221", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("LetterDetailWindows", "\344\270\213\350\275\275\351\231\204\344\273\266", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("LetterDetailWindows", "\345\210\240\351\231\244", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("LetterDetailWindows", "\347\247\273\345\212\250\345\210\260", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("LetterDetailWindows", "\345\205\263\351\227\255", Q_NULLPTR));
        label_3->setText(QApplication::translate("LetterDetailWindows", "\346\212\204\351\200\201\344\272\272", Q_NULLPTR));
        label_4->setText(QApplication::translate("LetterDetailWindows", "\346\224\266\344\273\266\344\272\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LetterDetailWindows: public Ui_LetterDetailWindows {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LETTERDETAILWINDOWS_H
