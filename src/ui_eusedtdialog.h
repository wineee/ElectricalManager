/********************************************************************************
** Form generated from reading UI file 'eusedtdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EUSEDTDIALOG_H
#define UI_EUSEDTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EUsedTDialog
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
    QLineEdit *lineEdit_TypeID;
    QLineEdit *lineEdit_maxEUsed;
    QLabel *label_6;
    QLabel *label_5;
    QLineEdit *lineEdit_minEUsed;

    void setupUi(QDialog *EUsedTDialog)
    {
        if (EUsedTDialog->objectName().isEmpty())
            EUsedTDialog->setObjectName(QString::fromUtf8("EUsedTDialog"));
        EUsedTDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(EUsedTDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(50, 250, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(EUsedTDialog);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(90, 20, 191, 224));
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

        lineEdit_TypeID = new QLineEdit(formLayoutWidget);
        lineEdit_TypeID->setObjectName(QString::fromUtf8("lineEdit_TypeID"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_TypeID);

        lineEdit_maxEUsed = new QLineEdit(formLayoutWidget);
        lineEdit_maxEUsed->setObjectName(QString::fromUtf8("lineEdit_maxEUsed"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_maxEUsed);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_minEUsed = new QLineEdit(formLayoutWidget);
        lineEdit_minEUsed->setObjectName(QString::fromUtf8("lineEdit_minEUsed"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_minEUsed);


        retranslateUi(EUsedTDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), EUsedTDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), EUsedTDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EUsedTDialog);
    } // setupUi

    void retranslateUi(QDialog *EUsedTDialog)
    {
        EUsedTDialog->setWindowTitle(QCoreApplication::translate("EUsedTDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("EUsedTDialog", "ClientID", nullptr));
        label_2->setText(QCoreApplication::translate("EUsedTDialog", "minMons", nullptr));
        label_3->setText(QCoreApplication::translate("EUsedTDialog", "maxMons", nullptr));
        label_4->setText(QCoreApplication::translate("EUsedTDialog", "TypeID", nullptr));
        label_6->setText(QCoreApplication::translate("EUsedTDialog", "maxEUsed", nullptr));
        label_5->setText(QCoreApplication::translate("EUsedTDialog", "minEUsed", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EUsedTDialog: public Ui_EUsedTDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EUSEDTDIALOG_H
