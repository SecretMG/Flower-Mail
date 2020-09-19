
//main.cpp



#pragma once
#include <QtWidgets/QApplication>
#include "fileview_widget.h"
int main(int argc, char *argv[]){
    QApplication a(argc, argv);
    FileViewWidget win;
    win.show();
    return a.exec();
}
