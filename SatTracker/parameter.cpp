#include "stdafx.h"
#include "parameter.h"


parameter::parameter()
{
}


parameter::~parameter()
{
}

QString parameter::getApiNo()
{
	return ui->apiKeyBox->toPlainText();
}

void parameter::setApiNo(QString api)
{
	apiNo = api;
}

int parameter::getNoradID()
{
	return ui->noradIDText->toPlainText().toInt();
}
void parameter::setNoradID(int IDnr)
{
	noradID = IDnr;
}

float parameter::getObserverLatitude()
{
	return ui->obsLonText->toPlainText().toFloat();
}

void parameter::setObserverLatitude(float lat)
{
	observerLatitude = lat;
}

float parameter::getObserverLongitude()
{
	return ui->obsLonText->toPlainText().toFloat();
}

void parameter::setObserverLongitude(float lon)
{
	observerLongitude = lon;
}

float parameter::getObserverAltitude()
{
	return ui->obsAltText->toPlainText().toFloat();
}

void parameter::setObserverAltitude(float alt)
{
	ObserverAltitude = alt;
}

int parameter::getDaysToPredict()
{
	return ui->daysBox->value();
}

void parameter::setDaysToPredict(int days)
{
	daysToPredict = days;
}
	
int parameter::getMinimumElevation()
{
	return ui->minElevText->toPlainText().toInt();
}

void parameter::setMinimumElevation(int elev)
{
	minimumElevation = elev;
}