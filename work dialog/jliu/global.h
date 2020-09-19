#ifndef GLOBAL_H
#define GLOBAL_H

#include <QPalette>
#include <QFont>

QPalette userColor;
QColor fontColor;
QFont fontType;//改字体
QColor buttonColor;
QPalette mailColor;
QColor backColor;

QString buttonBackCol;//改按钮颜色
QString fontColorArgb;//改字体颜色
QString backGroundColor;//改背景颜色

struct{
    QString preFontType;
    QString preFontColor;
    QString preBtnColor;
    QString preBackColor;
}preTheme[12];

#endif // GLOBAL_H
