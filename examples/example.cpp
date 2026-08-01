//Libs & Frameworks
#include "Framework.hpp"
#include "Window.hpp"
#include "Text.hpp"
#include "Event.hpp"
#include "VerticalLayout.hpp"
#include "HorizontalLayout.hpp"
#include "Button.hpp"
#include <iostream>

int main() {
    App app;
    //Style style;

    Window window("example framework", 1000,1000);

    Text* text = window.createText("Hello World");

    Text* text2 = window.createText("Hello World 2");

    Button* button1 = window.createButton("Click");
    Button* button2 = window.createButton("Click 2");
    Button* button3 = window.createButton("Click 3");

// position by pixles
    
    text->setFontSize(30);

    
    text2->setFontSize(30);

    
    button1->setSize(100, 100);
    button2->setSize(100, 100);
    button3->setSize(100, 100);

button1->onClick.connect([button1]()
{
    std::cout << button1 << "\n";
    button1->setTextValue("67!!!");
});

button2->onClick.connect([button2]()
{
    std::cout << button2 << "\n";
    button2->setTextValue("67!!!");
});

button3->onClick.connect([button3]()
{
    std::cout << button3 << "\n";
    button3->setTextValue("67!!!");

});

button1->setBackgroundColor("red");

button3->setBackgroundColor("blue");
button3->setTextColor("black");
button2->setBackgroundColor("green");
text->setTextColor("blue");

button1->setPadding(100);
button1->autoSize();

HorizontalLayout layout(50, 50, 100);
layout.add(button1);
layout.add(button2);
layout.add(button3);
layout.add(text);
layout.add(text2);
layout.update();


    window.show();

    app.run();

    return 0;
}