#include "costmanagedialog.h"
#include "ui_costmanagedialog.h"

CostManageDialog::CostManageDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::CostManageDialog)
{
    ui->setupUi(this);
}

CostManageDialog::~CostManageDialog()
{
    delete ui;
}

QString CostManageDialog::getText(int id)
{
    switch (id) {
    case 0: return ui->lineEdit_ClientID->text();
    case 1: return ui->lineEdit_minMons->text();
    case 2: return ui->lineEdit_maxMons->text();
    case 3: return ui->lineEdit_minNeed->text();
    case 4: return ui->lineEdit_maxNeed->text();
    case 5: return ui->lineEdit_ChargeSignal->text();
    default: return "";
    }
}
