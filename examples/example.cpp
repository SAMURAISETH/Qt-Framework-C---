#include "Framework.hpp"

#include "Window.hpp"

#include "Text.hpp"
#include <iostream>
#include <string>
#include "Widget.hpp"
#include <sstream>
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
    //char hello = "C++ Framework Example";

    Text* title = window.createText(
        "Qt-Framework-C"
    );

    Text* subtitle = window.createText("C++ Framework Example");

    title->setFontSize(40);
    title->setTextColor("white");
    title->setBackgroundColor("#222222");
    title->setPadding(10);
    

    subtitle->setFontSize(20);
    subtitle->setTextColor("Yellow");
    subtitle->setBackgroundColor("#222222");
    subtitle->setPadding(5);
    

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
        -10,
        300,
        500
    );

    button->setTextColorRGB(
        256,
        -50,
        -70
    );

    button->setPadding(
        10
    );



    // Event
    int i = 0;
    button->onClick.connect([status, &i]()
    {
        std::cout << "Button clicked!\n";

        status->setText(
            "Clicked!"
        );
        status->setSleepingTime(1000);
        
        status->setText(i);
        i++;
        
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
    HorizontalLayout hLayout(
        100,
        400,
        40
    );

    hLayout.add(subtitle);
    hLayout.update();



    // Window

    window.show();


     app.run();
}