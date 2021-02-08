#ifndef CONNECTION_H
#define CONNECTION_H

#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>

static bool createConnection()
{
    QSqlDatabase db;
    db = QSqlDatabase::addDatabase("QODBC");
    db.setDatabaseName("test");
    if (!db.open()) {
        QMessageBox::critical(0, QObject::tr("无法打开数据库"),
                              "无法创建数据库连接！ ", QMessageBox::Cancel);
        return false;
    } //下面来创建表
    return true;
}

#endif // CONNECTION_H
