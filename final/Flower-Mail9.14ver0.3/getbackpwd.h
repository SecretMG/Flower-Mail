#ifndef GETBACKPWD_H
#define GETBACKPWD_H

#include <QWidget>
#include <QDebug>
#include "resetpassword.h"

namespace Ui {
class Getbackpwd;
}

class Getbackpwd : public QWidget
{
    Q_OBJECT

public:
    explicit Getbackpwd(QWidget *parent = nullptr);
    ~Getbackpwd();

private:
    Ui::Getbackpwd *ui;
    Resetpassword *resetPassword;
    QString userNameGet;
    QString userAnsGet;
    QString userAnsRight;

private slots:
    void judgeEmpty();
    void judgeExist();
    void keyPressEvent(QKeyEvent *event);
    void cancelToMain();

private:    
    void toReset();
    void judgeRight();

};

#endif // GETBACKPWD_H
