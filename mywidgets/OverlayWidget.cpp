#include "OverlayWidget.h"
#include <QDebug>
#include "../util/globalmediator.h"

OverlayWidget::OverlayWidget(QWidget *parent)
        : QWidget(parent)
{
    setAttribute(Qt::WA_TransparentForMouseEvents);
    setAttribute(Qt::WA_NoSystemBackground);
    connect(GlobalMediator::getGlobalMediator(), &GlobalMediator::sendChangeTheme, this,
            &OverlayWidget::handleThemeChange);
    superScriptFont = QFont("Times", 11, QFont::Bold, true);
    penColor = QColor(199, 229, 255);
}

void OverlayWidget::paintEvent(QPaintEvent *event)
{
    QWidget::paintEvent(event);
    QPainter painter(this);
    painter.setPen(penColor);
    painter.setFont(superScriptFont);
    for (auto&& x : kanaMap)
    {
        painter.drawText(x.first, x.second);
    }
    painter.setFont(QFont("Arial", 13, QFont::Normal, true));
    painter.setPen(penColor);
    for (auto&& x : defMap)
    {
        painter.drawText(x.first, x.second);
    }
}

void OverlayWidget::clearOverlay()
{
    kanaMap.clear();
    defMap.clear();
    update();
}

void OverlayWidget::removeExpression(QString &expr)
{
    for (auto it = kanaMap.begin(); it != kanaMap.end(); ++it)
    {
        if (it->second == expr) kanaMap.erase(it->first);
    }
}

void OverlayWidget::handleThemeChange()
{
   standardTheme = !standardTheme;
}

void OverlayWidget::addOverlayText(const QString& text, QPoint position, bool isSuperscript)
{
    if (isSuperscript) kanaMap.insert_or_assign(position, text);
    else defMap.insert_or_assign(position,text);
    update();
}
