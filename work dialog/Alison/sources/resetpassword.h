#ifndef RESETPASSWORD_H
#define RESETPASSWORD_H

#include <QWidget>
#include <QDebug>


namespace Ui {
class Resetpassword;
}

class Resetpassword : public QWidget
{
    Q_OBJECT

public:
    explicit Resetpassword(QWidget *parent = nullptr);
    ~Resetpassword();

private:
    Ui::Resetpassword *ui;


private slots:
    void toMainWindow();
    void judgeEmpty();

private:
    bool judgeInputEmpty();
    bool judgeInputSame();
};

#endif // RESETPASSWORD_H
