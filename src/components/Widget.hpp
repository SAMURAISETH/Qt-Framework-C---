#pragma once

#include <QWidget>
#include <QString>

class Widget
{
    protected:
        QWidget* object;
        int padding = -1;
        QString backgroundColor;
        QString textColor;

        void updateStyle();

    public:
        Widget();
        Widget(QWidget* widget);
        
        void setPadding(int value);
        void setPosition(int x, int y);
        void setSize(int width, int height);

        void setBackgroundColor(const char* color);
        void setTextColor(const char* color);
        void setTextColorRGB(int r, int g, int b);
        void setBackgroundColorRGB(int r, int g, int b);


        void autoSize();
};