#ifndef WORDCOLOR_H
#define WORDCOLOR_H

#include <QDialog>

namespace Ui {
class WordColor;
}

class WordColor : public QDialog
{
    Q_OBJECT

public:
    explicit WordColor(QWidget *parent = nullptr);
    ~WordColor();

private:
    Ui::WordColor *ui;
};

#endif // WORDCOLOR_H
