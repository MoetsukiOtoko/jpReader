#include "TopBar.h"
#include <QPainter>

TopBar::TopBar(QWidget *parent)
        : QWidget(parent)
{
    setStyleSheet("background-color: #0c0c0c; border: 0px;");
}

void TopBar::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QPen pen;
    pen.setWidth(3);
    pen.setColor("#44aaff");
    painter.setPen(pen);

    painter.drawLine(0, 0, width() - 1, 0);
    painter.drawLine(0, 29, width()-30, 29);
    painter.drawLine(width() -1, 0, width()- 1, height());
    painter.drawLine(0, 0, 0, height()-1);
}
