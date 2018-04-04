#include "stdafx.h"
#include "sattracker.h"

SatTracker::SatTracker(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.submitButton, SIGNAL(clicked()), this, SLOT(outputSatelliteInfo()));
	connect(this, SIGNAL(submitButtonClicked()), output, SLOT(writeDataToTextBrowser()));
}

void SatTracker::outputSatelliteInfo()
{


	emit submitButtonClicked();
}