/********************************************************************************
** Form generated from reading UI file 'clerksdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLERKSDIALOG_H
#define UI_CLERKSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ClerksDialog
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_clerkName;
    QLabel *label_3;
    QLineEdit *lineEdit_clerkAddr;
    QLabel *label_4;
    QLineEdit *lineEdit_clerkTel;
    QLineEdit *lineEdit_clerkID;

    void setupUi(QDialog *ClerksDialog)
    {
        if (ClerksDialog->objectName().isEmpty())
            ClerksDialog->setObjectName(QString::fromUtf8("ClerksDialog"));
        ClerksDialog->resize(400, 300);
        buttonBox = new QDialogButtonBox(ClerksDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        formLayoutWidget = new QWidget(ClerksDialog);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(100, 70, 191, 131));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_clerkName = new QLineEdit(formLayoutWidget);
        lineEdit_clerkName->setObjectName(QString::fromUtf8("lineEdit_clerkName"));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_clerkName);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_clerkAddr = new QLineEdit(formLayoutWidget);
        lineEdit_clerkAddr->setObjectName(QString::fromUtf8("lineEdit_clerkAddr"));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_clerkAddr);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        lineEdit_clerkTel = new QLineEdit(formLayoutWidget);
        lineEdit_clerkTel->setObjectName(QString::fromUtf8("lineEdit_clerkTel"));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_clerkTel);

        lineEdit_clerkID = new QLineEdit(formLayoutWidget);
        lineEdit_clerkID->setObjectName(QString::fromUtf8("lineEdit_clerkID"));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_clerkID);


        retranslateUi(ClerksDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ClerksDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ClerksDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ClerksDialog);
    } // setupUi

    void retranslateUi(QDialog *ClerksDialog)
    {
        ClerksDialog->setWindowTitle(QCoreApplication::translate("ClerksDialog", "ClerkIDQuery", nullptr));
        label->setText(QCoreApplication::translate("ClerksDialog", "ID", nullptr));
        label_2->setText(QCoreApplication::translate("ClerksDialog", "Name", nullptr));
        label_3->setText(QCoreApplication::translate("ClerksDialog", "Addr", nullptr));
        label_4->setText(QCoreApplication::translate("ClerksDialog", "Tel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClerksDialog: public Ui_ClerksDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLERKSDIALOG_H
