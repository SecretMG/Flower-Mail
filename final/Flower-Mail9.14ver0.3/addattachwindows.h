#ifndef ADDATTACHWINDOWS_H
#define ADDATTACHWINDOWS_H

#include <QDialog>
#include <QLabel>
#include <QTextEdit>
#include <qdialog.h>


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
    const int buttonNum = 3;
    const int textEditNum = 1;

private:
    void initSet();

private slots:
    void on_pushButton_clicked();
};

#endif // ADDATTACHWINDOWS_H
