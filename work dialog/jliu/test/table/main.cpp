#include "tablevieshow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    tableVieShow w;
    w.show();
    return a.exec();
}
