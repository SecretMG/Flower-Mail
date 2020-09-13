#include "writeletterwindow.h"
#include "ui_writeletterwindow.h"

#include "contecterlistwindow.h"
#include "addattachwindows.h"

#include <QDebug>
#include <QFontDialog>
#include <QColorDialog>
#include <QLineEdit>
#include <QKeyEvent>

extern QPalette userColor;
extern QFont fontType;
extern QString fontColorArgb;
extern QString buttonBackCol;

WriteLetterWindow::WriteLetterWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::WriteLetterWindow)
{
    ui->setupUi(this);
    setWindowTitle("编辑邮件");
    setConnect();
    initSet();
    extern QString backGroundColor;
    this -> setStyleSheet(backGroundColor);
}

WriteLetterWindow::~WriteLetterWindow()
{
    delete ui;
}


void WriteLetterWindow::openContactor(){
    qDebug() <<"openContactor"<< endl;
    contecterListwindow = new ContecterListwindow;
    contecterListwindow -> show();
}

void WriteLetterWindow::openAttach(){
    qDebug() <<"openAttach"<< endl;
    addAttachWindows = new AddAttachWindows;
    addAttachWindows -> show();
}

void WriteLetterWindow::setConnect(){
    connect( ui -> ReceiveListButton, SIGNAL(clicked()), this, SLOT( openContactor()) );
    connect( ui -> UPloadattach, SIGNAL(clicked()), this, SLOT( openAttach()) );
    connect (ui -> LchooseFont, SIGNAL(clicked()), this, SLOT( openFontSet()) );
    connect (ui -> LchooseFontColor, SIGNAL(clicked()), this, SLOT( openFontColor()) );
    connect (ui -> Lsend, SIGNAL(clicked()), this, SLOT( judgeRight()) );

}

void WriteLetterWindow::initSet(){
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
    allText_te = this -> findChildren<QTextEdit*>();
    for(int i = 0 ;i < textEditNum ;i++){
         allText_te[i] -> setStyleSheet( fontColorArgb );
         allText_te[i] -> setFont( fontType );
    }

}

void WriteLetterWindow::openFontSet(){
    bool *isfontType = new bool();
    textFont = QFontDialog::getFont( isfontType , this);
    changeFont();
    delete isfontType;
}

void WriteLetterWindow::openFontColor(){
    textColor = QColorDialog::getColor(lastColor, this,tr("颜色对话框"),QColorDialog::ShowAlphaChannel);
    qDebug() << "choose font color" << textColor << endl;
    changeColor();
    lastColor = textColor;
}

void WriteLetterWindow::changeFont(){

    for(int i = 0;i < textEditNum; i++){
        allText_te[i] -> setFont( textFont );
    }
}

void WriteLetterWindow::changeColor(){

    textPal.setColor( QPalette::WindowText,textColor );
    textPal.setColor( QPalette::ButtonText,textColor );
    textPal.setColor( QPalette::Text,textColor );

    for(int i = 0;i < textEditNum; i++){
        allText_te[i] -> setPalette( textPal );
    }
}


void WriteLetterWindow::judgeRight(){
    QString content = ui -> Lcontext->toPlainText();
    if(content.contains(QRegExp("[a-zA-Z0-9!-/:-?]"))){
       //转到发送
    }
    else{
        QMessageBox::warning(this, tr("警告"),tr("输入包括中文字符！"),tr("关闭"));
    }
}










