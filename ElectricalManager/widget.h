#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QSqlTableModel>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pushButton_query_clicked();

    void on_pushButton_updata_clicked();

    void on_pushButton_delete_clicked();

    void on_pushButton_insert_clicked();

    void on_pushButton_revert_clicked();

    void on_pushButton_query_Clerks_clicked();

    void on_pushButton_delete_Clerks_clicked();

    void on_pushButton_insert_Clerks_clicked();

    void on_pushButton_revert_Clerks_clicked();

    void on_pushButton_updata_Clerks_clicked();

    void on_pushButton_query_Clients_clicked();

    void on_pushButton_delete_Clients_clicked();

    void on_pushButton_insert_Clients_clicked();

    void on_pushButton_revert_Clients_clicked();

    void on_pushButton_updata_Clients_clicked();

    void on_pushButton_query_EusedT_clicked();

    void on_pushButton_delete_EusedT_clicked();

    void on_pushButton_insert_EusedT_clicked();

    void on_pushButton_revert_EusedT_clicked();

    void on_pushButton_updata_EusedT_clicked();

    void on_pushButton_query_CostManage_clicked();

    //void on_pushButton_delete_CostManage_clicked();

    //void on_pushButton_insert_CostManage_clicked();

    //void on_pushButton_revert_CostManage_clicked();

    //void on_pushButton_updata_CostManage_clicked();

    void on_pushButton_query_Charge_clicked();

    void on_pushButton_delete_Charge_clicked();

    void on_pushButton_insert_Charge_clicked();

    void on_pushButton_revert_Charge_clicked();

    void on_pushButton_updata_Charge_clicked();

private:
    Ui::Widget *ui;
    QSqlTableModel *modelEtype;
    QSqlTableModel *modelClerks;
    QSqlTableModel *modelCharge;
    QSqlTableModel *modelCostManage;
    QSqlTableModel *modelEUsedT;
    QSqlTableModel *modelClients;
};
#endif // WIDGET_H
