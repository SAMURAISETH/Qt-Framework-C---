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


    Window window(
        "Qt-Framework-C--- Example",
        1000,
        700
    );


    // Text

    Text* title = window.createText(
        "Qt-Framework-C"
    );

    title->setFontSize(40);
    title->setTextColor("white");
    title->setBackgroundColor("#");
    title->setPadding(10);



    Text* status = window.createText(
        "Waiting..."
    );

    status->setFontSize(20);
    status->setTextColor("yellow");



    // Button

    Button* button = window.createButton(
        "Click Me"
    ); 

    button->setSize(
        150,
        50
    );

    button->setBackgroundColorRGB(
        10,
        255,
        255
    );

    button->setTextColorRGB(
        255,
        50,
        70
    );

    button->setPadding(
        10
    );



    // Event

    button->onClick.connect([status]()
    {
        std::cout << "Button clicked!\n";

        status->setTextValue(
            "Clicked!"
        );
    });
    Button* Btton = window.createText("Custom Button");

    Btton->setSize(150, 10);
    Btton->setBackgroundColorRGB(0,100,59);
    Btton->setTextColorRGB(255,255,255);
    Btton->setPadding(20);

    Btton->onClick.connect([Btton])(
    {
        std::cout << "Other Button\n";
        Btton->setTextValue("Hellow World");
    });




    // Layout
    
        HorizontalLayout Layout(
            200, 
            200, 
            80
        );

        Layout.add(Button);
        Layout.update(); 

    VerticalLayout layout(
        100,
        100,
        40
    );


    layout.add(title);
    layout.add(status);
    layout.add(button);


    layout.update();



    // Window

    window.show();


    app.run();
}