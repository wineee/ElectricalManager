#ifndef CHARGEDIALOG_H
#define CHARGEDIALOG_H

#include <QDialog>

namespace Ui {
class ChargeDialog;
}

class ChargeDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ChargeDialog(QWidget *parent = nullptr);
    ~ChargeDialog();
    QString getText(int id);

private:
    Ui::ChargeDialog *ui;
};

#endif // CHARGEDIALOG_H
