#pragma once

#include "Layout.hpp"

class VerticalLayout : public Layout
{
    private:
        int x;
        int y;
        int spacing;

    public:
        VerticalLayout(int x, int y, int spacing);

        void update();
};