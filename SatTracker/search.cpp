#include "stdafx.h"
#include "search.h"
#include <qstring.h>


search::search()
{
}


search::~search()
{
}

void search::conductSearch()
{
	searchParameters = new parameter();

	QString apiNo = searchParameters->getApiNo();
	QString noradId = QString::number(searchParameters->getNoradID());
	QString altitude = QString::number(searchParameters->getObserverAltitude());
	QString latitude = QString::number(searchParameters->getObserverLatitude());
	QString longitude = QString::number(searchParameters->getObserverLongitude());
	QString days = QString::number(searchParameters->getDaysToPredict());
	QString minElev = QString::number(searchParameters->getMinimumElevation());


	
	
	


}