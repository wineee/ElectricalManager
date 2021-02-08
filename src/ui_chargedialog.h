/********************************************************************************
** Form generated from reading UI file 'chargedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHARGEDIALOG_H
#define UI_CHARGEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ChargeDialog
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
    QLabel *label_5;
    QLineEdit *lineEdit_maxNeed;
    QLabel *label_6;
    QLineEdit *lineEdit_minActual;
    QLabel *label_7;
    QLineEdit *lineEdit_maxActual;
    QLineEdit *lineEdit_ClerkID;
    QLabel *label_8;

    void setupUi(QDialog *ChargeDialog)
    {
        if (ChargeDialog->objectName().isEmpty())
            ChargeDialog->setObjectName(QString::fromUtf8("ChargeDialog"));
        ChargeDialog->resize(400, 349);
        buttonBox = new QDialogButtonBox(ChargeDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 290, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(ChargeDialog);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(100, 20, 191, 252));
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

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        lineEdit_maxNeed = new QLineEdit(formLayoutWidget);
        lineEdit_maxNeed->setObjectName(QString::fromUtf8("lineEdit_maxNeed"));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_maxNeed);

        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        lineEdit_minActual = new QLineEdit(formLayoutWidget);
        lineEdit_minActual->setObjectName(QString::fromUtf8("lineEdit_minActual"));

        formLayout->setWidget(5, QFormLayout::FieldRole, lineEdit_minActual);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_7);

        lineEdit_maxActual = new QLineEdit(formLayoutWidget);
        lineEdit_maxActual->setObjectName(QString::fromUtf8("lineEdit_maxActual"));

        formLayout->setWidget(6, QFormLayout::FieldRole, lineEdit_maxActual);

        lineEdit_ClerkID = new QLineEdit(formLayoutWidget);
        lineEdit_ClerkID->setObjectName(QString::fromUtf8("lineEdit_ClerkID"));

        formLayout->setWidget(7, QFormLayout::FieldRole, lineEdit_ClerkID);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_8);


        retranslateUi(ChargeDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ChargeDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ChargeDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ChargeDialog);
    } // setupUi

    void retranslateUi(QDialog *ChargeDialog)
    {
        ChargeDialog->setWindowTitle(QCoreApplication::translate("ChargeDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ChargeDialog", "ClientID", nullptr));
        label_2->setText(QCoreApplication::translate("ChargeDialog", "minMons", nullptr));
        label_3->setText(QCoreApplication::translate("ChargeDialog", "maxMons", nullptr));
        label_4->setText(QCoreApplication::translate("ChargeDialog", "minNeed", nullptr));
        label_5->setText(QCoreApplication::translate("ChargeDialog", "maxNeed", nullptr));
        label_6->setText(QCoreApplication::translate("ChargeDialog", "minActual", nullptr));
        label_7->setText(QCoreApplication::translate("ChargeDialog", "maxActual", nullptr));
        label_8->setText(QCoreApplication::translate("ChargeDialog", "ClerkID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ChargeDialog: public Ui_ChargeDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHARGEDIALOG_H
