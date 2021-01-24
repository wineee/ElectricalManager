#ifndef CLERKSADDDIALOG_H
#define CLERKSADDDIALOG_H

#include <QDialog>

namespace Ui {
class ClerksAddDialog;
}

class ClerksAddDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ClerksAddDialog(QWidget *parent = nullptr);
    ~ClerksAddDialog();

private:
    Ui::ClerksAddDialog *ui;
};

#endif // CLERKSADDDIALOG_H
