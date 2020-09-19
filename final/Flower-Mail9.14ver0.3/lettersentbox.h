#ifndef LETTERSENTBOX_H
#define LETTERSENTBOX_H

#include <QWidget>

namespace Ui {
class LetterSentBox;
}

class LetterSentBox : public QWidget
{
    Q_OBJECT

public:
    explicit LetterSentBox(QWidget *parent = nullptr);
    ~LetterSentBox();

private:
    Ui::LetterSentBox *ui;
};

#endif // LETTERSENTBOX_H
