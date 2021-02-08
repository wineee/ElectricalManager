/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableViewEtype;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *pushButton_query;
    QPushButton *pushButton_delete;
    QPushButton *pushButton_insert;
    QPushButton *pushButton_revert;
    QPushButton *pushButton_updata;
    QWidget *tab_2;
    QTableView *tableViewClerks;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_query_Clerks;
    QPushButton *pushButton_delete_Clerks;
    QPushButton *pushButton_insert_Clerks;
    QPushButton *pushButton_revert_Clerks;
    QPushButton *pushButton_updata_Clerks;
    QWidget *tab_3;
    QTableView *tableViewClients;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QPushButton *pushButton_query_Clients;
    QPushButton *pushButton_delete_Clients;
    QPushButton *pushButton_insert_Clients;
    QPushButton *pushButton_revert_Clients;
    QPushButton *pushButton_updata_Clients;
    QWidget *tab_4;
    QTableView *tableViewEusedT;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QPushButton *pushButton_query_EusedT;
    QPushButton *pushButton_delete_EusedT;
    QPushButton *pushButton_insert_EusedT;
    QPushButton *pushButton_revert_EusedT;
    QPushButton *pushButton_updata_EusedT;
    QWidget *tab_5;
    QTableView *tableViewCostManage;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_8;
    QPushButton *pushButton_query_CostManage;
    QWidget *tab_6;
    QTableView *tableViewCharge;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_9;
    QPushButton *pushButton_query_Charge;
    QPushButton *pushButton_delete_Charge;
    QPushButton *pushButton_insert_Charge;
    QPushButton *pushButton_revert_Charge;
    QPushButton *pushButton_updata_Charge;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(904, 540);
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(Widget->sizePolicy().hasHeightForWidth());
        Widget->setSizePolicy(sizePolicy);
        tabWidget = new QTabWidget(Widget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 2, 901, 531));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy1);
        tabWidget->setTabBarAutoHide(false);
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableViewEtype = new QTableView(tab);
        tableViewEtype->setObjectName(QString::fromUtf8("tableViewEtype"));
        tableViewEtype->setGeometry(QRect(50, 60, 600, 400));
        tableViewEtype->horizontalHeader()->setMinimumSectionSize(41);
        verticalLayoutWidget = new QWidget(tab);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(700, 100, 160, 301));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_query = new QPushButton(verticalLayoutWidget);
        pushButton_query->setObjectName(QString::fromUtf8("pushButton_query"));

        verticalLayout->addWidget(pushButton_query);

        pushButton_delete = new QPushButton(verticalLayoutWidget);
        pushButton_delete->setObjectName(QString::fromUtf8("pushButton_delete"));

        verticalLayout->addWidget(pushButton_delete);

        pushButton_insert = new QPushButton(verticalLayoutWidget);
        pushButton_insert->setObjectName(QString::fromUtf8("pushButton_insert"));

        verticalLayout->addWidget(pushButton_insert);

        pushButton_revert = new QPushButton(verticalLayoutWidget);
        pushButton_revert->setObjectName(QString::fromUtf8("pushButton_revert"));

        verticalLayout->addWidget(pushButton_revert);

        pushButton_updata = new QPushButton(verticalLayoutWidget);
        pushButton_updata->setObjectName(QString::fromUtf8("pushButton_updata"));

        verticalLayout->addWidget(pushButton_updata);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tableViewClerks = new QTableView(tab_2);
        tableViewClerks->setObjectName(QString::fromUtf8("tableViewClerks"));
        tableViewClerks->setGeometry(QRect(50, 60, 600, 400));
        verticalLayoutWidget_2 = new QWidget(tab_2);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(700, 100, 160, 301));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        pushButton_query_Clerks = new QPushButton(verticalLayoutWidget_2);
        pushButton_query_Clerks->setObjectName(QString::fromUtf8("pushButton_query_Clerks"));

        verticalLayout_2->addWidget(pushButton_query_Clerks);

        pushButton_delete_Clerks = new QPushButton(verticalLayoutWidget_2);
        pushButton_delete_Clerks->setObjectName(QString::fromUtf8("pushButton_delete_Clerks"));

        verticalLayout_2->addWidget(pushButton_delete_Clerks);

        pushButton_insert_Clerks = new QPushButton(verticalLayoutWidget_2);
        pushButton_insert_Clerks->setObjectName(QString::fromUtf8("pushButton_insert_Clerks"));

        verticalLayout_2->addWidget(pushButton_insert_Clerks);

        pushButton_revert_Clerks = new QPushButton(verticalLayoutWidget_2);
        pushButton_revert_Clerks->setObjectName(QString::fromUtf8("pushButton_revert_Clerks"));

        verticalLayout_2->addWidget(pushButton_revert_Clerks);

        pushButton_updata_Clerks = new QPushButton(verticalLayoutWidget_2);
        pushButton_updata_Clerks->setObjectName(QString::fromUtf8("pushButton_updata_Clerks"));

        verticalLayout_2->addWidget(pushButton_updata_Clerks);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tableViewClients = new QTableView(tab_3);
        tableViewClients->setObjectName(QString::fromUtf8("tableViewClients"));
        tableViewClients->setGeometry(QRect(50, 60, 600, 400));
        tableViewClients->horizontalHeader()->setMinimumSectionSize(41);
        verticalLayoutWidget_3 = new QWidget(tab_3);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(690, 100, 160, 301));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_query_Clients = new QPushButton(verticalLayoutWidget_3);
        pushButton_query_Clients->setObjectName(QString::fromUtf8("pushButton_query_Clients"));

        verticalLayout_3->addWidget(pushButton_query_Clients);

        pushButton_delete_Clients = new QPushButton(verticalLayoutWidget_3);
        pushButton_delete_Clients->setObjectName(QString::fromUtf8("pushButton_delete_Clients"));

        verticalLayout_3->addWidget(pushButton_delete_Clients);

        pushButton_insert_Clients = new QPushButton(verticalLayoutWidget_3);
        pushButton_insert_Clients->setObjectName(QString::fromUtf8("pushButton_insert_Clients"));

        verticalLayout_3->addWidget(pushButton_insert_Clients);

        pushButton_revert_Clients = new QPushButton(verticalLayoutWidget_3);
        pushButton_revert_Clients->setObjectName(QString::fromUtf8("pushButton_revert_Clients"));

        verticalLayout_3->addWidget(pushButton_revert_Clients);

        pushButton_updata_Clients = new QPushButton(verticalLayoutWidget_3);
        pushButton_updata_Clients->setObjectName(QString::fromUtf8("pushButton_updata_Clients"));

        verticalLayout_3->addWidget(pushButton_updata_Clients);

        tabWidget->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        tableViewEusedT = new QTableView(tab_4);
        tableViewEusedT->setObjectName(QString::fromUtf8("tableViewEusedT"));
        tableViewEusedT->setGeometry(QRect(50, 60, 600, 400));
        tableViewEusedT->horizontalHeader()->setMinimumSectionSize(41);
        verticalLayoutWidget_7 = new QWidget(tab_4);
        verticalLayoutWidget_7->setObjectName(QString::fromUtf8("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(700, 90, 160, 301));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        pushButton_query_EusedT = new QPushButton(verticalLayoutWidget_7);
        pushButton_query_EusedT->setObjectName(QString::fromUtf8("pushButton_query_EusedT"));

        verticalLayout_7->addWidget(pushButton_query_EusedT);

        pushButton_delete_EusedT = new QPushButton(verticalLayoutWidget_7);
        pushButton_delete_EusedT->setObjectName(QString::fromUtf8("pushButton_delete_EusedT"));

        verticalLayout_7->addWidget(pushButton_delete_EusedT);

        pushButton_insert_EusedT = new QPushButton(verticalLayoutWidget_7);
        pushButton_insert_EusedT->setObjectName(QString::fromUtf8("pushButton_insert_EusedT"));

        verticalLayout_7->addWidget(pushButton_insert_EusedT);

        pushButton_revert_EusedT = new QPushButton(verticalLayoutWidget_7);
        pushButton_revert_EusedT->setObjectName(QString::fromUtf8("pushButton_revert_EusedT"));

        verticalLayout_7->addWidget(pushButton_revert_EusedT);

        pushButton_updata_EusedT = new QPushButton(verticalLayoutWidget_7);
        pushButton_updata_EusedT->setObjectName(QString::fromUtf8("pushButton_updata_EusedT"));

        verticalLayout_7->addWidget(pushButton_updata_EusedT);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        tableViewCostManage = new QTableView(tab_5);
        tableViewCostManage->setObjectName(QString::fromUtf8("tableViewCostManage"));
        tableViewCostManage->setGeometry(QRect(50, 60, 600, 400));
        tableViewCostManage->horizontalHeader()->setMinimumSectionSize(41);
        verticalLayoutWidget_8 = new QWidget(tab_5);
        verticalLayoutWidget_8->setObjectName(QString::fromUtf8("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(700, 100, 160, 301));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        pushButton_query_CostManage = new QPushButton(verticalLayoutWidget_8);
        pushButton_query_CostManage->setObjectName(QString::fromUtf8("pushButton_query_CostManage"));

        verticalLayout_8->addWidget(pushButton_query_CostManage);

        tabWidget->addTab(tab_5, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QString::fromUtf8("tab_6"));
        tableViewCharge = new QTableView(tab_6);
        tableViewCharge->setObjectName(QString::fromUtf8("tableViewCharge"));
        tableViewCharge->setGeometry(QRect(50, 60, 600, 400));
        tableViewCharge->horizontalHeader()->setMinimumSectionSize(41);
        verticalLayoutWidget_9 = new QWidget(tab_6);
        verticalLayoutWidget_9->setObjectName(QString::fromUtf8("verticalLayoutWidget_9"));
        verticalLayoutWidget_9->setGeometry(QRect(700, 60, 160, 381));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        pushButton_query_Charge = new QPushButton(verticalLayoutWidget_9);
        pushButton_query_Charge->setObjectName(QString::fromUtf8("pushButton_query_Charge"));

        verticalLayout_9->addWidget(pushButton_query_Charge);

        pushButton_delete_Charge = new QPushButton(verticalLayoutWidget_9);
        pushButton_delete_Charge->setObjectName(QString::fromUtf8("pushButton_delete_Charge"));

        verticalLayout_9->addWidget(pushButton_delete_Charge);

        pushButton_insert_Charge = new QPushButton(verticalLayoutWidget_9);
        pushButton_insert_Charge->setObjectName(QString::fromUtf8("pushButton_insert_Charge"));

        verticalLayout_9->addWidget(pushButton_insert_Charge);

        pushButton_revert_Charge = new QPushButton(verticalLayoutWidget_9);
        pushButton_revert_Charge->setObjectName(QString::fromUtf8("pushButton_revert_Charge"));

        verticalLayout_9->addWidget(pushButton_revert_Charge);

        pushButton_updata_Charge = new QPushButton(verticalLayoutWidget_9);
        pushButton_updata_Charge->setObjectName(QString::fromUtf8("pushButton_updata_Charge"));

        verticalLayout_9->addWidget(pushButton_updata_Charge);

        tabWidget->addTab(tab_6, QString());

        retranslateUi(Widget);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "ElectricalManager", nullptr));
        pushButton_query->setText(QCoreApplication::translate("Widget", "\346\237\245\350\257\242", nullptr));
        pushButton_delete->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244", nullptr));
        pushButton_insert->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240", nullptr));
        pushButton_revert->setText(QCoreApplication::translate("Widget", "\346\222\244\351\224\200", nullptr));
        pushButton_updata->setText(QCoreApplication::translate("Widget", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QCoreApplication::translate("Widget", "\347\224\250\347\224\265\347\261\273\345\236\213", nullptr));
        pushButton_query_Clerks->setText(QCoreApplication::translate("Widget", "\346\237\245\350\257\242", nullptr));
        pushButton_delete_Clerks->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244", nullptr));
        pushButton_insert_Clerks->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240", nullptr));
        pushButton_revert_Clerks->setText(QCoreApplication::translate("Widget", "\346\222\244\351\224\200", nullptr));
        pushButton_updata_Clerks->setText(QCoreApplication::translate("Widget", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QCoreApplication::translate("Widget", "\344\270\232\345\212\241\345\221\230", nullptr));
        pushButton_query_Clients->setText(QCoreApplication::translate("Widget", "\346\237\245\350\257\242", nullptr));
        pushButton_delete_Clients->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244", nullptr));
        pushButton_insert_Clients->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240", nullptr));
        pushButton_revert_Clients->setText(QCoreApplication::translate("Widget", "\346\222\244\351\224\200", nullptr));
        pushButton_updata_Clients->setText(QCoreApplication::translate("Widget", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QCoreApplication::translate("Widget", "\345\256\242\346\210\267\344\277\241\346\201\257", nullptr));
        pushButton_query_EusedT->setText(QCoreApplication::translate("Widget", "\346\237\245\350\257\242", nullptr));
        pushButton_delete_EusedT->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244", nullptr));
        pushButton_insert_EusedT->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240", nullptr));
        pushButton_revert_EusedT->setText(QCoreApplication::translate("Widget", "\346\222\244\351\224\200", nullptr));
        pushButton_updata_EusedT->setText(QCoreApplication::translate("Widget", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QCoreApplication::translate("Widget", "\345\256\242\346\210\267\347\224\250\347\224\265\344\277\241\346\201\257", nullptr));
        pushButton_query_CostManage->setText(QCoreApplication::translate("Widget", "\346\237\245\350\257\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QCoreApplication::translate("Widget", "\350\264\271\347\224\250\347\256\241\347\220\206", nullptr));
        pushButton_query_Charge->setText(QCoreApplication::translate("Widget", "\346\237\245\350\257\242", nullptr));
        pushButton_delete_Charge->setText(QCoreApplication::translate("Widget", "\345\210\240\351\231\244", nullptr));
        pushButton_insert_Charge->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240", nullptr));
        pushButton_revert_Charge->setText(QCoreApplication::translate("Widget", "\346\222\244\351\224\200", nullptr));
        pushButton_updata_Charge->setText(QCoreApplication::translate("Widget", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QCoreApplication::translate("Widget", "\346\224\266\350\264\271\347\231\273\350\256\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
