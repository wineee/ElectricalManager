#ifndef EUSEDTDIALOG_H
#define EUSEDTDIALOG_H

#include <QDialog>

namespace Ui {
class EUsedTDialog;
}

class EUsedTDialog : public QDialog
{
    Q_OBJECT

public:
    explicit EUsedTDialog(QWidget *parent = nullptr);
    ~EUsedTDialog();
    QString getText(int id);

private:
    Ui::EUsedTDialog *ui;
};

#endif // EUSEDTDIALOG_H
