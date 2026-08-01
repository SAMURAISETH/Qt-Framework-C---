#include "Framework.hpp"

#include "Window.hpp"

#include "Text.hpp"
#include "Button.hpp"

#include "VerticalLayout.hpp"

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
    title->setBackgroundColor("#222222");
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

    button->setBackgroundColor(
        "#0066ff"
    );

    button->setTextColor(
        "white"
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



    // Layout

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