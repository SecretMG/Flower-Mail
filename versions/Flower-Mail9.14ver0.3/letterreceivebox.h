#ifndef LETTERRECEIVEBOX_H
#define LETTERRECEIVEBOX_H

#include <QWidget>

namespace Ui {
class LetterReceiveBox;
}

class LetterReceiveBox : public QWidget
{
    Q_OBJECT

public:
    explicit LetterReceiveBox(QWidget *parent = nullptr);
    ~LetterReceiveBox();

private:
    Ui::LetterReceiveBox *ui;
};

#endif // LETTERRECEIVEBOX_H
