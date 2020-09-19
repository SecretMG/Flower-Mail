#include "global.h"

#include <QDebug>

class Global{
public:
    QPalette userColor;
    QColor fontColor;
    QFont fontType;
    QColor buttonColor;
    QPalette mailColor;
    QString buttonBackCol;
    QString fontColorArgb;
    QColor backColor;
    QString backGroundColor;


private:
    Global(){
        qDebug()<<"init Global"<<endl;
        fontColor.setNamedColor("black");
        fontType.setFamily("Courier New");
        fontType.setPointSize(15);

        buttonColor.setNamedColor("grey");
        buttonBackCol = "background-color:rgba(0,225,100,30);";

        fontColorArgb ="(255, 0, 0, 0)";
        backGroundColor ="(255,100,100,100)";


    }
};
