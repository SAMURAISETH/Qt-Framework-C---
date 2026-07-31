#include "Text.hpp"

Text::Text(const char* text)
    : QLabel(text),
    Widget(this)
{

}

void Text::setTextValue(const char* text)
{
    setText(text);
}