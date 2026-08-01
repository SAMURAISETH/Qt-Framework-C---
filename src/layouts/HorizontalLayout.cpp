
#include "HorizontalLayout.hpp"

HorizontalLayout::HorizontalLayout(int x, int y, int spacing)
{
    this->x = x;
    this->y = y;
    this->spacing = spacing;
}

void HorizontalLayout::update()
{
    int currentX = x;

    for (auto child : children)
    {
        child->setPosition(currentX, y);

        currentX += spacing;
    }
}