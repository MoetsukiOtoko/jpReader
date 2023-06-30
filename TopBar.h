#ifndef JPREADER_TOPBAR_H
#define JPREADER_TOPBAR_H

#include <QWidget>

class TopBar : public QWidget
{
Q_OBJECT

public:
    explicit TopBar(QWidget *parent = nullptr);

public Q_SLOTS:

Q_SIGNALS:

protected:
    void paintEvent(QPaintEvent *event) override;

private:

};

#endif // JPREADER_TOPBAR_H
