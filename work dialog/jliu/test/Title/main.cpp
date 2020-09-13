#include "BaseWindow.h"
#include "nofocuswidget.h"
#include "MyTitleBar.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NoFocusWidget w;
    w.show();
    return a.exec();
}
