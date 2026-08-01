#pragma once

#include "Layout.hpp"

class HorizontalLayout : public Layout
{
    private:
        int x;
        int y;
        int spacing;

    public:
        HorizontalLayout(int x, int y, int spacing);

        void update();
};