#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
#include <QSqlQuery>
#include "clerksdialog.h"
#include "clientsdialog.h"
#include "chargedialog.h"
#include "costmanagedialog.h"
#include "eusedtdialog.h"
#include "clerksadddialog.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->tabWidget->resize(this->size());

    modelEtype = new QSqlTableModel;
    modelEtype->setTable("EType");
    //modelEtype->setFilter("Sage > 18");
    //modelEtype->setSort(0, Qt::DescendingOrder);
    modelEtype->setEditStrategy(QSqlTableModel::OnManualSubmit);//设置保存策略为手动提交
    modelEtype->select();
    ui->tableViewEtype->setModel(modelEtype);

    modelClerks = new QSqlTableModel;
    modelClerks->setTable("Clerks");
    modelClerks->setEditStrategy(QSqlTableModel::OnManualSubmit);
    modelClerks->select();
    ui->tableViewClerks->setModel(modelClerks);
    //modelClerks->select();

    modelCostManage = new QSqlTableModel;
    modelCostManage->setTable("CostManage");
    //modelCostManage->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableViewCostManage->setEditTriggers(QAbstractItemView::NoEditTriggers);
    modelCostManage->select();
    ui->tableViewCostManage->setModel(modelCostManage);

    modelEUsedT = new QSqlTableModel;
    modelEUsedT->setTable("EUsedT");
    modelEUsedT->setEditStrategy(QSqlTableModel::OnManualSubmit);
    modelEUsedT->select();
    ui->tableViewEusedT->setModel(modelEUsedT);

    modelCharge = new QSqlTableModel;
    modelCharge->setTable("Charge");
    //modelCharge->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableViewCharge->setEditTriggers(QAbstractItemView::NoEditTriggers);
    modelCharge->select();
    ui->tableViewCharge->setModel(modelCharge);

    modelClients = new QSqlTableModel;
    modelClients->setTable("Clients");
    modelClients->setEditStrategy(QSqlTableModel::OnManualSubmit);
    modelClients->select();
    ui->tableViewClients->setModel(modelClients);

}

Widget::~Widget()
{
    delete ui;
    delete modelEtype;
    delete modelClerks;
    delete modelCharge;
    delete modelCostManage;
    delete modelEUsedT;
    delete modelClients;
}

void Widget::selectAll() {
    modelCharge->select();
    modelClerks->select();
    modelClients->select();
    modelCostManage->select();
    modelEUsedT->select();
    modelEtype->select();
}

void Widget::on_pushButton_query_Etype_clicked()
{
    modelEtype->select();
}

void Widget::on_pushButton_delete_Etype_clicked()
{
    QItemSelectionModel *selections = ui->tableViewEtype->selectionModel();  //返回当前的选择模式
    QModelIndexList selected = selections->selectedIndexes();    //返回所有选定模型项目索引列表
    foreach (QModelIndex index, selected)
    {     int curRow=index.row();
          modelEtype->removeRow(curRow);   //删除所有被选中的行
    }
    int ok = QMessageBox::warning(this,tr("删除当前行!"),tr("你确定""删除当前行吗"),
                                   QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::No) {
        this->on_pushButton_revert_Etype_clicked();
    } else {
        this->on_pushButton_updata_Etype_clicked();
    }
}

void Widget::on_pushButton_insert_Etype_clicked()
{
    int rowNum = modelEtype->rowCount();
    modelEtype->insertRow(rowNum);
}

void Widget::on_pushButton_revert_Etype_clicked()
{
    modelEtype->revertAll();
}

void Widget::on_pushButton_updata_Etype_clicked()
{
   // qDebug()<<"rgeg";
    modelEtype->database().transaction(); // 开始事务操作
    if (modelEtype->submitAll()) {  //提交所有被修改的数据，然后修改的数据被保存在数据库中
        modelEtype->database().commit(); //提交
        this->selectAll(); // 解决windows/sql-server 提交后表会清空的问题
        QMessageBox::about(NULL, "成功", "操作成功!");
    } else {
        modelEtype->database().rollback(); //回滚
        QMessageBox::warning(this, tr("Cached Table"),
                             tr("The database reported an error: %1")
                             .arg(modelEtype->lastError().text()));
        this->selectAll();
    }
}

