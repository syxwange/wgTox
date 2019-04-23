/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <widget/notificationscrollarea.h>
#include <widget/tool/croppinglabel.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionClose;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QSplitter *mainSplitter;
    QFrame *statusPanel;
    QVBoxLayout *statusLayout;
    QWidget *statusHead;
    QGridLayout *gridLayout_2;
    QHBoxLayout *myProfile;
    QSpacerItem *horizontalSpacer_4;
    QVBoxLayout *verticalLayout;
    CroppingLabel *nameLabel;
    CroppingLabel *statusLabel;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *statusButton;
    QWidget *searchContactsContainer;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLineEdit *searchContactText;
    QToolButton *searchContactFilterBox;
    NotificationScrollArea *friendList;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_5;
    QWidget *tooliconsZone;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *addButton;
    QPushButton *groupButton;
    QPushButton *transferButton;
    QPushButton *settingsButton;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(775, 420);
        MainWindow->setMinimumSize(QSize(775, 420));
        MainWindow->setWindowTitle(QString::fromUtf8("qTox"));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/icons/qtox.svg"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        actionClose = new QAction(MainWindow);
        actionClose->setObjectName(QString::fromUtf8("actionClose"));
#ifndef QT_NO_SHORTCUT
        actionClose->setShortcut(QString::fromUtf8("Ctrl+Q"));
#endif // QT_NO_SHORTCUT
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        mainSplitter = new QSplitter(centralwidget);
        mainSplitter->setObjectName(QString::fromUtf8("mainSplitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(mainSplitter->sizePolicy().hasHeightForWidth());
        mainSplitter->setSizePolicy(sizePolicy);
        mainSplitter->setMaximumSize(QSize(16777215, 16777215));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Active, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        QBrush brush1(QColor(255, 255, 255, 128));
        brush1.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush1);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Inactive, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Highlight, brush);
        palette.setBrush(QPalette::Disabled, QPalette::HighlightedText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush3);
#endif
        mainSplitter->setPalette(palette);
        mainSplitter->setMouseTracking(true);
        mainSplitter->setAutoFillBackground(false);
        mainSplitter->setStyleSheet(QString::fromUtf8("QSplitter{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 255, 255);\n"
"	alternate-background-color: rgb(255, 255, 255);\n"
"	border-color: rgb(255, 255, 255);\n"
"	gridline-color: rgb(255, 255, 255);\n"
"	selection-color: rgb(255, 255, 255);\n"
"	selection-background-color: rgb(255, 255, 255);\n"
"}\n"
"QSplitter:handle{\n"
"	color: rgb(255, 255, 255);\n"
"	background-color: rgb(255, 255, 255);\n"
"}"));
        mainSplitter->setOrientation(Qt::Horizontal);
        mainSplitter->setHandleWidth(6);
        mainSplitter->setChildrenCollapsible(false);
        statusPanel = new QFrame(mainSplitter);
        statusPanel->setObjectName(QString::fromUtf8("statusPanel"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(statusPanel->sizePolicy().hasHeightForWidth());
        statusPanel->setSizePolicy(sizePolicy1);
        statusLayout = new QVBoxLayout(statusPanel);
        statusLayout->setSpacing(0);
        statusLayout->setObjectName(QString::fromUtf8("statusLayout"));
        statusLayout->setContentsMargins(0, 0, 0, 0);
        statusHead = new QWidget(statusPanel);
        statusHead->setObjectName(QString::fromUtf8("statusHead"));
        statusHead->setEnabled(true);
        QSizePolicy sizePolicy2(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(statusHead->sizePolicy().hasHeightForWidth());
        statusHead->setSizePolicy(sizePolicy2);
        gridLayout_2 = new QGridLayout(statusHead);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        myProfile = new QHBoxLayout();
        myProfile->setSpacing(0);
        myProfile->setObjectName(QString::fromUtf8("myProfile"));
        horizontalSpacer_4 = new QSpacerItem(5, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        myProfile->addItem(horizontalSpacer_4);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(0);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        nameLabel = new CroppingLabel(statusHead);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(1);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(nameLabel->sizePolicy().hasHeightForWidth());
        nameLabel->setSizePolicy(sizePolicy3);
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush);
        palette1.setBrush(QPalette::Active, QPalette::Light, brush);
        palette1.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::Highlight, brush);
        palette1.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        QBrush brush4(QColor(255, 255, 255, 128));
        brush4.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Active, QPalette::PlaceholderText, brush4);
#endif
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Highlight, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush5(QColor(255, 255, 255, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush5);
#endif
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        QBrush brush6(QColor(240, 240, 240, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Highlight, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        QBrush brush7(QColor(255, 255, 255, 128));
        brush7.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette1.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush7);
#endif
        nameLabel->setPalette(palette1);
        QFont font;
        font.setPointSize(11);
        font.setBold(true);
        font.setWeight(75);
        nameLabel->setFont(font);
        nameLabel->setCursor(QCursor(Qt::PointingHandCursor));
        nameLabel->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(nameLabel);

        statusLabel = new CroppingLabel(statusHead);
        statusLabel->setObjectName(QString::fromUtf8("statusLabel"));
        sizePolicy3.setHeightForWidth(statusLabel->sizePolicy().hasHeightForWidth());
        statusLabel->setSizePolicy(sizePolicy3);
        QPalette palette2;
        QBrush brush8(QColor(193, 193, 193, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush8);
        palette2.setBrush(QPalette::Active, QPalette::Text, brush8);
        QBrush brush9(QColor(193, 193, 193, 128));
        brush9.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Active, QPalette::PlaceholderText, brush9);
#endif
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush8);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush8);
        QBrush brush10(QColor(193, 193, 193, 128));
        brush10.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush10);
