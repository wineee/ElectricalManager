#include "clientsdialog.h"
#include "ui_clientsdialog.h"

ClientsDialog::ClientsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClientsDialog)
{
    ui->setupUi(this);
}

ClientsDialog::~ClientsDialog()
{
    delete ui;
}

QString ClientsDialog::getText(int id)
{
    switch (id) {
    case 0: return ui->lineEdit_clientsID->text();
    case 1: return ui->lineEdit_clientsName->text();
    case 2: return ui->lineEdit_clientsAddr->text();
    case 3: return ui->lineEdit_clientsTel->text();
    case 4: return ui->lineEdit_clientsminBal->text();
    case 5: return ui->lineEdit_clientsmaxBal->text();
    default: return "";
    }
}
