#include "renderarea.h"

RenderArea::RenderArea(QWidget *parent) :
    QWidget(parent),
    mBackgroundColor(0,0,255),
    mShapeColor(255,255,255)
{

}

QSize RenderArea::minimumSizeHint() const
{
    return QSize(100,100);
}

QSize RenderArea::sizeHint() const
{
    return QSize(400,200);
}



void RenderArea::paintEvent(QPaintEvent* event)
{
    QPainter painter(this);
    painter.setBrush(mBackgroundColor);
    painter.setRenderHint(QPainter::Antialiasing,true);
    painter.drawRect(this->rect());

    painter.setPen(mShapeColor);
    painter.drawLine(this->rect().bottomLeft(),this->rect().topRight());

}