/********************************************************************************
** Form generated from reading UI file 'costmanagedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COSTMANAGEDIALOG_H
#define UI_COSTMANAGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CostManageDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit_ClientID;
    QLabel *label_2;
    QLineEdit *lineEdit_minMons;
    QLabel *label_3;
    QLineEdit *lineEdit_maxMons;
    QLabel *label_4;
    QLineEdit *lineEdit_minNeed;
    QLineEdit *lineEdit_ChargeSignal;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *lineEdit_maxNeed;

    void setupUi(QDialog *CostManageDialog)
    {
        if (CostManageDialog->objectName().isEmpty())
            CostManageDialog->setObjectName(QString::fromUtf8("CostManageDialog"));
        CostManageDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(CostManageDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(CostManageDialog);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(100, 40, 191, 204));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit_ClientID = new QLineEdit(formLayoutWidget);
        lineEdit_ClientID->setObjectName(QString::fromUtf8("lineEdit_ClientID"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_ClientID);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_minMons = new QLineEdit(formLayoutWidget);
        lineEdit_minMons->setObjectName(QString::fromUtf8("lineEdit_minMons"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_minMons);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_maxMons = new QLineEdit(formLayoutWidget);
        lineEdit_maxMons->setObjectName(QString::fromUtf8("lineEdit_maxMons"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_maxMons);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_minNeed = new QLineEdit(formLayoutWidget);
        lineEdit_minNeed->setObjectName(QString::fromUtf8("lineEdit_minNeed"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_minNeed);

        lineEdit_ChargeSignal = new QLineEdit(formLayoutWidget);
        lineEdit_ChargeSignal->setObjectName(QString::fromUtf8("lineEdit_ChargeSignal"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_ChargeSignal);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_maxNeed = new QLineEdit(formLayoutWidget);
        lineEdit_maxNeed->setObjectName(QString::fromUtf8("lineEdit_maxNeed"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_maxNeed);


        retranslateUi(CostManageDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), CostManageDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CostManageDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(CostManageDialog);
    } // setupUi

    void retranslateUi(QDialog *CostManageDialog)
    {
        CostManageDialog->setWindowTitle(QCoreApplication::translate("CostManageDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("CostManageDialog", "ClientID", nullptr));
        label_2->setText(QCoreApplication::translate("CostManageDialog", "minMons", nullptr));
        label_3->setText(QCoreApplication::translate("CostManageDialog", "maxMons", nullptr));
        label_4->setText(QCoreApplication::translate("CostManageDialog", "minNeed", nullptr));
        label_6->setText(QCoreApplication::translate("CostManageDialog", "ChargeSignal", nullptr));
        label_5->setText(QCoreApplication::translate("CostManageDialog", "maxNeed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CostManageDialog: public Ui_CostManageDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COSTMANAGEDIALOG_H
