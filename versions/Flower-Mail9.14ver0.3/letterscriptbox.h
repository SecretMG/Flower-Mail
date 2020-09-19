#ifndef LETTERSCRIPTBOX_H
#define LETTERSCRIPTBOX_H

#include <QWidget>

namespace Ui {
class LetterScriptBox;
}

class LetterScriptBox : public QWidget
{
    Q_OBJECT

public:
    explicit LetterScriptBox(QWidget *parent = nullptr);
    ~LetterScriptBox();

private:
    Ui::LetterScriptBox *ui;
};

#endif // LETTERSCRIPTBOX_H
