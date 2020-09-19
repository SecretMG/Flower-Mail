#ifndef WRITELETTERWINDOW_H
#define WRITELETTERWINDOW_H

#include "contecterlistwindow.h"
#include "addattachwindows.h"
#include "settimewindow.h"

#include <QMainWindow>

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


private slots:

    void openContactor();
    void openAttach();
    void openSetTime();

};

#endif // WRITELETTERWINDOW_H
