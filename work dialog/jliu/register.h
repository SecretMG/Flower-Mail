#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include "mainwindow.h"
class LogInWindow;

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
    MainWindow *mainWindow;

    QString newPwd;
    QString checkPwd;
    QString userNameNew;
    QString userQues;
    QString userAns;


private slots:
    void toMainPage();
    void judgeEmpty();
    void keyPressEvent(QKeyEvent * event);
    void cancelToMain();

private:
    void initSetRegister();
    bool judgeInputEmpty();
    bool judgeInputSame();
    bool judgeInputExist(QString name);
    void setConnect();
    void setTheme();

};

#endif // REGISTER_H
