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
    QString newPassword;
    QString checkPassword;


private slots:
    void toMainWindow();
    void judgeEmpty();

private:
    bool judgeInputEmpty();
    bool judgeInputSame();
    void keyPressEvent(QKeyEvent *event);
};

#endif // RESETPASSWORD_H
