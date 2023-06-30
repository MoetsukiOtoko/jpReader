#ifndef JPREADER_SUBSTRINGBUTTON_H
#define JPREADER_SUBSTRINGBUTTON_H

#include <QPushButton>

class SubStringButton : public QPushButton
{
Q_OBJECT

public:
    explicit SubStringButton(int index, QWidget *parent = nullptr);
    int m_index;
    QPixmap filledCircle;
    QPixmap emptyCircle;

public Q_SLOTS:

Q_SIGNALS:

protected:

private:


};

#endif // JPREADER_SUBSTRINGBUTTON_H
