#ifndef JPREADER_CAPTUREWINDOW_H
#define JPREADER_CAPTUREWINDOW_H

#include <QWidget>
#include <QPixmap>
#include <QPoint>
#include <QRubberBand>

class CaptureWindow : public QWidget
{
Q_OBJECT

public:
    explicit CaptureWindow(QWidget *parent = nullptr);

public Q_SLOTS:

Q_SIGNALS:
    void sendSelectionFinished(QRect capturedRect);

protected:
    void keyPressEvent(QKeyEvent *event) override;
    void mousePressEvent(QMouseEvent *event) override;
    void mouseMoveEvent(QMouseEvent *event) override;
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    QPixmap originalPixmap;
    QPoint origin;
    QRubberBand *rubberBand;

};

#endif // JPREADER_CAPTUREWINDOW_H
