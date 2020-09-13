#include "mainwindow.h"
#include <QApplication>
#include <QFile>


void setStyle(const QString &style)
{
    QFile qss(":/QSS/" + style);
    qss.open(QFile::ReadOnly);
    qApp->setStyleSheet(qss.readAll());
    qss.close();
}

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // 加载QSS样式
    setStyle("black");

    MainWindow w;
    w.show();

    return a.exec();
}
