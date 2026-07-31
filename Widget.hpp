#pragma once

#include <QWidget>

class Widget
{
    protected:
        QWidget* object;

    public:
        Widget(QWidget* widget);

        void setPosition(int x, int y);
        void setSize(int width, int height);
};