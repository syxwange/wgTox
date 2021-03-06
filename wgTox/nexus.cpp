
#include "nexus.h"
#include "persistence/settings.h"
#include "core/core.h"
#include "core/coreav.h"
#include "model/groupinvite.h"
#include "persistence/profile.h"
//#include "widget/widget.h"
//#include "video/camerasource.h"
//#include "widget/gui.h"
//#include "widget/loginscreen.h"
#include <QApplication>
#include <QDebug>
#include <QDesktopWidget>
#include <QThread>
#include <cassert>

#include <QActionGroup>
#include <QMenuBar>
#include <QSignalMapper>
#include <QWindow>


/**
 * @class Nexus
 *
 * This class is in charge of connecting various systems together
 * and forwarding signals appropriately to the right objects,
 * it is in charge of starting the GUI and the Core.
 */

//Q_DECLARE_OPAQUE_POINTER(ToxAV*)

static Nexus* nexus{nullptr};

Nexus::Nexus(QObject* parent)  : QObject(parent)  , profile{nullptr}  , widget{nullptr}
{}

Nexus::~Nexus()
{
    delete widget;
    widget = nullptr;
    delete profile;
    profile = nullptr;
    Settings::getInstance().saveGlobal();
#ifdef Q_OS_MAC
    delete globalMenuBar;
#endif
}

/**
 * @brief Sets up invariants and calls showLogin
 *
 * Hides the login screen and shows the GUI for the given profile.
 * Will delete the current GUI, if it exists.
 */
void Nexus::start()
{
    qDebug() << "Starting up";

    // Setup the environment
   /* qRegisterMetaType<Status>("Status");
    qRegisterMetaType<vpx_image>("vpx_image");
    qRegisterMetaType<uint8_t>("uint8_t");
    qRegisterMetaType<uint16_t>("uint16_t");
    qRegisterMetaType<uint32_t>("uint32_t");
    qRegisterMetaType<const int16_t*>("const int16_t*");
    qRegisterMetaType<int32_t>("int32_t");
    qRegisterMetaType<int64_t>("int64_t");
    qRegisterMetaType<QPixmap>("QPixmap");
    qRegisterMetaType<Profile*>("Profile*");
    qRegisterMetaType<ToxAV*>("ToxAV*");
    qRegisterMetaType<ToxFile>("ToxFile");
    qRegisterMetaType<ToxFile::FileDirection>("ToxFile::FileDirection");
    qRegisterMetaType<std::shared_ptr<VideoFrame>>("std::shared_ptr<VideoFrame>");
    qRegisterMetaType<ToxPk>("ToxPk");
    qRegisterMetaType<ToxId>("ToxId");
    qRegisterMetaType<GroupInvite>("GroupInvite");*/

    qApp->setQuitOnLastWindowClosed(false);

    showMainGUI();
}

/**
 * @brief Hides the main GUI, delete the profile, and shows the login screen
 */
void Nexus::showLogin()
{
   /* delete widget;
    widget = nullptr;

    delete profile;
    profile = nullptr;

    LoginScreen loginScreen;
    loginScreen.exec();

    profile = loginScreen.getProfile();

    if (profile) {
        Nexus::getInstance().setProfile(profile);
        Settings::getInstance().setCurrentProfile(profile->getName());
        showMainGUI();
    } else {
        qApp->quit();
    }*/
}

void Nexus::showMainGUI()
{
    assert(profile);

    // Create GUI
    /////widget = Widget::getInstance();

    // Start GUI
   /////widget->init();
    //GUI::getInstance();

    // Zetok protection
    // There are small instants on startup during which no
    // profile is loaded but the GUI could still receive events,
    // e.g. between two modal windows. Disable the GUI to prevent that.
    /////GUI::setEnabled(false);

    // Connections
 /*   connect(profile, &Profile::selfAvatarChanged, widget, &Widget::onSelfAvatarLoaded);

    Core* core = profile->getCore();
    connect(core, &Core::requestSent, profile, &Profile::onRequestSent);

    connect(core, &Core::connected, widget, &Widget::onConnected);
    connect(core, &Core::disconnected, widget, &Widget::onDisconnected);
    connect(profile, &Profile::failedToStart, widget, &Widget::onFailedToStartCore,
            Qt::BlockingQueuedConnection);
    connect(profile, &Profile::badProxy, widget, &Widget::onBadProxyCore, Qt::BlockingQueuedConnection);
    connect(core, &Core::statusSet, widget, &Widget::onStatusSet);
    connect(core, &Core::usernameSet, widget, &Widget::setUsername);
    connect(core, &Core::statusMessageSet, widget, &Widget::setStatusMessage);
    connect(core, &Core::friendAdded, widget, &Widget::addFriend);
    connect(core, &Core::failedToAddFriend, widget, &Widget::addFriendFailed);
    connect(core, &Core::friendUsernameChanged, widget, &Widget::onFriendUsernameChanged);
    connect(core, &Core::friendStatusChanged, widget, &Widget::onFriendStatusChanged);
    connect(core, &Core::friendStatusMessageChanged, widget, &Widget::onFriendStatusMessageChanged);
    connect(core, &Core::friendRequestReceived, widget, &Widget::onFriendRequestReceived);
    connect(core, &Core::friendMessageReceived, widget, &Widget::onFriendMessageReceived);
    connect(core, &Core::groupInviteReceived, widget, &Widget::onGroupInviteReceived);
    connect(core, &Core::groupMessageReceived, widget, &Widget::onGroupMessageReceived);
    connect(core, &Core::groupPeerlistChanged, widget, &Widget::onGroupPeerlistChanged);
    connect(core, &Core::groupPeerNameChanged, widget, &Widget::onGroupPeerNameChanged);
    connect(core, &Core::groupTitleChanged, widget, &Widget::onGroupTitleChanged);
    connect(core, &Core::groupPeerAudioPlaying, widget, &Widget::onGroupPeerAudioPlaying);
    connect(core, &Core::emptyGroupCreated, widget, &Widget::onEmptyGroupCreated);
    connect(core, &Core::friendTypingChanged, widget, &Widget::onFriendTypingChanged);
    connect(core, &Core::groupSentFailed, widget, &Widget::onGroupSendFailed);
    connect(core, &Core::usernameSet, widget, &Widget::refreshPeerListsLocal);

    connect(widget, &Widget::statusSet, core, &Core::setStatus);
    connect(widget, &Widget::friendRequested, core, &Core::requestFriendship);
    connect(widget, &Widget::friendRequestAccepted, core, &Core::acceptFriendRequest);*/

    profile->startCore();

    /////GUI::setEnabled(true);
}

