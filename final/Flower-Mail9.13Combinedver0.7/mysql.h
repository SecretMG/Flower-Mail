#ifndef MYSQL_H
#define MYSQL_H

#include <QString>
#include <QSqlDatabase>

class MySql{
public:
    MySql();
    void useUsersTable();
    bool checkUserExit(QString userName, QString passWord);
    void insertUser(QString userName, QString password);
private:
    QSqlDatabase db;
};



#endif // MYSQL_H
