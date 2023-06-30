#ifndef JPREADER_TRANSLATIONHOLDER_H
#define JPREADER_TRANSLATIONHOLDER_H

#include <QTextEdit>
#include "../TranslationRequestHandler.h"

class TranslationHolder : public QTextEdit
{
    Q_OBJECT

public:
    explicit TranslationHolder(QWidget *parent = nullptr);
    QTextCursor *m_appendCursor;
    bool jpTextChanged = false;
    QString newJpText = "";

public
    Q_SLOTS:
    void handleNewDataReceived(const QString &data);
    void handleTranslationButtonPressed(const QString &text);

    Q_SIGNALS:

protected:
    void resizeEvent(QResizeEvent *event) override;
    void showEvent(QShowEvent *event) override;


private:
    TranslationRequestHandler *m_reqHandler;

private:
    void styleText();
    void setTheme();

};

#endif // JPREADER_TRANSLATIONHOLDER_H
