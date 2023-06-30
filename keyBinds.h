#ifndef JPREADER_KEYBINDS_H
#define JPREADER_KEYBINDS_H
#include <QObject>


class keyBinds : public QObject
{
    Q_OBJECT
public:
    bool eventFilter(QObject *obj, QEvent *event) override;
};


#endif //JPREADER_KEYBINDS_H