///////////////////////  Clerks ///////////////////////

void Widget::on_pushButton_query_Clerks_clicked()
{
    ClerksDialog *dlg = new ClerksDialog;
    int res = dlg->exec();
    if (res == QDialog::Accepted) {
        modelClerks->setFilter(nullptr);
        QString str = dlg->getText(0);
        if (!str.isEmpty())
            modelClerks->setFilter(QObject::tr("ClerkID='%0'").arg(str));
        str = dlg->getText(1);
        if (!str.isEmpty())
            modelClerks->setFilter(QObject::tr("ClerkName = '%0'").arg(str));
        str = dlg->getText(2);
        if (!str.isEmpty())
            modelClerks->setFilter(QObject::tr("ClerkAddr='%0'").arg(str));
        str = dlg->getText(3);
        if (!str.isEmpty())
            modelClerks->setFilter(QObject::tr("ClerkTel='%0'").arg(str));
        modelClerks->select();
    }
    delete dlg;
}

void Widget::on_pushButton_delete_Clerks_clicked()
{
    QItemSelectionModel *selections = ui->tableViewClerks->selectionModel();  //返回当前的选择模式
    QModelIndexList selected = selections->selectedIndexes();    //返回所有选定模型项目索引列表
    foreach (QModelIndex index, selected)
    {     int curRow=index.row();
          modelClerks->removeRow(curRow);   //删除所有被选中的行
    }
    int ok = QMessageBox::warning(this,tr("删除当前行!"),tr("你确定""删除当前行吗"),
                                   QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::No) {
        this->on_pushButton_revert_Clerks_clicked();
    } else {
        this->on_pushButton_updata_Clerks_clicked();
    }
}

void Widget::on_pushButton_insert_Clerks_clicked()
{
    int rowNum = modelClerks->rowCount();
    modelClerks->insertRow(rowNum);
}

void Widget::on_pushButton_revert_Clerks_clicked()
{
    modelClerks->revertAll();
}

void Widget::on_pushButton_updata_Clerks_clicked()
{
    modelClerks->database().transaction(); // 开始事务操作
    if (modelClerks->submitAll()) {  //提交所有被修改的数据，然后修改的数据被保存在数据库中
        modelClerks->database().commit(); //提交
        this->selectAll();
        QMessageBox::about(NULL, "成功", "操作成功!");
    } else {
        modelClerks->database().rollback(); //回滚
        QMessageBox::warning(this, tr("Cached Table"),
                             tr("The database reported an error: %1")
                             .arg(modelClerks->lastError().text()));
        this->selectAll();
    }
}

/////////////////////////  Clients  ///////////////////////////////


void Widget::on_pushButton_query_Clients_clicked()
{
    ClientsDialog *dlg = new ClientsDialog;
    int res = dlg->exec();
    if (res == QDialog::Accepted) {
        modelClients->setFilter(nullptr);
        QString str = dlg->getText(0);
        if (!str.isEmpty())
            modelClients->setFilter(QObject::tr("ClientID = '%0'").arg(str));
        str = dlg->getText(1);
        if (!str.isEmpty())
            modelClients->setFilter(QObject::tr("ClientName = '%0'").arg(str));
        str = dlg->getText(2);
        if (!str.isEmpty())
            modelClients->setFilter(QObject::tr("ClientAddr = '%0'").arg(str));
        str = dlg->getText(3);
        if (!str.isEmpty())
            modelClients->setFilter(QObject::tr("ClientTel = '%0'").arg(str));
        str = dlg->getText(4);
        if (!str.isEmpty())
            modelClients->setFilter(QObject::tr("Balance >= %0").arg(str));
        str = dlg->getText(5);
        if (!str.isEmpty())
            modelClients->setFilter(QObject::tr("Balance <= %0").arg(str));
        modelClients->select();
    }
    delete dlg;
}

