#include "global.h"

#include <QDebug>

class Global{
public:

    QColor fontColor;
    QFont fontType;
    QColor buttonColor;
    QString buttonBackCol;
    QString fontColorArgb;
    QColor backColor;
    QString backGroundColor;

    QString userNameRight;
    QString userQuesRight;
    QString userAnsRight;
    QString userPasswordRight;

    bool loginState; 

private:
    Global(){
        qDebug()<<"init Global"<<endl;

        fontColor.setNamedColor("black");
        fontType.setFamily("Courier New");
        fontType.setPointSize(15);

        buttonColor.setNamedColor("grey");
        buttonBackCol = "background-color:rgba(100,225,100,30);";
        backGroundColor ="(255,100,100,100)";
        fontColorArgb ="(255, 0, 0, 0)";

        userNameRight = "默认名称";
        loginState = false;
    }


};
