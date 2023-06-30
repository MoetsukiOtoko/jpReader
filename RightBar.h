#ifndef JPREADER_RIGHTBAR_H
#define JPREADER_RIGHTBAR_H

#include <QWidget>

class RightBar : public QWidget
{
    Q_OBJECT

public:
    explicit RightBar(QWidget *parent = nullptr);

public
    Q_SLOTS:

    Q_SIGNALS:

protected:
    void paintEvent(QPaintEvent *event) override;

private:

};

#endif // JPREADER_RIGHTBAR_H
