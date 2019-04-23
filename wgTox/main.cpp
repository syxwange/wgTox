
#include <QtWidgets/QApplication>
#include "persistence/settings.h"
#include "widget/loginscreen.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	QString  strDir = Settings::getInstance().getAppDataDirPath();

	auto profileName = Settings::getInstance().getCurrentProfile();
	
	LoginScreen loginScreen{ profileName };
	loginScreen.exec();

	return a.exec();
}
