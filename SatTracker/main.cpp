#include "stdafx.h"
#include "sattracker.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	SatTracker w;
	w.show();
	return a.exec();
}
