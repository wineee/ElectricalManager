#include "widget.h"
#include "connection.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    if (!createConnection()) {
           //QMessageBox::critical(nullptr,"错误","文件读取失败!","确认");
           return 1;
    }
    Widget w;
    w.show();
    return a.exec();
}
