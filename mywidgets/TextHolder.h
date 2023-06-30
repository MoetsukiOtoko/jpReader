#ifndef JPREADER_TEXTHOLDER_H
#define JPREADER_TEXTHOLDER_H

#include <QTimer>
#include <QTextEdit>
#include <QPainter>
#include "OverlayWidget.h"
#include "../dict/dictionary.h"
#include "FuriganaCreatorPopup.h"

class TextHolder : public QTextEdit
{
    Q_OBJECT

public:
    explicit TextHolder(QWidget *parent = nullptr);
    ~TextHolder();

    int getPosition(const QPoint &pos) const;
    void findTerms();
    void styleText();
    QString selectText();
    QString getSentence() { return toPlainText(); }


public
    Q_SLOTS:
    void subscriptText(const QString& script);
    void superscriptText(const QString& script);
    void displayAddFuriganaWindow();
    void addFurigana();

    Q_SIGNALS:
    void sendNewSavedAreaRequested();
protected:

    void mouseMoveEvent(QMouseEvent *event) override;
    void leaveEvent(QEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void wheelEvent(QWheelEvent *event) override {}
    void resizeEvent(QResizeEvent *event) override;
    void contextMenuEvent(QContextMenuEvent *event) override;
    void hideEvent(QHideEvent *event) override;
    void moveEvent(QMoveEvent *event) override;

private:
    FuriganaCreatorPopup *furiganaCreationWidget;
    QTimer *m_findDelay;
    int m_currentIndex = -1;
    int m_lastEmittedIndex;
    int m_lastEmittedSize;
    Dictionary *m_dictionary;
    OverlayWidget *m_overlayWidget;
    QMap<QString, QMap<int, QString>> furiMap;
    bool standardTheme = true;
    QFont teFont;
    QString lastTranslated = "";

private:
    void initFuriganaCreationWidget();
    void saveFuriganaExpressions();
    void loadFuriganaExpressions();
    void setThemeStandard();
    void setThemeEnlarged();

private Q_SLOTS:
    void setSavedFurigana();
    void handleThemeChange();

};

#endif // JPREADER_TEXTHOLDER_H
