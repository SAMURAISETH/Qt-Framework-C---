#include "Widget.hpp"

Widget::Widget(QWidget* widget)
{
    object = widget;
}

void Widget::setPosition(int x, int y)
{
    object->move(x, y);
}
void Widget::setSize(int width, int height)
{
    object->resize(width, height);
}