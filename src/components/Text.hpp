#pragma once

#include "Widget.hpp"
#include <QLabel>
#include <sstream>

class Text : public QLabel, public Widget
{
public:

    template<typename T>
    Text(T value)
        : QLabel(), Widget()
    {
        object = this;
        setText(value);
    }

    template<typename T>
    void setText(T value)
    {
        std::stringstream ss;
        ss << value;

        QLabel::setText(
            QString::fromStdString(ss.str())
        );
    }

    void setTextValue(const char* text);

    void setFontSize(int size);
};