#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sattracker.h"
#include "output.h"

class SatTracker : public QMainWindow
{
	Q_OBJECT

public:
	SatTracker(QWidget *parent = Q_NULLPTR);

private slots:
	void outputSatelliteInfo();

signals:
	void submitButtonClicked();
private:
	Ui::SatTrackerClass ui;
	output* output;
};
