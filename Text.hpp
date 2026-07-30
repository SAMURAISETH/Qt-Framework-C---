#pragma once

#include <QLabel>

class Text : public QLabel
{
    public:

        Text(const char* text)
            : QLabel(text)
        {

        }
};