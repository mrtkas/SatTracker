#pragma once
#include "parameter.h"
#include <qstring.h>
#include <QUrl>
#include "FileDownloader.h"

class search : QObject
{
public:
	search();
	~search();

	QUrl makeURL();
	void conductSearch();

	parameter* searchParameters;
	const QString baseURL_ = "http://www.n2yo.com/rest/v1/satellite/radiopasses/";
};