void Widget::on_pushButton_delete_Clients_clicked()
{
    QItemSelectionModel *selections = ui->tableViewClients->selectionModel();  //返回当前的选择模式
    QModelIndexList selected = selections->selectedIndexes();    //返回所有选定模型项目索引列表
    foreach (QModelIndex index, selected)
    {
        int curRow=index.row();
        modelClients->removeRow(curRow);   //删除所有被选中的行
    }
    int ok = QMessageBox::warning(this,tr("删除当前行!"),tr("你确定""删除当前行吗"),
                                   QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::No) {
        this->on_pushButton_revert_Clients_clicked();
    } else {
        this->on_pushButton_updata_Clients_clicked();
    }
}

void Widget::on_pushButton_insert_Clients_clicked()
{
    int rowNum = modelClients->rowCount();
    modelClients->insertRow(rowNum);
}

void Widget::on_pushButton_revert_Clients_clicked()
{
    modelClients->revertAll();
}

void Widget::on_pushButton_updata_Clients_clicked()
{
    modelClients->database().transaction(); // 开始事务操作
    if (modelClients->submitAll()) {  //提交所有被修改的数据，然后修改的数据被保存在数据库中
        modelClients->database().commit(); //提交
        this->selectAll();
        QMessageBox::about(NULL, "成功", "操作成功!");
    } else {
        modelClients->database().rollback(); //回滚
        QMessageBox::warning(this, tr("Cached Table"),
                             tr("The database reported an error: %1")
                             .arg(modelClients->lastError().text()));
        this->selectAll();
    }
}

/////////////////////////  EusedT  ///////////////////////////////


void Widget::on_pushButton_query_EusedT_clicked()
{
    EUsedTDialog *dlg = new EUsedTDialog;
    int res = dlg->exec();
    if (res == QDialog::Accepted) {
        modelEUsedT->setFilter(nullptr);

        QString str = dlg->getText(0);
        if (!str.isEmpty())
            modelEUsedT->setFilter(QObject::tr("ClientID = '%0'").arg(str));
        str = dlg->getText(1);
        if (!str.isEmpty())
            modelEUsedT->setFilter(QObject::tr("Mons >= '%0'").arg(str));
        str = dlg->getText(2);
        if (!str.isEmpty())
            modelEUsedT->setFilter(QObject::tr("Mons <= '%0'").arg(str));
        str = dlg->getText(3);
        if (!str.isEmpty())
            modelEUsedT->setFilter(QObject::tr("TypeID ='%0'").arg(str));
        str = dlg->getText(4);
        if (!str.isEmpty())
            modelEUsedT->setFilter(QObject::tr("EUsed >= %0").arg(str));
        str = dlg->getText(5);
        if (!str.isEmpty())
            modelEUsedT->setFilter(QObject::tr("EUsed <= %0").arg(str));
        modelEUsedT->select();
    }
    delete dlg;
}

