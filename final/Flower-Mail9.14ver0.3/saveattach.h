#ifndef SAVEATTACH_H
#define SAVEATTACH_H

#include <QDialog>
#include <QLabel>
#include <QTextEdit>

namespace Ui {
class SaveAttach;
}

class SaveAttach : public QDialog
{
    Q_OBJECT

public:
    explicit SaveAttach(QWidget *parent = nullptr);
    ~SaveAttach();

private slots:
    void openFileView();

private:
    Ui::SaveAttach *ui;

    QList<QPushButton*> allText_btn;
    QList<QLabel*> allText_lb;
    QList<QTextEdit*> allText_te;
    const int buttonNum = 3;
    const int labelNum = 2;
    const int textEditNum = 1;

private:
    void initSet();

};
#endif // SAVEATTACH_H
