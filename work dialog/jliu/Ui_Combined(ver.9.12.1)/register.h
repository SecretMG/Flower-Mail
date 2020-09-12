#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>

namespace Ui {
class Register;
}

class Register : public QWidget
{
    Q_OBJECT

public:
    explicit Register(QWidget *parent = nullptr);
    ~Register();

private:
    Ui::Register *ui;

private slots:
    void toMainPage();
    void judgeEmpty();

private:
    bool judgeInputEmpty();
    bool judgeInputSame();
};

#endif // REGISTER_H
