#include "Text.hpp"
#include <QFont>
void Text::setFontSize(int size)
{
    QFont font = this->font();
    font.setPointSize(size);
    this->setFont(font);
}