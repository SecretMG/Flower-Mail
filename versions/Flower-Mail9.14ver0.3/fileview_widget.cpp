
//fileview_widget.cpp



#include “fileview_widget.h”

#include<QTextCodec>



FileViewWidget::FileViewWidget(QWidget *parent/*=0*/) :QWidget(parent)

{

    //—–实例化对象

    fileLineEdit = new QLineEdit(“/”, this);

    fileListWidget = new QListWidget(this);



    //—布局

    vLayout = new QVBoxLayout(this);

    vLayout->addWidget(fileLineEdit);

    vLayout->addWidget(fileListWidget);



    //–设置对应信号与槽

    connect(fileLineEdit, SIGNAL(returnPressed()),

                this, SLOT(slotDirShow(QDir)));

    connect(fileListWidget, SIGNAL(itemDoubleClicked(QListWidgetItem *)),

                this, SLOT(slotDirShow(QListWidgetItem*)));

    QString rootStr = ”/”;

    QDir rootDir(rootStr);

    QStringList stringlist;

    stringlist << ”*”;

    list = rootDir.entryInfoList(stringlist);

    showFileInfoList(list);



    //—显示布局

    setLayout(vLayout);

    //—-设置窗口属性

    setWindowTitle(”File View”);

}



//–显示当前目录下的所有文件

void FileViewWidget::slotShow(QDir dir)

{

     QStringList stringList;

     stringList << ”*”;

     QFileInfoList InfoList = dir.entryInfoList(stringList, QDir :: AllEntries, QDir :: DirsFirst);

     showFileInfoList(InfoList);

}



//—用双击浏览器中显示的目录进入下一级，或者返回上一级目录。

void FileViewWidget::showFileInfoList(QFileInfoList list)

{

    //–清空列表控件

    fileListWidget->clear();



    //—-取出所有项，按照目录，文件方式添加到控件内

    for (unsigned int i = 0; i < list.count(); i++)

    {

        QFileInfo tmpFileInfo = list.at(i);

        if (tmpFileInfo.isDir())

        {

            QIcon icon(”dir.png”);

            QString fileName = tmpFileInfo.fileName();

            QListWidgetItem*tmpListWidgetItem = new QListWidgetItem(icon, fileName);

            fileListWidget->addItem(tmpListWidgetItem);

        }

        else

        {

            QIcon icon(”file.png”);

            QString fileName = tmpFileInfo.fileName();

            QListWidgetItem*tmpListWidgetItem = new QListWidgetItem(icon, fileName);

            fileListWidget->addItem(tmpListWidgetItem);

        }

    }

}



//—-根据用户的选择显示下一级目录下的文件，

void FileViewWidget::slotDirShow(QListWidgetItem *Item)

{

    //—-保存下一级目录名

    QString string = Item->text();

    QDir dir;

    //—-设置路径为当前目录路径

    dir.setPath(fileLineEdit->text());

    //—–重新设置路径

    dir.cd(string);

    //—-更新当前显示路径， 这里获取的是绝对路径

    fileLineEdit->setText(dir.absolutePath());

    //—显示当前文件目录下的所有文件

    slotShow(dir);

}
