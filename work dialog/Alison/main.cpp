#include "loginwindow.h"
#include "register.h"
#include "getbackpwd.h"
#include "resetpassword.h"
#include "personinfo.h"
#include "settings.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    LogInWindow logInWindow;
    logInWindow.show();
    Settings set;
    set.show();
    return a.exec();
}
