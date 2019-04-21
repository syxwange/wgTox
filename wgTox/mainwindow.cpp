#include "mainwindow.h"
#include <qthread.h>
#include <qdebug.h>
#include <qtimer.h>
#include "testclass.h"

MainWindow::MainWindow(QWidget *parent)	: QMainWindow(parent)
{
	ui.setupUi(this);

	auto test = new TestClass(qApp);	

	QThread* p = new QThread;
	p->start();
	//moveToThread(p);
	test->moveToThread(p);
}

void MainWindow::testFunc()
{
	if (QThread::currentThread() == qApp->thread())
	{
		qDebug() << "same thread  in testFunc!";
		

	}
	else
	{
		qDebug() << "not same thread  in testFunc!";
	}
}
