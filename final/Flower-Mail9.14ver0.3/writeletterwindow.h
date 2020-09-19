#ifndef WRITELETTERWINDOW_H
#define WRITELETTERWINDOW_H

#include "contecterlistwindow.h"
#include "addattachwindows.h"
#include "settimewindow.h"

#include <QMainWindow>
#include <QLabel>
#include <QTextEdit>

namespace Ui {
class WriteLetterWindow;
}

class WriteLetterWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit WriteLetterWindow(QWidget *parent = nullptr);
    ~WriteLetterWindow();

private:
    Ui::WriteLetterWindow *ui;
    ContecterListwindow *contecterListwindow;
    AddAttachWindows *addAttachWindows;
    //SetTimeWindow *setTime;

    QPalette textPal;
    QFont textFont;
    QColor textColor;
    QFont lastFont;
    QColor lastColor;

    QList<QLabel*> allText_lb;
    QList<QPushButton*> allText_btn;
    QList<QTextEdit*> allText_te;
    const int labelNum = 4;
    const int buttonNum = 6;
    const int textEditNum = 5;

    QString receivePerson;
    QString copyPerson;
    QString secretSendPerson;
    QString theme;


private slots:
    void openContactor();
    void openAttach();
    void openFontSet();
    void openFontColor();
    void judgeRight();
    void receiveSenderData(QString data);
    void receiveThemeData(QString data);
    void receiveContextData(QString data);

private:
    void setConnect();
    void initSet();
    void changeFont();
    void changeColor();
    void judgeEmpty();
    void send();

};

#endif // WRITELETTERWINDOW_H
