#include "mainwindow.h"
#include <qthread.h>
#include <qdebug.h>
#include <qtimer.h>
#include "testclass.h"

MainWindow::MainWindow(QWidget *parent)	: QMainWindow(parent)
{
	ui.setupUi(this);


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
