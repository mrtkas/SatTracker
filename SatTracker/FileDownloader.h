#pragma once
#include <QObject>
#include <QByteArray>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>

class FileDownloader : public QObject
{
	Q_OBJECT
public:
	explicit FileDownloader(QUrl imageUrl, QObject *parent = 0);
	virtual ~FileDownloader();
	QByteArray downloadedData() const;

signals:
	void downloaded();

	private slots:
	void fileDownloaded(QNetworkReply* pReply);

private:
	QNetworkAccessManager WebCtrl;
	QByteArray downloadedSatelliteInfo_;
};