void Widget::on_pushButton_delete_EusedT_clicked()
{
    QItemSelectionModel *selections = ui->tableViewEusedT->selectionModel();  //返回当前的选择模式
    QModelIndexList selected = selections->selectedIndexes();    //返回所有选定模型项目索引列表

    int ok = QMessageBox::warning(this,tr("删除当前行!"),tr("你确定""删除当前行吗"),
                                   QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::No) {
        this->on_pushButton_revert_EusedT_clicked();
    } else {
        int ret = QMessageBox::warning(this,tr("警告"),tr("注意""相关的费用管理信息记录会被删除"),
                                       QMessageBox::Yes,QMessageBox::No);
        if (ret == QMessageBox::No) {
            this->on_pushButton_revert_EusedT_clicked();
        } else {
            foreach (QModelIndex index, selected)
            {
                int curRow=index.row();
                QString s_ClientID = modelEUsedT->record(curRow).value("ClientID").toString();
                QString s_Mons= modelEUsedT->record(curRow).value("Mons").toString();
                QSqlQuery qry;
                qry.exec(tr("select * from CostManage where ClientID = '%0' and Mons = '%1' and ChargeSignal = '已收'")
                         .arg(s_ClientID, s_Mons));
                if (qry.next()) {
                    QMessageBox::warning(this,tr("警告"),tr("含有已缴费用户，无法删除"),
                                                           QMessageBox::Yes);
                    this->on_pushButton_revert_EusedT_clicked();
                    return ;
                }
            }
            foreach (QModelIndex index, selected)
            {
                int curRow=index.row();
                QString s_ClientID = modelEUsedT->record(curRow).value("ClientID").toString();
                QString s_Mons= modelEUsedT->record(curRow).value("Mons").toString();
                QSqlQuery qry;
                bool ok = qry.exec(tr("delete from CostManage where ClientID = '%0' and Mons = '%1'").arg(s_ClientID, s_Mons));
                if (!ok) {
                    QMessageBox::warning(this, tr("Cached Table"),
                                         tr("The database reported an error: %1")
                                         .arg(qry.lastError().text()));
                }
            }
            foreach (QModelIndex index, selected)
            {
                int curRow=index.row();
                modelEUsedT->removeRow(curRow);   //删除所有被选中的行
            }
            this->on_pushButton_updata_EusedT_clicked();
        }
    }
}



void Widget::on_pushButton_insert_EusedT_clicked()
{
    int rowNum = modelEUsedT->rowCount();
    modelEUsedT->insertRow(rowNum);
}

void Widget::on_pushButton_revert_EusedT_clicked()
{
    modelEUsedT->revertAll();
}

void Widget::on_pushButton_updata_EusedT_clicked()
{
    modelEUsedT->database().transaction(); // 开始事务操作
    if (modelEUsedT->submitAll()) {  //提交所有被修改的数据，然后修改的数据被保存在数据库中
        modelEUsedT->database().commit(); //提交
        this->selectAll();
        QMessageBox::about(NULL, "成功", "操作成功!");
    } else {
        modelEUsedT->database().rollback(); //回滚
        QMessageBox::warning(this, tr("Cached Table"),
                             tr("The database reported an error: %1")
                             .arg(modelEUsedT->lastError().text()));
        this->selectAll();
    }
}
//void Widget::on_pushButton_updata_clicked()
//{

//}


/////////////////////////  CostManage  ///////////////////////////////


