#include "Text.hpp"

Text::Text(const char* text)
    : QLabel(text)
{

}

void Text::setTextValue(const char* text)
{
    setText(text);
}