#endif
        QBrush brush11(QColor(14, 14, 14, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush11);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush11);
        QBrush brush12(QColor(193, 193, 193, 128));
        brush12.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette2.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush12);
#endif
        statusLabel->setPalette(palette2);
        QFont font1;
        font1.setPointSize(8);
        statusLabel->setFont(font1);
        statusLabel->setTextFormat(Qt::PlainText);

        verticalLayout->addWidget(statusLabel);

        verticalLayout->setStretch(0, 1);
        verticalLayout->setStretch(1, 1);

        myProfile->addLayout(verticalLayout);

        horizontalSpacer_3 = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        myProfile->addItem(horizontalSpacer_3);

        statusButton = new QPushButton(statusHead);
        statusButton->setObjectName(QString::fromUtf8("statusButton"));
        QSizePolicy sizePolicy4(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(statusButton->sizePolicy().hasHeightForWidth());
        statusButton->setSizePolicy(sizePolicy4);
        statusButton->setMinimumSize(QSize(20, 40));
        statusButton->setFocusPolicy(Qt::NoFocus);
        statusButton->setIconSize(QSize(10, 10));
        statusButton->setAutoExclusive(false);
        statusButton->setAutoDefault(false);
        statusButton->setFlat(true);

        myProfile->addWidget(statusButton);


        gridLayout_2->addLayout(myProfile, 0, 0, 1, 1);


        statusLayout->addWidget(statusHead);

        searchContactsContainer = new QWidget(statusPanel);
        searchContactsContainer->setObjectName(QString::fromUtf8("searchContactsContainer"));
        sizePolicy2.setHeightForWidth(searchContactsContainer->sizePolicy().hasHeightForWidth());
        searchContactsContainer->setSizePolicy(sizePolicy2);
        verticalLayout_3 = new QVBoxLayout(searchContactsContainer);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        searchContactText = new QLineEdit(searchContactsContainer);
        searchContactText->setObjectName(QString::fromUtf8("searchContactText"));
        QSizePolicy sizePolicy5(QSizePolicy::Ignored, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(searchContactText->sizePolicy().hasHeightForWidth());
        searchContactText->setSizePolicy(sizePolicy5);
        searchContactText->setClearButtonEnabled(true);

        horizontalLayout->addWidget(searchContactText);

        searchContactFilterBox = new QToolButton(searchContactsContainer);
        searchContactFilterBox->setObjectName(QString::fromUtf8("searchContactFilterBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(searchContactFilterBox->sizePolicy().hasHeightForWidth());
        searchContactFilterBox->setSizePolicy(sizePolicy6);
        searchContactFilterBox->setPopupMode(QToolButton::InstantPopup);
        searchContactFilterBox->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);
        searchContactFilterBox->setArrowType(Qt::NoArrow);

        horizontalLayout->addWidget(searchContactFilterBox);


        verticalLayout_3->addLayout(horizontalLayout);


        statusLayout->addWidget(searchContactsContainer);

        friendList = new NotificationScrollArea(statusPanel);
        friendList->setObjectName(QString::fromUtf8("friendList"));
        sizePolicy1.setHeightForWidth(friendList->sizePolicy().hasHeightForWidth());
        friendList->setSizePolicy(sizePolicy1);
        friendList->setLayoutDirection(Qt::LeftToRight);
        friendList->setAutoFillBackground(true);
        friendList->setFrameShape(QFrame::NoFrame);
        friendList->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        friendList->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 775, 285));
        verticalLayout_5 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        friendList->setWidget(scrollAreaWidgetContents);

        statusLayout->addWidget(friendList);

        tooliconsZone = new QWidget(statusPanel);
        tooliconsZone->setObjectName(QString::fromUtf8("tooliconsZone"));
        tooliconsZone->setEnabled(true);
        sizePolicy2.setHeightForWidth(tooliconsZone->sizePolicy().hasHeightForWidth());
        tooliconsZone->setSizePolicy(sizePolicy2);
        tooliconsZone->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout_2 = new QHBoxLayout(tooliconsZone);
        horizontalLayout_2->setSpacing(0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        addButton = new QPushButton(tooliconsZone);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setMinimumSize(QSize(55, 35));
        addButton->setMaximumSize(QSize(55, 35));
        addButton->setFocusPolicy(Qt::NoFocus);
        addButton->setAutoFillBackground(false);
        addButton->setStyleSheet(QString::fromUtf8(""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/add.svg"), QSize(), QIcon::Normal, QIcon::Off);
        addButton->setIcon(icon1);
        addButton->setIconSize(QSize(15, 15));
        addButton->setCheckable(false);
        addButton->setAutoDefault(false);
        addButton->setFlat(false);

        horizontalLayout_2->addWidget(addButton);

        groupButton = new QPushButton(tooliconsZone);
        groupButton->setObjectName(QString::fromUtf8("groupButton"));
        groupButton->setMinimumSize(QSize(55, 35));
        groupButton->setFocusPolicy(Qt::NoFocus);
        groupButton->setAutoFillBackground(false);
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/group.svg"), QSize(), QIcon::Normal, QIcon::Off);
        groupButton->setIcon(icon2);
        groupButton->setIconSize(QSize(15, 15));
        groupButton->setFlat(true);

        horizontalLayout_2->addWidget(groupButton);

        transferButton = new QPushButton(tooliconsZone);
        transferButton->setObjectName(QString::fromUtf8("transferButton"));
        transferButton->setMinimumSize(QSize(55, 35));
        transferButton->setMaximumSize(QSize(55, 35));
        transferButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/transfer.svg"), QSize(), QIcon::Normal, QIcon::Off);
        transferButton->setIcon(icon3);
        transferButton->setIconSize(QSize(15, 15));
        transferButton->setFlat(true);

        horizontalLayout_2->addWidget(transferButton);

        settingsButton = new QPushButton(tooliconsZone);
        settingsButton->setObjectName(QString::fromUtf8("settingsButton"));
        settingsButton->setMinimumSize(QSize(55, 35));
        settingsButton->setMaximumSize(QSize(55, 35));
        settingsButton->setFocusPolicy(Qt::NoFocus);
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/settings.svg"), QSize(), QIcon::Normal, QIcon::Off);
        settingsButton->setIcon(icon4);
        settingsButton->setIconSize(QSize(15, 15));
        settingsButton->setFlat(true);

        horizontalLayout_2->addWidget(settingsButton);


        statusLayout->addWidget(tooliconsZone, 0, Qt::AlignHCenter);

        mainSplitter->addWidget(statusPanel);

        verticalLayout_4->addWidget(mainSplitter);

        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        statusButton->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        actionClose->setText(QApplication::translate("MainWindow", "Close", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        nameLabel->setAccessibleName(QApplication::translate("MainWindow", "Open profile", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        nameLabel->setAccessibleDescription(QApplication::translate("MainWindow", "Open profile page when clicked", nullptr));
#endif // QT_NO_ACCESSIBILITY
        nameLabel->setText(QApplication::translate("MainWindow", "Your name", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        statusLabel->setAccessibleName(QApplication::translate("MainWindow", "Status message input", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        statusLabel->setAccessibleDescription(QApplication::translate("MainWindow", "Set your status message that will be shown to others", nullptr));
#endif // QT_NO_ACCESSIBILITY
        statusLabel->setText(QApplication::translate("MainWindow", "Your status", nullptr));
#ifndef QT_NO_ACCESSIBILITY
        statusButton->setAccessibleName(QApplication::translate("MainWindow", "Status", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        statusButton->setAccessibleDescription(QApplication::translate("MainWindow", "Set availability status", nullptr));
#endif // QT_NO_ACCESSIBILITY
        statusButton->setText(QString());
#ifndef QT_NO_ACCESSIBILITY
        searchContactText->setAccessibleName(QApplication::translate("MainWindow", "Contact search", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        searchContactText->setAccessibleDescription(QApplication::translate("MainWindow", "Contact search input for known friends", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        searchContactFilterBox->setAccessibleName(QApplication::translate("MainWindow", "Sorting and visibility", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        searchContactFilterBox->setAccessibleDescription(QApplication::translate("MainWindow", "Set friends sorting and visibility", nullptr));
#endif // QT_NO_ACCESSIBILITY
        searchContactFilterBox->setText(QApplication::translate("MainWindow", "...", nullptr));
#ifndef QT_NO_TOOLTIP
        addButton->setToolTip(QApplication::translate("MainWindow", "Add friends", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        addButton->setAccessibleName(QApplication::translate("MainWindow", "Add friends", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        addButton->setAccessibleDescription(QApplication::translate("MainWindow", "Open Add friends page", nullptr));
#endif // QT_NO_ACCESSIBILITY
        addButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        groupButton->setToolTip(QApplication::translate("MainWindow", "Create a group chat", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        groupButton->setAccessibleName(QApplication::translate("MainWindow", "Groupchat", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        groupButton->setAccessibleDescription(QApplication::translate("MainWindow", "Open groupchat management page", nullptr));
#endif // QT_NO_ACCESSIBILITY
        groupButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        transferButton->setToolTip(QApplication::translate("MainWindow", "View completed file transfers", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        transferButton->setAccessibleName(QApplication::translate("MainWindow", "File transfers history", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        transferButton->setAccessibleDescription(QApplication::translate("MainWindow", "Open File transfers history", nullptr));
#endif // QT_NO_ACCESSIBILITY
        transferButton->setText(QString());
#ifndef QT_NO_TOOLTIP
        settingsButton->setToolTip(QApplication::translate("MainWindow", "Change your settings", nullptr));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_ACCESSIBILITY
        settingsButton->setAccessibleName(QApplication::translate("MainWindow", "Settings", nullptr));
#endif // QT_NO_ACCESSIBILITY
#ifndef QT_NO_ACCESSIBILITY
        settingsButton->setAccessibleDescription(QApplication::translate("MainWindow", "Open Settings", nullptr));
#endif // QT_NO_ACCESSIBILITY
        settingsButton->setText(QString());
        Q_UNUSED(MainWindow);
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
