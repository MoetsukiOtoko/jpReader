#ifndef JPREADER_OVERLAYWIDGET_H
#define JPREADER_OVERLAYWIDGET_H

#include <QWidget>
#include <QPainter>

class OverlayWidget : public QWidget
{
    Q_OBJECT

public:

    explicit OverlayWidget(QWidget *parent = nullptr);
    void addOverlayText(const QString& text, QPoint position, bool isSuperscript);
    void removeExpression(QString& expr);

public:
    QFont superScriptFont;

public Q_SLOTS:
    void clearOverlay();
    void handleThemeChange();

protected:

    void paintEvent(QPaintEvent *event) override;


private:
    struct QPointHash {
        size_t operator()(const QPoint& point) const {
            return std::hash<int>()(point.x()) ^ std::hash<int>()(point.y());
        }
    };
    std::unordered_map<QPoint, QString, QPointHash> kanaMap;
    std::unordered_map<QPoint, QString, QPointHash> defMap;
    bool standardTheme = true;
    QColor penColor = QColor(Qt::black);
};



#endif // JPREADER_OVERLAYWIDGET_H
