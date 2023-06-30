#include "LeftTopBar.h"

LeftTopBar::LeftTopBar(QWidget *parent)
        : QWidget(parent)
{
    setStyleSheet("color: #44aaff; background-color: #0c0c0c; border: 2px solid #44aaff;");
    QHBoxLayout* qhBoxLayout = new QHBoxLayout(this);
    countLabel = new QLabel("文字数: 0", this);
    QFont font("NotoSansCJK-Regular");
    countLabel->setFont(font);

    qhBoxLayout->addWidget(countLabel);
    setLayout(qhBoxLayout);
    qhBoxLayout->setMargin(0);
}

void LeftTopBar::setCountText(const QString &newCountString)
{
    countLabel->setText("文字数: " + newCountString);
}
