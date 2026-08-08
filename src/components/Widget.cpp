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

void Widget::setTextColorRGB(int r, int g, int b)
{
    textColor = QString("rgb(%1, %2, %3)").arg(r).arg(g).arg(b);
    if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255) {
        qWarning("We have set your color to white because you have entered an invalid RGB value. Please enter a value between 0 and 255 for each color channel.\n");
        setTextColorRGB(255, 255, 255);
    }

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
void Widget::setBackgroundColorRGB(int r, int g, int b)
{
    backgroundColor = QString("rgb(%1, %2, %3)").arg(r).arg(g).arg(b);
    if (r < 0 || r > 255 || g < 0 || g > 255 || b < 0 || b > 255) {
        qWarning("We have set your color to black because you have entered an invalid RGB value. Please enter a value between 0 and 255 for each color channel.\n");
        setBackgroundColorRGB(0, 0, 0);
        
    }

    updateStyle();
}
void Widget::setPadding(int value)
{
    padding = value;
    updateStyle();
}