#ifndef HELP_H
#define HELP_H

#include <QMainWindow>

#include "helpmainpage.h"
#include "helpaboutmail.h"
#include "helpaboutsafe.h"
#include "helpaboutdesign.h"

namespace Ui {
class Help;
}

class Help : public QWidget{
    Q_OBJECT

public:
    explicit Help(QWidget *parent = nullptr);
    ~Help();

private:
    Ui::Help *ui;
    HelpMainPage *helpMain;
    HelpAboutMail *helpMail;
    HelpAboutSafe *helpSafe;
    HelpAboutDesign *helpDesign;

private slots:
    void toMail();
    void toMain();
    void toSafe();
    void toDesign();

private:
    void initConnect();
    void initNewWin();

public:
    QPalette setWhiteTheme(){
        QPalette whitePale;
        whitePale.setColor(QPalette::Text, Qt::blue);
        return whitePale;
    }


};

#endif // HELP_H
