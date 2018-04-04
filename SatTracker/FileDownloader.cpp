#include "stdafx.h"
#include "FileDownloader.h"

FileDownloader::FileDownloader(QUrl searchURL, QObject *parent) :
	QObject(parent)
{
	connect(&WebCtrl, SIGNAL(finished(QNetworkReply*)),this, SLOT(fileDownloaded(QNetworkReply*)));

	QNetworkRequest request(searchURL);
	WebCtrl.get(request);
}

FileDownloader::~FileDownloader() { }

void FileDownloader::fileDownloaded(QNetworkReply* pReply)
{
	downloadedSatelliteInfo_ = pReply->readAll();
	//emit a signal
	pReply->deleteLater();
	emit downloaded();
}

QByteArray FileDownloader::downloadedData() const
{
	return downloadedSatelliteInfo_;
}