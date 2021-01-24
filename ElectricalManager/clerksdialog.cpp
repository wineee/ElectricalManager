#include "clerksdialog.h"
#include "ui_clerksdialog.h"

ClerksDialog::ClerksDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClerksDialog)
{
    ui->setupUi(this);
}

ClerksDialog::~ClerksDialog()
{
    delete ui;
}

QString ClerksDialog::getText(int id)
{
    switch (id) {
    case 0: return ui->lineEdit_clerkID->text();
    case 1: return ui->lineEdit_clerkName->text();
    case 2: return ui->lineEdit_clerkAddr->text();
    case 3: return ui->lineEdit_clerkTel->text();
    default: return "";
    }
}
