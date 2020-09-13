#ifndef HELPMAINPAGE_H
#define HELPMAINPAGE_H

#include "helpaboutdesign.h"
#include "helpaboutmail.h"
#include "helpaboutsafe.h"

#include <QWidget>
#include <QPushButton>
#include <QLabel>
#include <QStackedWidget>

namespace Ui {
class HelpMainPage;
}

class HelpMainPage : public QWidget
{
    Q_OBJECT

public:
    explicit HelpMainPage(QWidget *parent = nullptr);
    ~HelpMainPage();

private:
    Ui::HelpMainPage *ui;
    HelpMainPage *helpMain;
    HelpAboutMail *helpMail;
    HelpAboutSafe *helpSafe;
    HelpAboutDesign *helpDesign;

    QList<QPushButton*> allText_btn;
    QList<QLabel*> allText_lb;
    const int labelNum = 7;

private:
    void initSet();
    void setConnect();

};

#endif // HELPMAINPAGE_H
