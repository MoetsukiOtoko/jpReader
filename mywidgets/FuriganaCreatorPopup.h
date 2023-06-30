#ifndef JPREADER_FURIGANACREATORPOPUP_H
#define JPREADER_FURIGANACREATORPOPUP_H

#include <QWidget>
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QFocusEvent>

class FuriganaCreatorPopup : public QWidget
{
    Q_OBJECT


public:
    explicit FuriganaCreatorPopup(QWidget *parent = nullptr);
    ~FuriganaCreatorPopup();

public:
    QString expression;
    QMap<int, QLineEdit*> furiMap;

public Q_SLOTS:
    void setExpression(QString& expr);
    void handleOkButtonPushed();

    Q_SIGNALS:
    void sendOkButtonPushed();
    void sendClearButtonPushed();

protected:
    void paintEvent(QPaintEvent *event) override;
    void moveEvent(QMoveEvent *event) override;
    bool eventFilter(QObject *obj, QEvent *event) override;
private:
    QPushButton* m_button;
    QPushButton* m_cancelButton;
    QPushButton* m_clearButton;
};

#endif // JPREADER_FURIGANACREATORPOPUP_H
