#include "mainwindow.h"

#include <QApplication>
#include <QFileDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    //定义文件对话框类



    return a.exec();
}
