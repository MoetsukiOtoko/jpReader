#include "SubStringButton.h"
#include "util/utils.h"
#include "util/globalmediator.h"

SubStringButton::SubStringButton(int index, QWidget *parent)
        : QPushButton(parent), m_index(index)
{
    filledCircle = DirectoryUtils::getConfigDir() + "png/circleClosed.png";
    emptyCircle = DirectoryUtils::getConfigDir() + "png/circleOpen.png";
    !m_index ? setIcon(filledCircle) : setIcon(emptyCircle);
    setIconSize(QSize(20, 20));
    setFixedSize(QSize(20, 20));
    setStyleSheet("QPushButton { border: none; }");
    setCursor(Qt::PointingHandCursor);

    connect(this, &QPushButton::pressed, this,
            [&](){GlobalMediator::getGlobalMediator()->sendSubstringButtonPressed(m_index);});
}



