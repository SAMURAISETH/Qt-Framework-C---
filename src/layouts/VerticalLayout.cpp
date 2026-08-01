
#include "VerticalLayout.hpp"

VerticalLayout::VerticalLayout(int x, int y, int spacing)
{
    this->x = x;
    this->y = y;
    this->spacing = spacing;
}

void VerticalLayout::update()
{
    int currentY = y;

    for (auto child : children)
    {
        child->setPosition(x, currentY);

        currentY += spacing;
    }
}