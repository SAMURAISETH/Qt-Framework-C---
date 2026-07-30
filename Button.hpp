#pragma once

#include <QPushButton>
#include <functional>

class Button : public QPushButton
{
public:
    Button(const char* text);

    void onClick(std::function<void()> callback);
    void setTextValue(const char* text);
};