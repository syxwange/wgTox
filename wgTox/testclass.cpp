#include "testclass.h"
#include <qthread.h>
#include <qdebug.h>
#include <qtimer.h>
#include <qapplication.h>


TestClass::TestClass(QApplication* app, QObject *parent)	: QObject(parent),m_app(app)
{	
}



TestClass::~TestClass()
{
}

void TestClass::testFunc()
{
	
}
