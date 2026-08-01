#pragma once

#include <QWidget>
#include <QString>

class Widget
{
    protected:
        QWidget* object;
        
        QString backgroundColor;
        QString textColor;

        void updateStyle();

    public:
        Widget();
        Widget(QWidget* widget);

        void setPosition(int x, int y);
        void setSize(int width, int height);

        void setBackgroundColor(const char* color);
        void setTextColor(const char* color);
};