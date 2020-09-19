#include "mysql.h"

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>


MySql::MySql(){
    QSqlDatabase db;
    // 不能二次创建db，先检查是否已存在。
    if(QSqlDatabase::contains("qt_sql_default_connection"))
      db = QSqlDatabase::database("qt_sql_default_connection");
    else
      db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("localhost");
    db.setDatabaseName("flowermail");
    db.setUserName("root");
    db.setPassword("Mypass@123");
    if (!db.open()){
        qDebug()<<"Failed to connnect to root mysql admin";
    }
    else {
        this->db = db;
    }
}

void MySql::useUsersTable(){
    QSqlQuery query(this->db);
    query.exec("create table if not exists Users("
               "uid varchar(20) primary key, upwd varchar(20) not null, "
               "uques varchar(200), uans varchar(200), "
               "uavataraddr varchar(200), ufriends varchar(200))");
    return;
}

bool MySql::checkUserExit(QString userName, QString passWord){
    QSqlQuery query(this->db);
    query.prepare("select uid, upwd from Users "
                  "where uid=:ph and upwd=:ph");
    query.bindValue(0, userName);
    query.bindValue(1, passWord);
    query.exec();
    if (query.next()){
        return true;
    }
    return false;
}

void MySql::insertUser(QString userName, QString password){
    QSqlQuery query(this->db);
    query.prepare("insert into Users(uid, upwd) "
                  "Values(:ph, :ph)");
    query.bindValue(0, userName);
    query.bindValue(1, password);
    query.exec();
    return;
}
