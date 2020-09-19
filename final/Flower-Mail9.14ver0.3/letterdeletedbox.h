#ifndef LETTERDELETEDBOX_H
#define LETTERDELETEDBOX_H

#include <QWidget>

namespace Ui {
class LetterDeletedBox;
}

class LetterDeletedBox : public QWidget
{
    Q_OBJECT

public:
    explicit LetterDeletedBox(QWidget *parent = nullptr);
    ~LetterDeletedBox();

private:
    Ui::LetterDeletedBox *ui;
};

#endif // LETTERDELETEDBOX_H
