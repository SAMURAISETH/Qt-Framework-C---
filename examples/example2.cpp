#include "Framework.hpp"

#include "Window.hpp"

#include "Text.hpp"
#include "Button.hpp"

#include "VerticalLayout.hpp"
#include "HorizontalLayout.hpp"

#include <iostream>

int main()
{
    App app;

    Window bar("QTBar", 1920, 32);

    Text* workspace = bar.createText(
        " 1  2  3  4 "
    );

    Text* title = bar.createText("Desktop");

    Text* cpu = bar.createText(" CPU 0%");

    Text* memory = bar.createText("󰍛 RAM 0%");
    
    Text* clock = bar.createText("󰥔 12:00");
}