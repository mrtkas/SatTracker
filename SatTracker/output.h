#pragma once
#include "FileDownloader.h"
#include "ui_sattracker.h"

class output : public QObject
{

	Q_OBJECT

public:
	output();
	~output();

private slots:
	//void writeDataToTextBrowser();
private:

	Ui::SatTrackerClass* ui;
};

