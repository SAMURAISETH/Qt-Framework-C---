#pragma once

#include <QLabel>

class Text : public QLabel
{
public:

    Text(const char* text);

    void setTextValue(const char* text);
};