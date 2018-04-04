#pragma once
#include "parameter.h"
#include <qstring.h>
class search
{
public:
	search();
	~search();

	void conductSearch();

	parameter* searchParameters;
	const QString baseURL = "http://www.n2yo.com/rest/v1/satellite/radiopasses/";
};

