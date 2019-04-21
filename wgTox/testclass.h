#pragma once

#include <QObject>


class QApplication;
class QTimer;
class TestClass : public QObject
{
	Q_OBJECT

public:
	TestClass(QApplication* app, QObject* parent = nullptr);
	~TestClass();
	void testFunc();

	QApplication* m_app;

private:
	QTimer* time1;
};
