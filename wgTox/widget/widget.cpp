
#include "widget.h"
#include <cassert>
#include <QClipboard>
#include <QDebug>
#include <QDesktopServices>
#include <QDesktopWidget>
#include <QMessageBox>
#include <QMouseEvent>
#include <QPainter>
#include <QShortcut>
#include <QString>
#include <QSvgRenderer>
#include <QWindow>
#ifdef Q_OS_MAC
#include <QMenuBar>
#include <QSignalMapper>
#include <QWindow>
#endif

#include "core/core.h"
#include "core/coreav.h"
#include "model/friend.h"
#include "model/group.h"
#include "model/groupinvite.h"
#include "nexus.h"
#include "persistence/profile.h"
#include "persistence/settings.h"
#include "model/friend.h"

//#include "circlewidget.h"
//#include "contentdialog.h"
//#include "contentlayout.h"
//#include "friendlistwidget.h"
//#include "friendwidget.h"
//#include "groupwidget.h"
//#include "maskablepixmapwidget.h"
//#include "splitterrestorer.h"
//#include "systemtrayicon.h"
//#include "form/groupchatform.h"
//#include "audio/audio.h"
//#include "model/chatroom/friendchatroom.h"
//#include "model/chatroom/groupchatroom.h"
//#include "src/friendlist.h"
//#include "src/grouplist.h"
//#include "model/profile/profileinfo.h"
//#include "net/updatecheck.h"
//#include "persistence/offlinemsgengine.h"
//#include "platform/timer.h"
//#include "widget/contentdialogmanager.h"
//#include "widget/form/addfriendform.h"
//#include "widget/form/chatform.h"
//#include "widget/form/filesform.h"
//#include "widget/form/groupinviteform.h"
//#include "widget/form/profileform.h"
//#include "widget/form/settingswidget.h"
//#include "tool/removefrienddialog.h"
#include "widget/gui.h"
#include "widget/style.h"
#include "widget/translator.h"

Widget::Widget(QWidget* parent)	: QMainWindow(parent)/*	, icon{ nullptr }	, trayMenu{ nullptr }, ui(new Ui::MainWindow)
	, activeChatroomWidget{ nullptr }	, eventFlag(false)	, eventIcon(false) */
{
	//installEventFilter(this);
	//QString locale = settings.getTranslation();
	//Translator::translate(locale);
}

Widget::~Widget()
{
}

void Widget::init()
{
}

void Widget::setCentralWidget(QWidget* widget, const QString& widgetName)
{
}

QString Widget::getUsername()
{
	return QString();
}

Widget* Widget::getInstance()
{
	return nullptr;
}

void Widget::showUpdateDownloadProgress()
{
}

void Widget::clearContactsList()
{
}

void Widget::reloadTheme()
{
}
