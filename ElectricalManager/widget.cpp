#include "widget.h"
#include "ui_widget.h"
#include <QDebug>
#include <QMessageBox>
#include <QSqlError>
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
    modelCostManage->setEditStrategy(QSqlTableModel::OnManualSubmit);
    modelCostManage->select();
    ui->tableViewCostManage->setModel(modelCostManage);

    modelEUsedT = new QSqlTableModel;
    modelEUsedT->setTable("EUsedT");
    modelEUsedT->setEditStrategy(QSqlTableModel::OnManualSubmit);
    modelEUsedT->select();
    ui->tableViewEusedT->setModel(modelEUsedT);

    modelCharge = new QSqlTableModel;
    modelCharge->setTable("Charge");
    modelCharge->setEditStrategy(QSqlTableModel::OnManualSubmit);
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
}


void Widget::on_pushButton_query_clicked()
{
    modelEtype->select();
}

void Widget::on_pushButton_updata_clicked()
{
    modelEtype->database().transaction(); // 开始事务操作
    if (modelEtype->submitAll()) {  //提交所有被修改的数据，然后修改的数据被保存在数据库中
        modelEtype->database().commit(); //提交
    } else {
        modelEtype->database().rollback(); //回滚
        QMessageBox::warning(this, tr("Cached Table"),
                             tr("The database reported an error: %1")
                             .arg(modelEtype->lastError().text()));
    }
}

void Widget::on_pushButton_delete_clicked()
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
        this->on_pushButton_revert_clicked();
    } else {
        this->on_pushButton_updata_clicked();
    }
}

void Widget::on_pushButton_insert_clicked()
{
    int rowNum = modelEtype->rowCount();
    modelEtype->insertRow(rowNum);
}

void Widget::on_pushButton_revert_clicked()
{
    modelEtype->revertAll();
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
    } else {
        modelClerks->database().rollback(); //回滚
        QMessageBox::warning(this, tr("Cached Table"),
                             tr("The database reported an error: %1")
                             .arg(modelClerks->lastError().text()));
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
    } else {
        modelClients->database().rollback(); //回滚
        QMessageBox::warning(this, tr("Cached Table"),
                             tr("The database reported an error: %1")
                             .arg(modelClients->lastError().text()));
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
            modelEUsedT->setFilter(QObject::tr("Mons >= %0").arg(str));
        str = dlg->getText(2);
        if (!str.isEmpty())
            modelEUsedT->setFilter(QObject::tr("Mons <= %0").arg(str));
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
    foreach (QModelIndex index, selected)
    {     int curRow=index.row();
          modelEUsedT->removeRow(curRow);   //删除所有被选中的行
    }
    int ok = QMessageBox::warning(this,tr("删除当前行!"),tr("你确定""删除当前行吗"),
                                   QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::No) {
        this->on_pushButton_revert_EusedT_clicked();
    } else {
        this->on_pushButton_updata_EusedT_clicked();
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
    } else {
        modelEUsedT->database().rollback(); //回滚
        QMessageBox::warning(this, tr("Cached Table"),
                             tr("The database reported an error: %1")
                             .arg(modelEUsedT->lastError().text()));
    }
}

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
    foreach (QModelIndex index, selected)
    {     int curRow=index.row();
          modelCharge->removeRow(curRow);   //删除所有被选中的行
    }
    int ok = QMessageBox::warning(this,tr("删除当前行!"),tr("你确定""删除当前行吗"),
                                   QMessageBox::Yes,QMessageBox::No);
    if(ok == QMessageBox::No) {
        this->on_pushButton_revert_Charge_clicked();
    } else {
        this->on_pushButton_updata_Charge_clicked();
    }
}

void Widget::on_pushButton_insert_Charge_clicked()
{
    //int rowNum = modelCharge->rowCount();
    //modelCharge->insertRow(rowNum);
    ClerksAddDialog *dlg = new ClerksAddDialog;
    int res = dlg->exec();
    if (res == QDialog::Accepted) {

    }
    delete dlg;
}

void Widget::on_pushButton_revert_Charge_clicked()
{
    modelCharge->revertAll();
}

void Widget::on_pushButton_updata_Charge_clicked()
{
    modelCharge->database().transaction(); // 开始事务操作
    if (modelCharge->submitAll()) {  //提交所有被修改的数据，然后修改的数据被保存在数据库中
        modelCharge->database().commit(); //提交
    } else {
        modelCharge->database().rollback(); //回滚
        QMessageBox::warning(this, tr("Cached Table"),
                             tr("The database reported an error: %1")
                             .arg(modelCharge->lastError().text()));
    }
}
