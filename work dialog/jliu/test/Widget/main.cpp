#include "widget.h"

#include <QApplication>

int main(int argc, char *argv[])

{

    QApplication a(argc, argv);

    Widget w;

    w.resize(960,640);

    w.setWindowTitle(QString::fromUtf8("邮件箱"));

    w.show();

    return a.exec();

}
