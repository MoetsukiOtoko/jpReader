#include "keyBinds.h"
#include <QKeyEvent>
#include <QApplication>
#include "util/globalmediator.h"

bool keyBinds::eventFilter(QObject *obj, QEvent *event)
{
    if (event->type() == QEvent::KeyPress) {
        QKeyEvent *keyEvent = static_cast<QKeyEvent*>(event);
        auto eKey = keyEvent->key();
        if (eKey == Qt::Key_A)
        {
            Q_EMIT GlobalMediator::getGlobalMediator()->sendSelectedTextAudioRequested();
        }
        else if (eKey == Qt::Key_Escape)
        {
            Q_EMIT GlobalMediator::getGlobalMediator()->sendHideRequested();
        }
        else if (eKey == Qt::Key_T)
        {
            Q_EMIT GlobalMediator::getGlobalMediator()->sendTranslationButtonPressed();
            Q_EMIT GlobalMediator::getGlobalMediator()->sendHideDefinition();
        }
        else if (eKey == Qt::Key_F20)
        {
            Q_EMIT GlobalMediator::getGlobalMediator()->sendShowRequested();
        }
        else
        {
            return QObject::eventFilter(obj, event);
        }

        return true;
    }
    else if (event->type() == QEvent::ActivationChange)
    {
        if (!QApplication::activeWindow())
        {
            Q_EMIT GlobalMediator::getGlobalMediator()->sendHideDefinition();
        }
        return QObject::eventFilter(obj, event);
    }
    else
    {
        return QObject::eventFilter(obj, event);
    }
}
