#include "FuriganaCreatorPopup.h"
#include <QPainter>
#include "../util/utils.h"
#include <QDebug>
#include <QApplication>

FuriganaCreatorPopup::FuriganaCreatorPopup(QWidget *parent)
        : QWidget(parent)
{
    setWindowFlags(Qt::Popup);
    setFixedWidth(150);
    m_button = new QPushButton("Ok", this);
    m_clearButton = new QPushButton("Clear", this);
    m_cancelButton = new QPushButton("Cancel", this);
    m_button->setFixedSize(40,25);
    m_cancelButton->setFixedSize(40,25);
    m_clearButton->setFixedSize(40,25);
    this->installEventFilter(this);

    connect(m_button, &QPushButton::pressed, this, &FuriganaCreatorPopup::handleOkButtonPushed);
    connect(m_cancelButton, &QPushButton::pressed, this, [&](){ hide();});
    connect(m_clearButton, &QPushButton::pressed, this, &FuriganaCreatorPopup::sendClearButtonPushed);
}

void FuriganaCreatorPopup::setExpression(QString &expr)
{
    for (auto& i : furiMap)
    {
        i->deleteLater();
    }
    furiMap.clear();
    expression = QString(expr);
    int expressionsHeight = expr.length() * 50;
    setFixedHeight(expressionsHeight > 100 ? expressionsHeight : 100);
    for (int i = 0; i < expr.length(); i++)
    {
        if (CharacterUtils::isKanji(QString(expr[i])))
        {
            auto *edit = new QLineEdit(this);
            edit->setGeometry(50, 10 + i * 50, 40, 20);
            furiMap[i] = edit;
        }
    }

    furiMap[0]->setFocus();
}

void FuriganaCreatorPopup::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);

    QFont font("Arial", 13);
    painter.setFont(font);

    painter.setPen(Qt::white);

    for (int i = 0; i < expression.length(); i++)
    {
        painter.drawText(6, 10 + i * 50, 40, 20, Qt::AlignCenter, QString(expression[i]));
    }
}

FuriganaCreatorPopup::~FuriganaCreatorPopup()
{
    m_button->deleteLater();
}

void FuriganaCreatorPopup::moveEvent(QMoveEvent *event)
{
    QWidget::moveEvent(event);
    m_button->setGeometry(105,5,35,25);
    m_cancelButton->setGeometry(105,36,35,25);
    m_clearButton->setGeometry(105,68,35,25);
}

void FuriganaCreatorPopup::handleOkButtonPushed()
{
    Q_EMIT sendOkButtonPushed();
}

bool FuriganaCreatorPopup::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress)
    {
        QKeyEvent* keyEvent = static_cast<QKeyEvent*>(event);
        if (keyEvent->key() == Qt::Key_Return || keyEvent->key() == Qt::Key_Enter)
        {
            Q_EMIT sendOkButtonPushed();
        }
    }
    return QObject::eventFilter(obj, event);
}







