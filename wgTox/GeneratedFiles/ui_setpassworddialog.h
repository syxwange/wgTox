/********************************************************************************
** Form generated from reading UI file 'setpassworddialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETPASSWORDDIALOG_H
#define UI_SETPASSWORDDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include "widget/passwordedit.h"

QT_BEGIN_NAMESPACE

class Ui_SetPasswordDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *body;
    QGridLayout *pswdsLayout;
    QLabel *label_2;
    QLabel *label;
    PasswordEdit *repasswordlineEdit;
    PasswordEdit *passwordlineEdit;
    QProgressBar *passStrengthMeter;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SetPasswordDialog)
    {
        if (SetPasswordDialog->objectName().isEmpty())
            SetPasswordDialog->setObjectName(QString::fromUtf8("SetPasswordDialog"));
        SetPasswordDialog->resize(255, 176);
        SetPasswordDialog->setModal(true);
        verticalLayout = new QVBoxLayout(SetPasswordDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        body = new QLabel(SetPasswordDialog);
        body->setObjectName(QString::fromUtf8("body"));

        verticalLayout->addWidget(body);

        pswdsLayout = new QGridLayout();
        pswdsLayout->setObjectName(QString::fromUtf8("pswdsLayout"));
        label_2 = new QLabel(SetPasswordDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignLeading);

        pswdsLayout->addWidget(label_2, 4, 0, 1, 1);

        label = new QLabel(SetPasswordDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignLeading);

        pswdsLayout->addWidget(label, 2, 0, 1, 1);

        repasswordlineEdit = new PasswordEdit(SetPasswordDialog);
        repasswordlineEdit->setObjectName(QString::fromUtf8("repasswordlineEdit"));

        pswdsLayout->addWidget(repasswordlineEdit, 4, 1, 1, 1);

        passwordlineEdit = new PasswordEdit(SetPasswordDialog);
        passwordlineEdit->setObjectName(QString::fromUtf8("passwordlineEdit"));

        pswdsLayout->addWidget(passwordlineEdit, 2, 1, 1, 1);

        passStrengthMeter = new QProgressBar(SetPasswordDialog);
        passStrengthMeter->setObjectName(QString::fromUtf8("passStrengthMeter"));
        passStrengthMeter->setValue(0);

        pswdsLayout->addWidget(passStrengthMeter, 6, 0, 1, 2);


        verticalLayout->addLayout(pswdsLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SetPasswordDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(passwordlineEdit, repasswordlineEdit);

        retranslateUi(SetPasswordDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), SetPasswordDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), SetPasswordDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SetPasswordDialog);
    } // setupUi

    void retranslateUi(QDialog *SetPasswordDialog)
    {
        SetPasswordDialog->setWindowTitle(QApplication::translate("SetPasswordDialog", "Set your password", nullptr));
        label_2->setText(QApplication::translate("SetPasswordDialog", "Confirm:", nullptr));
        label->setText(QApplication::translate("SetPasswordDialog", "Password:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        repasswordlineEdit->setAccessibleName(QApplication::translate("SetPasswordDialog", "Confirm password", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        repasswordlineEdit->setAccessibleDescription(QApplication::translate("SetPasswordDialog", "Confirm password input", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        passwordlineEdit->setAccessibleName(QApplication::translate("SetPasswordDialog", "Password input", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        passwordlineEdit->setAccessibleDescription(QApplication::translate("SetPasswordDialog", "Password input field, minimum 6 characters long", nullptr));
#endif // QT_NO_ACCESSIBILITY
        passStrengthMeter->setFormat(QApplication::translate("SetPasswordDialog", "Password strength: %p%", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SetPasswordDialog: public Ui_SetPasswordDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETPASSWORDDIALOG_H
