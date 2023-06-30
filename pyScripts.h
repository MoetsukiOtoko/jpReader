#ifndef JPREADER_PYSCRIPTS_H
#define JPREADER_PYSCRIPTS_H
#include <QString>
#include <QObject>

class pyScripts : public QObject
{
    Q_OBJECT
public:
   static void playSelectedAudio(QString &string);
   static QString areaCapture();
    static std::string getClipboard();
private:
};


#endif //JPREADER_PYSCRIPTS_H