#include "clerksadddialog.h"
#include "ui_clerksadddialog.h"

ClerksAddDialog::ClerksAddDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ClerksAddDialog)
{
    ui->setupUi(this);
}

ClerksAddDialog::~ClerksAddDialog()
{
    delete ui;
}
