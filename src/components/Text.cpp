#include "Text.hpp"
#include "Button.hpp"
Text::Text(const char* text)
    : QLabel(text),
    Widget(this)
{

}

void Text::setTextValue(const char* text)
{
    setText(text);
}

void Text::setFontSize(int size)
{
    QFont font = this->font();

    font.setPointSize(size);

    setFont(font);
}