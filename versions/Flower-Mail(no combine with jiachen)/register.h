#ifndef REGISTER_H
#define REGISTER_H

#include <QWidget>
#include "mainwindow.h"

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

    QList<QPushButton*> allText_btn;
    QList<QLabel*> allText_lb;
    const int labelNum = 6;

private slots:
    void toMainPage();
    void judgeEmpty();
    void keyPressEvent(QKeyEvent * event);

private:
    void initSetRegister();
    bool judgeInputEmpty();
    bool judgeInputSame();
    bool judgeInputExist(QString name);
    void setConnect();
    void setTheme();

};

#endif // REGISTER_H
