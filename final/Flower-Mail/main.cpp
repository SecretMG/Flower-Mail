#include "loginwindow.h"
#include "register.h"
#include "getbackpwd.h"
#include "resetpassword.h"
#include "personinfo.h"
/* #include "settings.h"*/ //setting adjust

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LogInWindow logInWindow;
    logInWindow.show();
    /*Settings set;
    set.show();*/ //setting adjust
    return a.exec();
}
