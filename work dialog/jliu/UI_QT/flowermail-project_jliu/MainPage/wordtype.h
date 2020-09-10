#ifndef WORDTYPE_H
#define WORDTYPE_H

#include <QDialog>

namespace Ui {
class WordType;
}

class WordType : public QDialog
{
    Q_OBJECT

public:
    explicit WordType(QWidget *parent = nullptr);
    ~WordType();

private:
    Ui::WordType *ui;
};

#endif // WORDTYPE_H
