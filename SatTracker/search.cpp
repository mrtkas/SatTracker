#include "stdafx.h"
#include "search.h"
#include <qstring.h>


search::search()
{
}


search::~search()
{
}

QUrl search::makeURL()
{
	searchParameters = new parameter();

	QString apiNo = searchParameters->getApiNo();
	QString noradId = QString::number(searchParameters->getNoradID());
	QString altitude = QString::number(searchParameters->getObserverAltitude());
	QString latitude = QString::number(searchParameters->getObserverLatitude());
	QString longitude = QString::number(searchParameters->getObserverLongitude());
	QString days = QString::number(searchParameters->getDaysToPredict());
	QString minElev = QString::number(searchParameters->getMinimumElevation());

	QString appendable = noradId + "/" + latitude + "/" + longitude + "/" +
		altitude + "/" + days + +"/" + minElev + "/&apiKey" + apiNo;

	QString madeURL = baseURL_ + appendable;

	return QUrl(madeURL);
}

void search::conductSearch()
{
	dataCtrl = new FileDownloader(makeURL(), this);

	connect(dataCtrl, SIGNAL(downloaded()), this, SLOT(loadData()));
	

}