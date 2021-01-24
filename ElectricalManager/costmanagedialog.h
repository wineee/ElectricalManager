#ifndef COSTMANAGEDIALOG_H
#define COSTMANAGEDIALOG_H

#include <QDialog>

namespace Ui {
class CostManageDialog;
}

class CostManageDialog : public QDialog
{
    Q_OBJECT

public:
    explicit CostManageDialog(QWidget *parent = nullptr);
    ~CostManageDialog();
    QString getText(int id);

private:
    Ui::CostManageDialog *ui;
};

#endif // COSTMANAGEDIALOG_H
