#ifndef CLERKSADDDIALOG_H
#define CLERKSADDDIALOG_H

#include <QDialog>
#include <QDataWidgetMapper>
#include <QSqlTableModel>
#include <QSortFilterProxyModel>
#include <QSqlQuery>
/**
 * 这个应该叫Clients的 起错名字了
 */



namespace Ui {
class ClerksAddDialog;
}

class ClerksAddDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ClerksAddDialog(QWidget *parent = nullptr);
    ~ClerksAddDialog();
    QString getText(int id);

private slots:
    void on_comboBox_ClientID_editTextChanged(const QString &arg1);

    void on_comboBox_Mon_editTextChanged(const QString &arg1);


private:
    Ui::ClerksAddDialog *ui;
    //QDataWidgetMapper *mapper;
    //QSqlTableModel *model;
    //QSortFilterProxyModel *m_filterModel;
    QSqlQuery queryId, queryMons, queryNeed, queryClerk, queryisCharge, queryBalance;
    QSqlQueryModel *modelId, *modelMons, *modelNeed, *modelClerk;
};

#endif // CLERKSADDDIALOG_H
