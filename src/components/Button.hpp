#pragma once

#include <QPushButton>
#include <functional>
#include "Widget.hpp"

class Button : public QPushButton, public Widget
{
public:
    Button(const char* text);

    void onClick(std::function<void()> callback);
    void setTextValue(const char* text);
};