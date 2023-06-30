#include "CaptureWindow.h"
#include <QDesktopWidget>
#include <QApplication>
#include <QScreen>
#include <QMouseEvent>
#include <QPainter>
#include <QPalette>
#include <QDebug>
#include "util/utils.h"

CaptureWindow::CaptureWindow(QWidget *parent)
        : QWidget(parent)
{
    setAttribute(Qt::WA_DeleteOnClose);
    setWindowFlags(Qt::WindowStaysOnTopHint | Qt::FramelessWindowHint | Qt::Tool |
                   Qt::X11BypassWindowManagerHint);
    setCursor(Qt::CrossCursor);

    QPoint cursorPos = QCursor::pos();
    QScreen *cursorScreen = QGuiApplication::screenAt(cursorPos);
    if (cursorScreen == nullptr)
    {
        cursorScreen = QGuiApplication::primaryScreen();
    }

    QPixmap desktopPixmap(QApplication::desktop()->geometry().size());
    QPainter painter(&desktopPixmap);
    for (QScreen *screen: QGuiApplication::screens())
    {
        QPixmap screenPixmap = screen->grabWindow(0);
        QPoint screenTopLeft = screen->geometry().topLeft();
        painter.drawPixmap(screenTopLeft, screenPixmap);
    }
    painter.end();

    originalPixmap = desktopPixmap.copy(cursorScreen->geometry());

    QPalette palette;
    palette.setBrush(QPalette::Background, originalPixmap.scaled(cursorScreen->size()));
    setPalette(palette);

    setAttribute(Qt::WA_TranslucentBackground, true);
    setAttribute(Qt::WA_NoSystemBackground, false);

    setGeometry(cursorScreen->geometry());

    rubberBand = nullptr;

}

void CaptureWindow::keyPressEvent(QKeyEvent *event)
{
    if (event->key() == Qt::Key_Escape)
        close();
}

void CaptureWindow::mousePressEvent(QMouseEvent *event)
{
    origin = event->pos();
    if (!rubberBand)
        rubberBand = new QRubberBand(QRubberBand::Rectangle, this);
    rubberBand->setGeometry(QRect(origin, QSize()));
    rubberBand->show();
}

void CaptureWindow::mouseMoveEvent(QMouseEvent *event)
{
    rubberBand->setGeometry(QRect(origin, event->pos()).normalized());
}

void CaptureWindow::mouseReleaseEvent(QMouseEvent *event)
{
    QRect rect = rubberBand->geometry();
    QPixmap capture = originalPixmap.copy(rect);

    capture.save(DirectoryUtils::getConfigDir() + "capture.png");

    Q_EMIT sendSelectionFinished(rect);
    close();
}