void Widget::on_pushButton_query_CostManage_clicked()
{
    CostManageDialog *dlg = new CostManageDialog;
    int res = dlg->exec();
    if (res == QDialog::Accepted) {
        modelCostManage->setFilter(nullptr);
        QString str = dlg->getText(0);
        if (!str.isEmpty())
            modelCostManage->setFilter(QObject::tr("ClientID = '%0'").arg(str));
        str = dlg->getText(1);
        if (!str.isEmpty())
            modelCostManage->setFilter(QObject::tr("Mons >= '%0'").arg(str));
        str = dlg->getText(2);
        if (!str.isEmpty())
            modelCostManage->setFilter(QObject::tr("Mons <= '%0'").arg(str));
        str = dlg->getText(3);
        if (!str.isEmpty())
            modelCostManage->setFilter(QObject::tr("Need >= %0").arg(str));
        str = dlg->getText(4);
        if (!str.isEmpty())
            modelCostManage->setFilter(QObject::tr("Need <= %0").arg(str));
        str = dlg->getText(5);
        if (!str.isEmpty())
            modelCostManage->setFilter(QObject::tr("ChargeSignal = '%0'").arg(str));
        modelCostManage->select();
    }
    delete dlg;
}
/*
void Widget::on_pushButton_delete_CostManage_clicked()
{
    QItemSelectionModel *selections = ui->tableViewCostManage->selectionModel();  //返回当前的选择模式
    QModelIndexList selected = selections->selectedIndexes();    //返回所有选定模型项目索引列表
    foreach (QModelIndex index, selected)
    {     int curRow=index.row();
          modelCostManage->removeRow(curRow);   //删除所有被选中的行
    }
    int ok = QMessageBox::warning(this,tr("删除当前行!"),tr("你确定""删除当前行吗"),
                                   QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::No) {
        this->on_pushButton_revert_CostManage_clicked();
    } else {
        this->on_pushButton_updata_CostManage_clicked();
    }
}

void Widget::on_pushButton_insert_CostManage_clicked()
{
    int rowNum = modelCostManage->rowCount();
    modelCostManage->insertRow(rowNum);
}

void Widget::on_pushButton_revert_CostManage_clicked()
{
    modelCostManage->revertAll();
}

void Widget::on_pushButton_updata_CostManage_clicked()
{
    modelCostManage->database().transaction(); // 开始事务操作
    if (modelCostManage->submitAll()) {  //提交所有被修改的数据，然后修改的数据被保存在数据库中
        modelCostManage->database().commit(); //提交
    } else {
        modelCostManage->database().rollback(); //回滚
        QMessageBox::warning(this, tr("Cached Table"),
                             tr("The database reported an error: %1")
                             .arg(modelCostManage->lastError().text()));
    }
}
*/
/////////////////////////  Charge  ///////////////////////////////


void Widget::on_pushButton_query_Charge_clicked()
{
    ChargeDialog *dlg = new ChargeDialog;
    int res = dlg->exec();
    if (res == QDialog::Accepted) {
        modelCharge->setFilter(nullptr);
        QString str = dlg->getText(0);
        if (!str.isEmpty())
            modelCharge->setFilter(QObject::tr("ClientID = '%0'").arg(str));
        str = dlg->getText(1);
        if (!str.isEmpty())
            modelCharge->setFilter(QObject::tr("Mons >= '%0'").arg(str));
        str = dlg->getText(2);
        if (!str.isEmpty())
            modelCharge->setFilter(QObject::tr("Mons <= '%0'").arg(str));
        str = dlg->getText(3);
        if (!str.isEmpty())
            modelCharge->setFilter(QObject::tr("Need >= %0").arg(str));
        str = dlg->getText(4);
        if (!str.isEmpty())
            modelCharge->setFilter(QObject::tr("Need <= %0").arg(str));
        str = dlg->getText(5);
        if (!str.isEmpty())
            modelCharge->setFilter(QObject::tr("Actual >= %0").arg(str));
        str = dlg->getText(6);
        if (!str.isEmpty())
            modelCharge->setFilter(QObject::tr("Actual <= %0").arg(str));
        str = dlg->getText(7);
        if (!str.isEmpty())
            modelCharge->setFilter(QObject::tr("ClerkID = '%0'").arg(str));
        modelCharge->select();
    }
    delete dlg;
}

void Widget::on_pushButton_delete_Charge_clicked()
{
    QItemSelectionModel *selections = ui->tableViewCharge->selectionModel();  //返回当前的选择模式
    QModelIndexList selected = selections->selectedIndexes();    //返回所有选定模型项目索引列表
    int ok = QMessageBox::warning(this,tr("删除当前行!"),tr("你确定""删除当前行吗"),
                                   QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::No) {
       // this->on_pushButton_revert_Charge_clicked();
    } else {
        foreach (QModelIndex index, selected)
        {
            int curRow=index.row();
            modelCharge->removeRow(curRow);   //删除所有被选中的行
        }
        this->pushButton_updata_Charge_clicked();
    }
}

