#pragma once
#include <qstring.h>
#include "ui_sattracker.h"

class parameter
{
public:
	parameter();
	~parameter();


	QString getApiNo();
	void setApiNo(QString);
	int getNoradID();
	void setNoradID(int);
	float getObserverLatitude();
	void setObserverLatitude(float);
	float getObserverLongitude();
	void setObserverLongitude(float);
	float getObserverAltitude();
	void setObserverAltitude(float);
	int getDaysToPredict();
	void setDaysToPredict(int);
	int getMinimumElevation();
	void setMinimumElevation(int);

private:
	QString apiNo;
	int noradID;
	float observerLatitude;
	float observerLongitude;
	float ObserverAltitude;
	int daysToPredict;
	int minimumElevation;

	Ui::SatTrackerClass* ui;
};

