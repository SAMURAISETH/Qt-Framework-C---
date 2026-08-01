#pragma once
#include <vector>
#include "Widget.hpp"

class Layout
{
    protected:
        std::vector<Widget*> children;
    

    public:
        void add(Widget* widget);
        
};