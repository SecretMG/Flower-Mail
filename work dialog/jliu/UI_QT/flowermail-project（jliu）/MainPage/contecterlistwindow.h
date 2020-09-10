#ifndef CONTECTERLISTWINDOW_H
#define CONTECTERLISTWINDOW_H

#include <QDialog>

namespace Ui {
class ContecterListwindow;
}

class ContecterListwindow : public QDialog
{
    Q_OBJECT

public:
    explicit ContecterListwindow(QWidget *parent = nullptr);
    ~ContecterListwindow();

private:
    Ui::ContecterListwindow *ui;
};

#endif // CONTECTERLISTWINDOW_H