void Widget::on_pushButton_insert_Charge_clicked()
{
    //int rowNum = modelCharge->rowCount();
    //modelCharge->insertRow(rowNum);
    ClerksAddDialog *dlg = new ClerksAddDialog;
    int res = dlg->exec();
    if (res == QDialog::Accepted) {
        QString s_ClientID = dlg->getText(0);
        QString s_Mons = dlg->getText(1);
        QString s_Actual = dlg->getText(2);
        QString s_ClerkID = dlg->getText(3);
        QSqlQuery query;
        bool ok = query.exec(tr("INSERT INTO Charge(ClientID, Mons, Actual, ClerkID) VALUES ('%0', '%1', %2, '%3')")
                   .arg(s_ClientID, s_Mons, s_Actual, s_ClerkID));
        if (!ok) {
            QMessageBox::warning(this, tr("INSERT Charge"),
                                 tr("The database reported an error: %1")
                                 .arg(query.lastError().text()));
        } else {
            QMessageBox::about(NULL, "成功", "操作成功!");
        }
        this->selectAll();
    }
    delete dlg;
}

void Widget::pushButton_revert_Charge_clicked()
{
    modelCharge->revertAll();
}

void Widget::pushButton_updata_Charge_clicked()
{
    modelCharge->database().transaction(); // 开始事务操作
    if (modelCharge->submitAll()) {  //提交所有被修改的数据，然后修改的数据被保存在数据库中
        modelCharge->database().commit(); //提交
        this->selectAll();
        QMessageBox::about(NULL, "成功", "操作成功!");
    } else {
        modelCharge->database().rollback(); //回滚
        QMessageBox::warning(this, tr("Cached Table"),
                             tr("The database reported an error: %1")
                             .arg(modelCharge->lastError().text()));
        this->selectAll();
    }
}

/**
USE [E_M]
GO
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
ALTER PROCEDURE [dbo].[Get_NeedActual]
    (
       @Mons VARCHAR(10)
    )
AS
BEGIN
    SELECT SUM(Need) Need,SUM(Actual) Actual
    FROM Charge
    WHERE Mons = @Mons;
END
*/

void Widget::on_pushButton_NeedActual_clicked()
{
    QSqlQuery query;
    QString mon = ui->lineEdit_mons->text();
    query.prepare("exec Get_NeedActual ?");
    query.bindValue(0, /*"2020-11"*/mon, QSql::In);
    //  query.bindValue(1, 0, QSql::Out);
    bool ok = query.exec();
    if (ok) {
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery(query);
        ui->tableViewQuery->setModel(model);
      //  while(query.next())
      //    qDebug()<<" "<< query.value(0) << " " << query.value(1) << "\n";
    } else {
        QMessageBox::warning(this, tr("Error!"),
                             tr("The database reported an error: %1")
                             .arg(query.lastError().text()));
    }
}

/*
USE [E_M]
GO
SET ANSI_NULLS ON
GO
SET QUOTED_IDENTIFIER ON
GO
ALTER PROCEDURE [dbo].[Get_NoCharge]
    (
       @Mons VARCHAR(10)
    )
AS
BEGIN
    SELECT Clients.ClientID,ClientName,ClientAddr,ClientTel,Balance
    FROM Clients,CostManage
    WHERE Mons = @Mons
    AND Clients.ClientID=CostManage.ClientID
    AND ChargeSignal = '未收';
END
*/

void Widget::on_pushButton_NoCharge_clicked()
{
    QSqlQuery query;
    QString mon = ui->lineEdit_mons->text();
    query.prepare("exec Get_NoCharge ?");
    query.bindValue(0, mon, QSql::In);
    bool ok = query.exec();
    if (ok) {
        QSqlQueryModel *model = new QSqlQueryModel;
        model->setQuery(query);
        ui->tableViewQuery->setModel(model);
    } else {
        QMessageBox::warning(this, tr("Error!"),
                             tr("The database reported an error: %1")
                             .arg(query.lastError().text()));
    }
}

