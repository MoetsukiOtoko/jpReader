#include "TranslationRequestHandler.h"
#include <QJsonObject>
#include <QJsonArray>
#include <QJsonDocument>
#include <QtNetwork/QtNetwork>

TranslationRequestHandler::TranslationRequestHandler(QObject *parent)
        : QObject(parent), networkManager(new QNetworkAccessManager(this))
{

}

void TranslationRequestHandler::startStreaming(const QString &input)
{
    // (6/6/23) TODO: make some of these objects members for speed.
    QJsonArray msgArray;

    QJsonObject prompt;
    prompt["role"] = "user";
    prompt["content"] = requestString;
    msgArray.append(prompt);

    QJsonObject req;
    req["role"] = "user";
    req["content"] = input;
    msgArray.append(req);

    QUrl url("https://api.openai.com/v1/chat/completions");
    QNetworkRequest request(url);
    QByteArray openaiApiKey = qgetenv("OPENAI_API_KEY");

   /*Set your API key, streaming flag, and any other headers required by the OpenAI API*/
    request.setRawHeader("Content-Type", "application/json");
    request.setRawHeader("Authorization", QByteArray("Bearer ").append
            (openaiApiKey));

    /*Create a JSON object for the request body*/
    QJsonObject requestBody;
    requestBody["model"] = "gpt-3.5-turbo";
    requestBody["messages"] = msgArray;
    requestBody["max_tokens"] = 3000;
    requestBody["temperature"] = 0;
    requestBody["stream"] = true;

    /*Convert the JSON object to a QByteArray*/
    QByteArray jsonData = QJsonDocument(requestBody).toJson();

    QNetworkReply *reply = networkManager->post(request, jsonData);
    connect(reply, &QNetworkReply::readyRead, this, &TranslationRequestHandler::onReadyRead);
}

void TranslationRequestHandler::onReadyRead()
{
    QNetworkReply *reply = qobject_cast<QNetworkReply *>(sender());
    if (reply)
    {
        QByteArray data = reply->readAll();
        QTextStream stream(data);

        while (!stream.atEnd())
        {
            QString line = stream.readLine();
//                qDebug() << line;
            if (line.startsWith("data:"))
            {
                QString eventData = line.mid(5).trimmed();
                if (eventData == "[DONE]")
                {
//                        qDebug() << "Stream terminated";
                    try
                    {
                        reply->abort();
                    }
                        // (5/9/23) TODO: FIX THIS
                    catch (...)
                    {

                    }
                }
                else
                {
                    QJsonDocument jsonDoc = QJsonDocument::fromJson
                            (eventData.toUtf8());
                    QJsonObject jsonObject = jsonDoc.object();
                    QJsonArray choices = jsonObject["choices"].toArray();
                    QString responseText = choices[0].toObject()["delta"]
                            .toObject()["content"].toString();
                    // Process the data as needed
                    Q_EMIT TranslationRequestHandler::sendNewDataReceived(responseText);
                }
            }
        }
    }

}
