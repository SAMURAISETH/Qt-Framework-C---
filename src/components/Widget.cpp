#include "Widget.hpp"
#include "Text.hpp"
#include "Button.hpp"

Widget::Widget()
{
    object = nullptr;
}

Widget::Widget(QWidget* widget)
{
    object = widget;
}

void Widget::updateStyle()
{
    QString style;

    if(!backgroundColor.isEmpty())
        style += QString("background-color: %1;").arg(backgroundColor);

    if(!textColor.isEmpty())
        style += QString("color: %1;").arg(textColor);
    if(padding >= 0)
        style += QString("padding: %1px;").arg(padding);

    object->setStyleSheet(style);
}

void Widget::setPosition(int x, int y)
{
    object->move(x, y);
}
void Widget::setSize(int width, int height)
{
    object->resize(width, height);
}
void Widget::setBackgroundColor(const char* color)
{
    backgroundColor = color;
    updateStyle();
}
void Widget::autoSize()
{
    object->adjustSize();
}

void Widget::setTextColor(const char* color)
{
    textColor = color;
    updateStyle();
}
void Widget::setPadding(int value)
{
    padding = value;
    updateStyle();
}