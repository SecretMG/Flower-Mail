#include "tosafesettings.h"
#include "ui_tosafesettings.h"
#include "mainwindow.h"

#include <QMessageBox>
#include <QDebug>

extern QPalette userColor;
extern QFont fontType;
extern QString fontColorArgb;
extern QString buttonBackCol;

extern QString userAnsRight;

ToSafeSettings::ToSafeSettings(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ToSafeSettings)
{
    ui->setupUi(this);
    init();
    connect( ui ->next_btn, SIGNAL(clicked()), this, SLOT( judgePass() ));
    connect( ui ->cancel_btn, SIGNAL(clicked()), this, SLOT( cancelToMain() ));
    extern QString backGroundColor;
    this -> setStyleSheet(backGroundColor);
}

ToSafeSettings::~ToSafeSettings()
{
    delete ui;
}

void ToSafeSettings::judgePass(){
    getAns = ui->ans_le->text();
    if ( getAns.isEmpty() ){
        QMessageBox::warning(this, tr("警告"),tr("输入为空！"),QMessageBox::Yes);
    }
    else{
        qDebug() << "not empty" <<endl;
        isMatched = isMatch(getAns);
        if ( isMatched == true ){
            toSafeSet();
        }
        else{
            QMessageBox::warning(this, tr("警告"),tr("输入不匹配！"),QMessageBox::Yes);
        }
    }

}

void ToSafeSettings::init(){
    setWindowTitle("验证密保问题");
    setQues = "Default Ques";
    //连接数据库:将密保问题拉取并放到setQues中
    ui->ques_le->setText(setQues);
    isMatched = true;

    allText_btn = this -> findChildren<QPushButton*>();
    for(int i = 0;i < buttonNum ;i++){
         allText_btn[i]->setStyleSheet( fontColorArgb+buttonBackCol );
         allText_btn[i]->setFont( fontType );
    }

    allText_lb = this -> findChildren<QLabel*>();
    for(int i = 0 ;i < labelNum ;i++){
         allText_lb[i] -> setStyleSheet( fontColorArgb );
         allText_lb[i] -> setFont( fontType );
    }

    allText_le = this -> findChildren<QLineEdit*>();
    for(int i = 0 ;i < lineEditNum ;i++){
         allText_le[i] -> setStyleSheet( fontColorArgb );
         allText_le[i] -> setFont( fontType );
    }
}

bool ToSafeSettings::isMatch(QString ans){
    if( ans.compare(userAnsRight) ){
        return true;
    }
    else{
        return false;
    }
}

void ToSafeSettings::toSafeSet(){
    qDebug() <<"openPersoninfo"<< endl;
    safeSet = new SafeSettings;
    safeSet -> show();
    close();

}

void ToSafeSettings::cancelToMain(){
    MainWindow *main = new MainWindow;
    main ->show();
    close();
}

