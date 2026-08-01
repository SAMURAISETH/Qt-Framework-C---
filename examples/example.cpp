//Libs & Frameworks
#include "Framework.hpp"
#include "Window.hpp"
#include "Text.hpp"
#include "Event.hpp"
#include "VerticalLayout.hpp"
#include "Button.hpp"
#include <iostream>

int main() {
    App app;

    Window window("example framework", 1000,1000);
    

    Text* text = window.createText("Hello World");

    Text* text2 = window.createText("Hello World 2");

    Button* button1 = window.createButton("Click");

// position by pixles
    
    text->setFontSize(30);

    
    text2->setFontSize(30);

    
    button1->setSize(100, 100);

   button1->onClick.connect([button1]()
{
    std::cout << button1 << "\n";

    button1->setTextValue("67!!!");
});

VerticalLayout layout(100, 100, 50);
layout.add(text);
layout.add(text2);
layout.add(button1);
layout.update();




    
  

    window.show();

    app.run();

    return 0;
}