#ifndef WRITELETTERWINDOW_H
#define WRITELETTERWINDOW_H

#include "wordtype.h"
#include "wordsize.h"
#include "wordcolor.h"
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
    WordType *wordType;
    WordSize *wordSize;
    WordColor *wordcolor;
    ContecterListwindow *contecterListwindow;
    AddAttachWindows *addAttachWindows;
    SetTimeWindow *setTime;


private slots:
    void openWordType();
    void openWordSize();
    void openWordColor();
    void openContactor();
    void openAttach();
    void openSetTime();

};

#endif // WRITELETTERWINDOW_H
