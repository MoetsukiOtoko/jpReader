#ifndef JPREADER_TRANSLATIONREQUESTHANDLER_H
#define JPREADER_TRANSLATIONREQUESTHANDLER_H

#include <QObject>
#include <QtNetwork/QNetworkAccessManager>
#include <curl/curl.h>

class TranslationRequestHandler : public QObject
{
Q_OBJECT

public:
    explicit TranslationRequestHandler(QObject *parent = nullptr);

public Q_SLOTS:
    void startStreaming(const QString &input);
    void onReadyRead();

Q_SIGNALS:
    void sendNewDataReceived(const QString& data);

protected:

private:
    QNetworkAccessManager* networkManager;
    QString requestString = "I will send you Japanese sentences. Take the sentence and give a natural sounding translation of the sentence. For example if I input:私は本が好き. Please respond with:I like books.";

};

#endif // JPREADER_TRANSLATIONREQUESTHANDLER_H
