#pragma once

#include <QPushButton>

class Button : public QPushButton
{
public:

    Button(const char* text) 
        : QPushButton(text)
    {

    }
};