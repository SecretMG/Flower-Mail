#ifndef LETTERDETAILWINDOWS_H
#define LETTERDETAILWINDOWS_H

#include "writeletterwindow.h"
#include "saveattach.h"

#include <QMainWindow>

namespace Ui {
class LetterDetailWindows;
}

class LetterDetailWindows : public QMainWindow
{
    Q_OBJECT

public:
    explicit LetterDetailWindows(QWidget *parent = nullptr);
    ~LetterDetailWindows();

private:
    Ui::LetterDetailWindows *ui;
    WriteLetterWindow *replyWindow;
    WriteLetterWindow *forwardWindow;
    SaveAttach *saveAttach;

private slots:
    void openReplyWindow();
    void openForwardWindow();
    void openSaveAttach();
};

#endif // LETTERDETAILWINDOWS_H
