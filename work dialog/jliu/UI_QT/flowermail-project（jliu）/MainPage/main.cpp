#include "mainwindow.h"
#include "writeletterwindow.h"
#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;//工作台
    WriteLetterWindow writeLetterW; //写邮件界面

    w.show();

    writeLetterW.show();

    return a.exec();


}
