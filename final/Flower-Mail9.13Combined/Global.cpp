#include "global.h"

#include <QDebug>

class Global{
public:
    QPalette userColor;
    QColor fontColor;
    QFont fontType;

private:
    Global(){
        qDebug()<<"init Global"<<endl;
        userColor.setColor(QPalette::ButtonText,Qt::black );
        userColor.setColor(QPalette::WindowText,Qt::black );
        fontColor.setNamedColor("black");

        fontType.setFamily("Courier New");
        fontType.setPointSize(15);
    }
};
