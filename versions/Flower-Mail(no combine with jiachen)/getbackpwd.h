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

private slots:
    void judgeEmpty();

private:
    bool judgeExist();
    void toReset();

};

#endif // GETBACKPWD_H
