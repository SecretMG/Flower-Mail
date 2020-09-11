#ifndef CHECKLOGOUT_H
#define CHECKLOGOUT_H

#include <QDialog>

namespace Ui {
class Checklogout;
}

class Checklogout : public QDialog
{
    Q_OBJECT

public:
    explicit Checklogout(QWidget *parent = nullptr);
    ~Checklogout();

private:
    Ui::Checklogout *ui;
};

#endif // CHECKLOGOUT_H
