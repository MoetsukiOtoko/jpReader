#include "RightBar.h"
#include <QPainter>

RightBar::RightBar(QWidget *parent)
        : QWidget(parent)
{
    setStyleSheet("background-color: #0c0c0c; border: 0px;");
    setWindowFlags(Qt::FramelessWindowHint);
}

void RightBar::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPen pen;
    pen.setWidth(3);
    pen.setColor("#44aaff");
    painter.setPen(pen);

    painter.drawLine(0, 1, 0, height());
    painter.drawLine(width() - 1, 0, width() - 1, height());
    painter.drawLine(0, height() - 1, width(), height() - 1);
}
