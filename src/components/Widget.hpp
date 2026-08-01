#pragma once

#include <QWidget>

class Widget
{
    protected:
        QWidget* object;

    public:
        Widget();
        Widget(QWidget* widget);

        void setPosition(int x, int y);
        void setSize(int width, int height);

        void setBackgroundColor(const char* color);
        void setTextColor(const char* color);
};