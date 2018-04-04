#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_sattracker.h"

class SatTracker : public QMainWindow
{
	Q_OBJECT

public:
	SatTracker(QWidget *parent = Q_NULLPTR);

private:
	Ui::SatTrackerClass ui;
};