/**
 * @brief Returns the singleton instance.
 */
Nexus& Nexus::getInstance()
{
    if (!nexus)
        nexus = new Nexus;

    return *nexus;
}

void Nexus::destroyInstance()
{
    delete nexus;
    nexus = nullptr;
}

/**
 * @brief Get core instance.
 * @return nullptr if not started, core instance otherwise.
 */
Core* Nexus::getCore()
{
    Nexus& nexus = getInstance();
    if (!nexus.profile)
        return nullptr;

    return nexus.profile->getCore();
}

/**
 * @brief Get current user profile.
 * @return nullptr if not started, profile otherwise.
 */
Profile* Nexus::getProfile()
{
    return getInstance().profile;
}

/**
 * @brief Unload the current profile, if any, and replaces it.
 * @param profile Profile to set.
 */
void Nexus::setProfile(Profile* profile)
{
    getInstance().profile = profile;
    if (profile)
        Settings::getInstance().loadPersonal(profile);
}

/**
 * @brief Get desktop GUI widget.
 * @return nullptr if not started, desktop widget otherwise.
 */
Widget* Nexus::getDesktopGUI()
{
    return getInstance().widget;
}

#ifdef Q_OS_MAC
void Nexus::retranslateUi()
{
    viewMenu->menuAction()->setText(tr("View", "OS X Menu bar"));
    windowMenu->menuAction()->setText(tr("Window", "OS X Menu bar"));
    minimizeAction->setText(tr("Minimize", "OS X Menu bar"));
    frontAction->setText((tr("Bring All to Front", "OS X Menu bar")));
}

void Nexus::onWindowStateChanged(Qt::WindowStates state)
{
    minimizeAction->setEnabled(QApplication::activeWindow() != nullptr);

    if (QApplication::activeWindow() != nullptr && sender() == QApplication::activeWindow()) {
        if (state & Qt::WindowFullScreen)
            minimizeAction->setEnabled(false);

        if (state & Qt::WindowFullScreen)
            fullscreenAction->setText(tr("Exit Fullscreen"));
        else
            fullscreenAction->setText(tr("Enter Fullscreen"));

        updateWindows();
    }

    updateWindowsStates();
}

void Nexus::updateWindows()
{
    updateWindowsArg(nullptr);
}

void Nexus::updateWindowsArg(QWindow* closedWindow)
{
    QWindowList windowList = QApplication::topLevelWindows();
    delete windowActions;
    windowActions = new QActionGroup(this);

    windowMenu->addSeparator();

    QAction* dockLast;
    if (!dockMenu->actions().isEmpty())
        dockLast = dockMenu->actions().first();
    else
        dockLast = nullptr;

    QWindow* activeWindow;

    if (QApplication::activeWindow())
        activeWindow = QApplication::activeWindow()->windowHandle();
    else
        activeWindow = nullptr;

    for (int i = 0; i < windowList.size(); ++i) {
        if (closedWindow == windowList[i])
            continue;

        QAction* action = windowActions->addAction(windowList[i]->title());
        action->setCheckable(true);
        action->setChecked(windowList[i] == activeWindow);
        connect(action, SIGNAL(triggered()), windowMapper, SLOT(map()));
        windowMapper->setMapping(action, windowList[i]);
        windowMenu->addAction(action);
        dockMenu->insertAction(dockLast, action);
    }

    if (dockLast && !dockLast->isSeparator())
        dockMenu->insertSeparator(dockLast);
}

void Nexus::updateWindowsClosed()
{
    updateWindowsArg(static_cast<QWidget*>(sender())->windowHandle());
}

void Nexus::updateWindowsStates()
{
    bool exists = false;
    QWindowList windowList = QApplication::topLevelWindows();

    for (QWindow* window : windowList) {
        if (!(window->windowState() & Qt::WindowMinimized)) {
            exists = true;
            break;
        }
    }

    frontAction->setEnabled(exists);
}

void Nexus::onOpenWindow(QObject* object)
{
    QWindow* window = static_cast<QWindow*>(object);

    if (window->windowState() & QWindow::Minimized)
        window->showNormal();

    window->raise();
    window->requestActivate();
}

void Nexus::toggleFullscreen()
{
    QWidget* window = QApplication::activeWindow();

    if (window->isFullScreen())
        window->showNormal();
    else
        window->showFullScreen();
}

void Nexus::bringAllToFront()
{
    QWindowList windowList = QApplication::topLevelWindows();
    QWindow* focused = QApplication::focusWindow();

    for (QWindow* window : windowList)
        window->raise();

    focused->raise();
}
#endif
