#include "stdafx.h"
#include "output.h"


output::output()
{
}


output::~output()
{
}

void writeDataToTextBrowser()
{
	ui->satInfoBox->append(FileDownloader::downloadedData);
}