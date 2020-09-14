#ifndef ADDATTACHWINDOWS_H
#define ADDATTACHWINDOWS_H

#include <QDialog>
#include <QLabel>
#include <QTextEdit>

namespace Ui {
class AddAttachWindows;
}

class AddAttachWindows : public QDialog
{
    Q_OBJECT

public:
    explicit AddAttachWindows(QWidget *parent = nullptr);
    ~AddAttachWindows();

private:
    Ui::AddAttachWindows *ui;

    QList<QPushButton*> allText_btn;
    QList<QLabel*> allText_lb;
    QList<QTextEdit*> allText_te;

    const int labelNum = 2;
    const int buttonNum = 2;
    const int textEditNum = 1;

private:
    void initSet();
};

#endif // ADDATTACHWINDOWS_H
