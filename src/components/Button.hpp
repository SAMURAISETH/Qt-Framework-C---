#pragma once

#include <QPushButton>
#include "Widget.hpp"
#include "Event.hpp"


class Button : public QPushButton, public Widget
{
public:

    Event onClick;
    Event onHover;

    Button(const char* text);

    void setTextValue(const char* text);
};