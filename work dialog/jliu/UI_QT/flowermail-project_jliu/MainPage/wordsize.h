#ifndef WORDSIZE_H
#define WORDSIZE_H

#include <QDialog>

namespace Ui {
class WordSize;
}

class WordSize : public QDialog
{
    Q_OBJECT

public:
    explicit WordSize(QWidget *parent = nullptr);
    ~WordSize();

private:
    Ui::WordSize *ui;
};

#endif // WORDSIZE_H
