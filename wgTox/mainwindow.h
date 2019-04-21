#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mainwindow.h"


class QTimer;
class MainWindow : public QMainWindow
{
	Q_OBJECT

public:
	MainWindow(QWidget *parent = Q_NULLPTR);

	void testFunc();

private:
	Ui::MainWindowClass ui;

	QTimer* time1;
};
