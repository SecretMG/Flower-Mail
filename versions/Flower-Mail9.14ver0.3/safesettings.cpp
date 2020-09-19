#include "safesettings.h"
#include "ui_safesettings.h"
#include "mainwindow.h"

extern QFont fontType;
extern QString fontColorArgb;
extern QString buttonBackCol;

extern QString userAnsRight;
extern QString userPasswordRight;
extern QString userQuesRight;

class MainWindow;

SafeSettings::SafeSettings(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SafeSettings)
{
    ui->setupUi(this);
    setWindowTitle("重新设置密保问题");
    initSet();
    setConnect();
    extern QString backGroundColor;
    this -> setStyleSheet(backGroundColor);
}

SafeSettings::~SafeSettings()
{
    delete ui;
}

void SafeSettings::initSet(){
    allText_btn = this -> findChildren<QPushButton*>();
    for(int i = 0;i < buttonNum;i++){
        allText_btn[i]->setFont( fontType );
        allText_btn[i]->setStyleSheet( fontColorArgb + buttonBackCol );
    }

    allText_lb = this -> findChildren<QLabel*>();
    for(int i = 0 ;i < labelNum ;i++){
        allText_lb[i]->setFont( fontType );
        allText_lb[i]->setStyleSheet( fontColorArgb + buttonBackCol );
    }

    allText_le = this -> findChildren<QLineEdit*>();
    for(int i = 0 ;i < lineEditNum ;i++){
        allText_le[i]->setFont( fontType );
        allText_le[i]->setStyleSheet( fontColorArgb + buttonBackCol );
    }
}

void SafeSettings::setConnect(){
    connect( ui ->yes_btn, SIGNAL(clicked()), this,SLOT( toMainPage() ) );
    connect( ui ->cancel_btn, SIGNAL(clicked()), this,SLOT( cancelToMainPage() ) );

}

void SafeSettings::toMainPage(){
    QMessageBox::warning(this, tr(""),tr("设置密保问题成功！"),tr("关闭"));
    QString newQues = ui -> ques_le -> text();
    QString newAns = ui -> ans_le -> text();
    QString newPassword = ui -> ans_le -> text();
    userAnsRight = newAns;
    userPasswordRight = newPassword;
    userQuesRight = newQues;
    //

    //数据库：将结果上传到服务器端
    //修改本地自己密保问题


    MainWindow *main = new MainWindow;
    main ->show();
    close();
}

void SafeSettings::cancelToMainPage(){
    MainWindow *main = new MainWindow;
    main ->show();
    close();
}
