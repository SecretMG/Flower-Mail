#ifndef GLOBAL_H
#define GLOBAL_H

#include <QPalette>
#include <QFont>

QPalette userColor;
QColor fontColor;
QFont fontType;
QColor buttonColor;
QPalette mailColor;
QColor backColor;

QString buttonBackCol;//改按钮颜色
QString fontColorArgb;//改字体颜色
QString backGroundColor;//改背景颜色

QString userNameRight;
QString userQuesRight;
QString userAnsRight;
QString userPasswordRight;//在登录比对用户名正确后拿出来的内容
bool loginState;

//以下是预设主题内容，因为实在是解决不了全局变量结构体的问题

#endif // GLOBAL_H

