#include "addattachwindows.h"
#include "ui_addattachwindows.h"

#include <QPalette>
#include <QPushButton>
#include <QString>
#include <QFileDialog>
#include <QMessageBox>
#include <QFile>
#include <QDebug>

extern QPalette userColor;
extern QFont fontType;
extern QString fontColorArgb;

AddAttachWindows::AddAttachWindows(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AddAttachWindows)
{
    setWindowTitle("上传附件");
    setWindowTitle("附件上传");
    ui->setupUi(this);
    initSet();
    extern QString backGroundColor;
    this -> setStyleSheet(backGroundColor);
}

AddAttachWindows::~AddAttachWindows()
{
    delete ui;
}

void AddAttachWindows::initSet(){
    allText_btn = this -> findChildren<QPushButton*>();
    for(int i = 0;i < buttonNum ;i++){
         allText_btn[i] -> setStyleSheet( fontColorArgb );
         allText_btn[i] -> setFont( fontType );
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


void AddAttachWindows::on_pushButton_clicked()
{
    QString fileFull, fileName, filePath,fileSuffix;
    QFileInfo fileinfo;
    fileFull = QFileDialog::getOpenFileName(this,tr("file"),"/");  //获取整个文件名
    //fileFull = E:\QtCode\newExample\myTry\新建文本文档.txt

    //获取文件信息
    fileinfo = QFileInfo(fileFull);
    //fileinfo = E:\QtCode\newExample\myTry\新建文本文档.txt

    //获取文件名字
    fileName = fileinfo.fileName();
    //fileName = 新建文本文档.txt

    //获取文件后缀
    fileSuffix = fileinfo.suffix();
    //fileSuffix = txt

    //获取文件绝对路径
    filePath = fileinfo.absolutePath();
    if(!fileFull.isNull())
    {
       QFile file(fileFull);
       if(!file.open(QFile::ReadOnly | QFile::Text))
        {
            QMessageBox::warning(this,tr("Error"),tr("read file error:&1").arg(file.errorString()));
            return;
        }
            QTextStream in(&file);
            QApplication::setOverrideCursor(Qt::WaitCursor);


            ui -> lineEdit->setText(fileFull);
            ui -> FileName ->setText(fileName);
            ui -> FileContext ->setPlainText(in.readAll());

            QApplication::restoreOverrideCursor();

    }
    else
    {
       qDebug()<<"cancel";
    }
}

