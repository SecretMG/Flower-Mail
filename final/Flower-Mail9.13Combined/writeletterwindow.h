#ifndef WRITELETTERWINDOW_H
#define WRITELETTERWINDOW_H

#include "contecterlistwindow.h"
#include "addattachwindows.h"
#include "settimewindow.h"

#include <QMainWindow>
#include <QLabel>

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
    SetTimeWindow *setTime;

    QList<QPushButton*> allText_btn;
    QList<QLabel*> allText_lb;

    const int btnNum = 8;
    const int labelNum = 4;


private slots:
    void openContactor();
    void openAttach();
    void openSetTime();

private:
    void setConnect();
    void setTheme();

};

#endif // WRITELETTERWINDOW_H
