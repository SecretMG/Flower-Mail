#ifndef LETTERDETAILWINDOWS_H
#define LETTERDETAILWINDOWS_H

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
};

#endif // LETTERDETAILWINDOWS_H
