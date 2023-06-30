#ifndef JPREADER_LEFTTOPBAR_H
#define JPREADER_LEFTTOPBAR_H

#include <QWidget>
#include <QLabel>
#include <QHBoxLayout>

class LeftTopBar : public QWidget
{
    Q_OBJECT

public:
    explicit LeftTopBar(QWidget *parent = nullptr);
    void setCountText(const QString& newCountString);

public
    Q_SLOTS:

    Q_SIGNALS:

protected:

private:
    QLabel *countLabel;

};

#endif // JPREADER_LEFTTOPBAR_H
