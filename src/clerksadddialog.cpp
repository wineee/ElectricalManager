#include "clerksadddialog.h"
#include "ui_clerksadddialog.h"
#include <QDebug>

/**
 * 这个应该叫ClientsAddDialog的 起错名字了
 */

ClerksAddDialog::ClerksAddDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClerksAddDialog)
{
    ui->setupUi(this);
    /*model = new QSqlTableModel;
    model->setTable("CostManage");
    model->select();
    mapper = new QDataWidgetMapper;
    mapper->setModel(model);*/
    queryId.exec(tr("select distinct ClientID from CostManage"));
    modelId = new QSqlQueryModel;
    modelId->setQuery(queryId);
    ui->comboBox_ClientID->setModel(modelId);
    ui->comboBox_ClientID->setModelColumn(0);
    //QString s_ClientID = queryId.value(0).toString();

    queryClerk.exec("select ClerkID from Clerks");
    modelClerk = new QSqlQueryModel;
    modelClerk->setQuery(queryClerk);
    ui->comboBox_ClerkId->setModel(modelClerk);
    ui->comboBox_ClerkId->setModelColumn(0);
}

ClerksAddDialog::~ClerksAddDialog()
{
    delete ui;
    delete modelId;
    delete modelClerk;
}

void ClerksAddDialog::on_comboBox_ClientID_editTextChanged(const QString &s_ClientID)
{

    queryMons.exec(tr("select distinct Mons from CostManage where ClientID = '%0'").arg(s_ClientID));
    modelMons = new QSqlQueryModel;
    modelMons->setQuery(queryMons);
    ui->comboBox_Mon->setModel(modelMons);
    ui->comboBox_Mon->setModelColumn(0);
    queryBalance.exec(tr("select Balance from Clients where ClientID = '%0'").arg(s_ClientID));
    if(queryBalance.next())
        ui->lineEdit_Balance->setText(QString::number(queryBalance.value(0).toFloat(), 10, 2));
    else
        ui->lineEdit_Balance->setText(tr("NULL"));
    //  //
    QString s_Mon = ui->comboBox_Mon->currentText();
    queryNeed.exec(tr("select Need from CostManage where ClientID = '%0' and Mons = '%1'").arg(s_ClientID).arg(s_Mon));
    if(queryNeed.next())
        ui->lineEdit_Need->setText(QString::number(queryNeed.value(0).toFloat(), 10, 2));
    else
        ui->lineEdit_Need->setText(tr("NULL"));
    queryisCharge.exec(tr("select ChargeSignal from CostManage where ClientID = '%0' and Mons = '%1'").arg(s_ClientID).arg(s_Mon));
    if(queryisCharge.next())
        ui->lineEdit_isCharge->setText(queryisCharge.value(0).toString());
    else
        ui->lineEdit_isCharge->setText(tr("NULL"));
}

void ClerksAddDialog::on_comboBox_Mon_editTextChanged(const QString &s_Mon)
{
    QString s_ClientID = ui->comboBox_ClientID->currentText();
    queryNeed.exec(tr("select Need from CostManage where ClientID = '%0' and Mons = '%1'").arg(s_ClientID).arg(s_Mon));
    if(queryNeed.next())
        ui->lineEdit_Need->setText(QString::number(queryNeed.value(0).toFloat(), 10, 2));
    else
        ui->lineEdit_Need->setText(tr("NULL"));
    queryisCharge.exec(tr("select ChargeSignal from CostManage where ClientID = '%0' and Mons = '%1'").arg(s_ClientID).arg(s_Mon));
    if(queryisCharge.next())
        ui->lineEdit_isCharge->setText(queryisCharge.value(0).toString());
    else
        ui->lineEdit_isCharge->setText(tr("NULL"));
}

QString ClerksAddDialog::getText(int id) {
    switch (id) {
    case 0: return ui->comboBox_ClientID->currentText();
    case 1: return ui->comboBox_Mon->currentText();
    case 2: return QString::number(ui->doubleSpinBox_Actual->value(), 10, 2);
    case 3: return ui->comboBox_ClerkId->currentText();
    default: return "";
    }
}
