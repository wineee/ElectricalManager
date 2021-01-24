#ifndef CLERKSDIALOG_H
#define CLERKSDIALOG_H

#include <QDialog>

namespace Ui {
class ClerksDialog;
}

class ClerksDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ClerksDialog(QWidget *parent = nullptr);
    ~ClerksDialog();
    QString getText(int id);
private:
    Ui::ClerksDialog *ui;
};

#endif // CLERKSDIALOG_H
