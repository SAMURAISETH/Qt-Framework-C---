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
    object->setStyleSheet(
        QString("background-color: %1;").arg(color)
    );
}
void Widget::setTextColor(const char* color)
{
    object->setStyleSheet(
        QString("color: %1;").arg(color)
    );
}