/********************************************************************************
** Form generated from reading UI file 'clerksadddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLERKSADDDIALOG_H
#define UI_CLERKSADDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClerksAddDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox;
    QComboBox *comboBox;
    QComboBox *comboBox_2;
    QComboBox *comboBox_3;

    void setupUi(QDialog *ClerksAddDialog)
    {
        if (ClerksAddDialog->objectName().isEmpty())
            ClerksAddDialog->setObjectName(QString::fromUtf8("ClerksAddDialog"));
        ClerksAddDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(ClerksAddDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(ClerksAddDialog);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(100, 50, 166, 171));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_4);

        doubleSpinBox = new QDoubleSpinBox(formLayoutWidget);
        doubleSpinBox->setObjectName(QString::fromUtf8("doubleSpinBox"));

        formLayout->setWidget(2, QFormLayout::FieldRole, doubleSpinBox);

        comboBox = new QComboBox(formLayoutWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setEditable(true);

        formLayout->setWidget(1, QFormLayout::FieldRole, comboBox);

        comboBox_2 = new QComboBox(formLayoutWidget);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setEditable(true);

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBox_2);

        comboBox_3 = new QComboBox(formLayoutWidget);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setEditable(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, comboBox_3);


        retranslateUi(ClerksAddDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ClerksAddDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ClerksAddDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ClerksAddDialog);
    } // setupUi

    void retranslateUi(QDialog *ClerksAddDialog)
    {
        ClerksAddDialog->setWindowTitle(QCoreApplication::translate("ClerksAddDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ClerksAddDialog", "ClientID", nullptr));
        label_2->setText(QCoreApplication::translate("ClerksAddDialog", "Mons", nullptr));
        label_3->setText(QCoreApplication::translate("ClerksAddDialog", "ClerkID", nullptr));
        label_4->setText(QCoreApplication::translate("ClerksAddDialog", "Actual", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClerksAddDialog: public Ui_ClerksAddDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLERKSADDDIALOG_H
