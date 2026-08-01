// clean example.cpp better then the other versions
#include "Framework.hpp"
#include "Window.hpp"
#include "Text.hpp"
#include "Button.hpp"
#include "VerticalLayout.hpp"

#include <iostream>


int main()
{
    // Create application
    App app;


    // Create window
    Window window("NewFramework Example", 800, 600);



    // Create text widgets
    Text* title = window.createText("NewFramework Demo");

    title->setFontSize(35);
    title->setTextColor("white");
    title->setBackgroundColor("#333333");



    Text* info = window.createText("Click the button!");

    info->setFontSize(20);
    info->setTextColor("yellow");



    // Create button
    Button* button = window.createButton("Click Me");


    button->setSize(150, 50);
    button->setBackgroundColor("#0078ff");
    button->setTextColor("white");



    // Button event
    button->onClick.connect([button, info]()
    {
        std::cout << "Button clicked!\n";

        button->setTextValue("Clicked!");

        info->setTextValue("Button was pressed!");
    });



    // Create layout
    VerticalLayout menu(100, 100, 30);


    menu.add(title);
    menu.add(info);
    menu.add(button);


    // Apply layout
    menu.update();



    // Show window
    window.show();


    // Start application
    return app.run();
}