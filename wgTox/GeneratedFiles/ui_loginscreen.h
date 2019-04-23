/********************************************************************************
** Form generated from reading UI file 'loginscreen.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "widget/passwordedit.h"

QT_BEGIN_NAMESPACE

class Ui_LoginScreen
{
public:
    QStackedWidget *stackedWidget;
    QWidget *newPage;
    QHBoxLayout *horizontalLayout_5;
    QLabel *labelNewProfile;
    QHBoxLayout *horizontalLayout_4;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *newUsername;
    QLabel *label_2;
    PasswordEdit *newPass;
    QLabel *label_8;
    PasswordEdit *newPassConfirm;
    QProgressBar *passStrengthMeter;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *createAccountButton;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;
    QWidget *loginPage;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *labelLoadProfile;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer_3;
    QLabel *userNameLabel;
    QComboBox *loginUsernames;
    QLabel *loginPasswordLabel;
    PasswordEdit *loginPassword;
    QCheckBox *autoLoginCB;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *importButton;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *loginButton;
    QFrame *line;
    QPushButton *newProfilePgbtn;
    QPushButton *loginPgbtn;
    QLabel *label_7;

    void setupUi(QDialog *LoginScreen)
    {
        if (LoginScreen->objectName().isEmpty())
            LoginScreen->setObjectName(QString::fromUtf8("LoginScreen"));
        LoginScreen->resize(410, 200);
        LoginScreen->setMinimumSize(QSize(410, 200));
        LoginScreen->setMaximumSize(QSize(415, 200));
        LoginScreen->setWindowTitle(QString::fromUtf8("qTox"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icons/qtox.svg"), QSize(), QIcon::Normal, QIcon::Off);
        LoginScreen->setWindowIcon(icon);
        stackedWidget = new QStackedWidget(LoginScreen);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(160, 0, 250, 200));
        stackedWidget->setAutoFillBackground(true);
        newPage = new QWidget();
        newPage->setObjectName(QString::fromUtf8("newPage"));
        horizontalLayout_5 = new QHBoxLayout(newPage);
        horizontalLayout_5->setSpacing(0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        labelNewProfile = new QLabel(newPage);
        labelNewProfile->setObjectName(QString::fromUtf8("labelNewProfile"));

        horizontalLayout_5->addWidget(labelNewProfile);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        formLayout = new QFormLayout();
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetMaximumSize);
        formLayout->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignCenter);
        formLayout->setHorizontalSpacing(9);
        formLayout->setVerticalSpacing(9);
        formLayout->setContentsMargins(9, 9, 9, 9);
        label = new QLabel(newPage);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        newUsername = new QLineEdit(newPage);
        newUsername->setObjectName(QString::fromUtf8("newUsername"));
        newUsername->setMaxLength(64);

        formLayout->setWidget(1, QFormLayout::FieldRole, newUsername);

        label_2 = new QLabel(newPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        newPass = new PasswordEdit(newPage);
        newPass->setObjectName(QString::fromUtf8("newPass"));

        formLayout->setWidget(2, QFormLayout::FieldRole, newPass);

        label_8 = new QLabel(newPage);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        newPassConfirm = new PasswordEdit(newPage);
        newPassConfirm->setObjectName(QString::fromUtf8("newPassConfirm"));

        formLayout->setWidget(3, QFormLayout::FieldRole, newPassConfirm);

        passStrengthMeter = new QProgressBar(newPage);
        passStrengthMeter->setObjectName(QString::fromUtf8("passStrengthMeter"));
        passStrengthMeter->setValue(0);

        formLayout->setWidget(7, QFormLayout::SpanningRole, passStrengthMeter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        createAccountButton = new QPushButton(newPage);
        createAccountButton->setObjectName(QString::fromUtf8("createAccountButton"));

        horizontalLayout->addWidget(createAccountButton);


        formLayout->setLayout(9, QFormLayout::SpanningRole, horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(8, QFormLayout::SpanningRole, verticalSpacer);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        formLayout->setItem(0, QFormLayout::SpanningRole, verticalSpacer_2);


        horizontalLayout_4->addLayout(formLayout);


        horizontalLayout_5->addLayout(horizontalLayout_4);

        stackedWidget->addWidget(newPage);
        loginPage = new QWidget();
        loginPage->setObjectName(QString::fromUtf8("loginPage"));
        horizontalLayout_3 = new QHBoxLayout(loginPage);
        horizontalLayout_3->setSpacing(0);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        labelLoadProfile = new QLabel(loginPage);
        labelLoadProfile->setObjectName(QString::fromUtf8("labelLoadProfile"));

        horizontalLayout_2->addWidget(labelLoadProfile);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(9, 9, 9, 9);
        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);

        userNameLabel = new QLabel(loginPage);
        userNameLabel->setObjectName(QString::fromUtf8("userNameLabel"));
        userNameLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(userNameLabel);

        loginUsernames = new QComboBox(loginPage);
        loginUsernames->setObjectName(QString::fromUtf8("loginUsernames"));

        verticalLayout_2->addWidget(loginUsernames);

        loginPasswordLabel = new QLabel(loginPage);
        loginPasswordLabel->setObjectName(QString::fromUtf8("loginPasswordLabel"));
        loginPasswordLabel->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(loginPasswordLabel);

        loginPassword = new PasswordEdit(loginPage);
        loginPassword->setObjectName(QString::fromUtf8("loginPassword"));

        verticalLayout_2->addWidget(loginPassword);

        autoLoginCB = new QCheckBox(loginPage);
        autoLoginCB->setObjectName(QString::fromUtf8("autoLoginCB"));

        verticalLayout_2->addWidget(autoLoginCB);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        importButton = new QPushButton(loginPage);
        importButton->setObjectName(QString::fromUtf8("importButton"));

        horizontalLayout_6->addWidget(importButton);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        loginButton = new QPushButton(loginPage);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));

        horizontalLayout_6->addWidget(loginButton);


        verticalLayout_2->addLayout(horizontalLayout_6);


        horizontalLayout_2->addLayout(verticalLayout_2);


        horizontalLayout_3->addLayout(horizontalLayout_2);

        stackedWidget->addWidget(loginPage);
        line = new QFrame(LoginScreen);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(10, 160, 135, 1));
        line->setFrameShadow(QFrame::Plain);
        line->setFrameShape(QFrame::HLine);
        newProfilePgbtn = new QPushButton(LoginScreen);
        newProfilePgbtn->setObjectName(QString::fromUtf8("newProfilePgbtn"));
        newProfilePgbtn->setGeometry(QRect(0, 130, 160, 22));
        loginPgbtn = new QPushButton(LoginScreen);
        loginPgbtn->setObjectName(QString::fromUtf8("loginPgbtn"));
        loginPgbtn->setGeometry(QRect(0, 170, 160, 22));
        label_7 = new QLabel(LoginScreen);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 15, 100, 100));
        label_7->setPixmap(QPixmap(QString::fromUtf8(":/img/login_logo.svg")));
        label_7->setScaledContents(true);

        retranslateUi(LoginScreen);

        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(LoginScreen);
    } // setupUi

    void retranslateUi(QDialog *LoginScreen)
    {
        labelNewProfile->setText(QString());
        label->setText(QApplication::translate("LoginScreen", "Username:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        newUsername->setAccessibleDescription(QApplication::translate("LoginScreen", "Username input field", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_2->setText(QApplication::translate("LoginScreen", "Password:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        newPass->setAccessibleDescription(QApplication::translate("LoginScreen", "Password input field, you can leave it empty (no password), or type at least 6 characters", nullptr));
#endif // QT_NO_ACCESSIBILITY
        label_8->setText(QApplication::translate("LoginScreen", "Confirm:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        newPassConfirm->setAccessibleDescription(QApplication::translate("LoginScreen", "Password confirmation field", nullptr));
#endif // QT_NO_ACCESSIBILITY
        passStrengthMeter->setFormat(QApplication::translate("LoginScreen", "Password strength: %p%", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        createAccountButton->setAccessibleDescription(QApplication::translate("LoginScreen", "Create a new profile button", nullptr));
#endif // QT_NO_ACCESSIBILITY
        createAccountButton->setText(QApplication::translate("LoginScreen", "Create Profile", nullptr));
        labelLoadProfile->setText(QString());
        userNameLabel->setText(QApplication::translate("LoginScreen", "Username:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        loginUsernames->setAccessibleName(QApplication::translate("LoginScreen", "Profile list", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        loginUsernames->setAccessibleDescription(QApplication::translate("LoginScreen", "List of profiles", nullptr));
#endif // QT_NO_ACCESSIBILITY
        loginPasswordLabel->setText(QApplication::translate("LoginScreen", "Password:", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        loginPassword->setAccessibleDescription(QApplication::translate("LoginScreen", "Password input", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_TOOLTIP
        autoLoginCB->setToolTip(QApplication::translate("LoginScreen", "If the profile does not have a password, qTox can skip the login screen", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        autoLoginCB->setAccessibleDescription(QApplication::translate("LoginScreen", "Load automatically checkbox", nullptr));
#endif // QT_NO_ACCESSIBILITY
        autoLoginCB->setText(QApplication::translate("LoginScreen", "Load automatically", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        importButton->setAccessibleDescription(QApplication::translate("LoginScreen", "Import profile", nullptr));
#endif // QT_NO_ACCESSIBILITY
        importButton->setText(QApplication::translate("LoginScreen", "Import", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        loginButton->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        loginButton->setAccessibleDescription(QApplication::translate("LoginScreen", "Load selected profile button", nullptr));
#endif // QT_NO_ACCESSIBILITY
        loginButton->setText(QApplication::translate("LoginScreen", "Load", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        newProfilePgbtn->setAccessibleName(QString());
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        newProfilePgbtn->setAccessibleDescription(QApplication::translate("LoginScreen", "New profile creation page", nullptr));
#endif // QT_NO_ACCESSIBILITY
        newProfilePgbtn->setText(QApplication::translate("LoginScreen", "New Profile", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        loginPgbtn->setAccessibleName(QApplication::translate("LoginScreen", "Load Profile", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        loginPgbtn->setAccessibleDescription(QApplication::translate("LoginScreen", "Loading existing profile page", nullptr));
#endif // QT_NO_ACCESSIBILITY
        loginPgbtn->setText(QApplication::translate("LoginScreen", "Load Profile", nullptr));
        label_7->setText(QString());
        Q_UNUSED(LoginScreen);
    } // retranslateUi

};

namespace Ui {
    class LoginScreen: public Ui_LoginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
