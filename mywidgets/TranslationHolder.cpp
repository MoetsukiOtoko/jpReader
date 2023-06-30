#include "TranslationHolder.h"
#include "../util/utils.h"
#include "../util/globalmediator.h"

TranslationHolder::TranslationHolder(QWidget *parent)
        : QTextEdit(parent)
{
    m_reqHandler = new TranslationRequestHandler(this);
    document()->setDocumentMargin(0);
    setReadOnly(true);
    styleText();
    setTheme();
    setText("I can imagine that the old man was probably yelling because the clerk was unfriendly"
            " anyway, the item he wanted wasn't there, or something more unreasonable.");

    setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Expanding);
    setVerticalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
    setHorizontalScrollBarPolicy(Qt::ScrollBarPolicy::ScrollBarAlwaysOff);
    m_appendCursor = new QTextCursor(document());
    connect(m_reqHandler, &TranslationRequestHandler::sendNewDataReceived,
            this, &TranslationHolder::handleNewDataReceived);
    connect(GlobalMediator::getGlobalMediator(), &GlobalMediator::sendJpTextChanged, this,
            &TranslationHolder::handleTranslationButtonPressed);
}

void TranslationHolder::styleText()
{
    auto font = QFont("NotoSansCJK-Regular");
    font.setPointSize(18);
    setFont(font);
    QTextBlockFormat blockFormat = textCursor().blockFormat();
    blockFormat.setLineHeight(150, QTextBlockFormat::ProportionalHeight);
    textCursor().setBlockFormat(blockFormat);
}

void TranslationHolder::resizeEvent(QResizeEvent *event)
{
    QTextEdit::resizeEvent(event);
    QSize size(parentWidget()->size().width()-200, parentWidget()->height());
    setFixedSize(parentWidget()->size());
    document()->setPageSize(size);
}

void TranslationHolder::handleNewDataReceived(const QString &data)
{
    m_appendCursor->movePosition(QTextCursor::End);
    m_appendCursor->insertText(data);
}

void TranslationHolder::showEvent(QShowEvent *event)
{
    QTextEdit::showEvent(event);
}

void TranslationHolder::setTheme()
{
    setStyleSheet(
            "color: #aaff44; background-color: transparent; padding-top: 50px;"
            " padding-bottom: 50px; border: 0px;");
}

void TranslationHolder::handleTranslationButtonPressed(const QString &text)
{
    document()->clear();
    m_reqHandler->startStreaming(text);
    GlobalMediator::getGlobalMediator()->sendHideDefinition();

}



