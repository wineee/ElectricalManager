/********************************************************************************
** Form generated from reading UI file 'clientsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTSDIALOG_H
#define UI_CLIENTSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClientsDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_clientsID;
    QLabel *label_2;
    QLineEdit *lineEdit_clientsName;
    QLabel *label_3;
    QLineEdit *lineEdit_clientsAddr;
    QLabel *label_4;
    QLineEdit *lineEdit_clientsTel;
    QLineEdit *lineEdit_clientsmaxBal;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *lineEdit_clientsminBal;

    void setupUi(QDialog *ClientsDialog)
    {
        if (ClientsDialog->objectName().isEmpty())
            ClientsDialog->setObjectName(QString::fromUtf8("ClientsDialog"));
        ClientsDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(ClientsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(ClientsDialog);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(80, 30, 191, 204));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_clientsID = new QLineEdit(formLayoutWidget);
        lineEdit_clientsID->setObjectName(QString::fromUtf8("lineEdit_clientsID"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_clientsID);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_clientsName = new QLineEdit(formLayoutWidget);
        lineEdit_clientsName->setObjectName(QString::fromUtf8("lineEdit_clientsName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_clientsName);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_clientsAddr = new QLineEdit(formLayoutWidget);
        lineEdit_clientsAddr->setObjectName(QString::fromUtf8("lineEdit_clientsAddr"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_clientsAddr);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_clientsTel = new QLineEdit(formLayoutWidget);
        lineEdit_clientsTel->setObjectName(QString::fromUtf8("lineEdit_clientsTel"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_clientsTel);

        lineEdit_clientsmaxBal = new QLineEdit(formLayoutWidget);
        lineEdit_clientsmaxBal->setObjectName(QString::fromUtf8("lineEdit_clientsmaxBal"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_clientsmaxBal);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_clientsminBal = new QLineEdit(formLayoutWidget);
        lineEdit_clientsminBal->setObjectName(QString::fromUtf8("lineEdit_clientsminBal"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_clientsminBal);


        retranslateUi(ClientsDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ClientsDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ClientsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ClientsDialog);
    } // setupUi

    void retranslateUi(QDialog *ClientsDialog)
    {
        ClientsDialog->setWindowTitle(QCoreApplication::translate("ClientsDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ClientsDialog", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("ClientsDialog", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("ClientsDialog", "Addr", nullptr));
        label_4->setText(QCoreApplication::translate("ClientsDialog", "Tel", nullptr));
        label_6->setText(QCoreApplication::translate("ClientsDialog", "maxBalance", nullptr));
        label_5->setText(QCoreApplication::translate("ClientsDialog", "minBalance", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClientsDialog: public Ui_ClientsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTSDIALOG_H
