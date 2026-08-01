#pragma once
#include "Widget.hpp"
#include <QLabel>

class Text : public QLabel, public Widget
{
public:

    Text(const char* text);

    void setTextValue(const char* text);

    void setFontSize(int size);
};