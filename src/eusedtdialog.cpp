#include "eusedtdialog.h"
#include "ui_eusedtdialog.h"

EUsedTDialog::EUsedTDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::EUsedTDialog)
{
    ui->setupUi(this);
}

EUsedTDialog::~EUsedTDialog()
{
    delete ui;
}

QString EUsedTDialog::getText(int id)
{
    switch (id) {
    case 0: return ui->lineEdit_ClientID->text();
    case 1: return ui->lineEdit_minMons->text();
    case 2: return ui->lineEdit_maxMons->text();
    case 3: return ui->lineEdit_TypeID->text();
    case 4: return ui->lineEdit_minEUsed->text();
    case 5: return ui->lineEdit_maxEUsed->text();
    default: return "";
    }
}
