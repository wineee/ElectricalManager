#include "chargedialog.h"
#include "ui_chargedialog.h"

ChargeDialog::ChargeDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ChargeDialog)
{
    ui->setupUi(this);
}

ChargeDialog::~ChargeDialog()
{
    delete ui;
}

QString ChargeDialog::getText(int id)
{
    switch (id) {
    case 0: return ui->lineEdit_ClientID->text();
    case 1: return ui->lineEdit_minMons->text();
    case 2: return ui->lineEdit_maxMons->text();
    case 3: return ui->lineEdit_minNeed->text();
    case 4: return ui->lineEdit_maxNeed->text();
    case 5: return ui->lineEdit_minActual->text();
    case 6: return ui->lineEdit_maxActual->text();
    case 7: return ui->lineEdit_ClerkID->text();
    default: return "";
    }
}
