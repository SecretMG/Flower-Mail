#ifndef LETTERDETAILWINDOWS_H
#define LETTERDETAILWINDOWS_H

#include "writeletterwindow.h"
#include "saveattach.h"

#include <QMainWindow>
#include <QTextEdit>

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

    QList<QPushButton*> allText_btn;
    QList<QLabel*> allText_lb;
    QList<QTextEdit*> allText_te;
    const int labelNum = 4;
    const int buttonNum = 5;
    const int textEditNum = 4;

    QString sendPer;
    QString receiPer;
    QString copyPer;
    QString title;

private slots:
    void openReplyWindow();
    void openForwardWindow();
    void openSaveAttach();

private:
    void setConnect();
    void initSet();
};

#endif // LETTERDETAILWINDOWS_H
