# examples/example.cpp

```cpp
#include "Framework.hpp"
#include "Window.hpp"
#include "Text.hpp"
#include "Button.hpp"
#include "VerticalLayout.hpp"
#include "HorizontalLayout.hpp"

#include <iostream>
#include <string>

int main()
{
    App app;

    Window window(
        "Qt-Framework-C--- Example",
        1000,
        700
    );

    // Title
    Text* title = window.createText(
        "Qt-Framework-C"
    );

    title->setFontSize(40);
    title->setTextColor("white");
    title->setBackgroundColor("#222222");
    title->setPadding(10);

    // Subtitle
    std::string hello = "C++ Framework Example";

    Text* subtitle = window.createText(hello);

    subtitle->setFontSize(20);
    subtitle->setTextColor("yellow");
    subtitle->setBackgroundColor("#222222");
    subtitle->setPadding(5);

    // Status text
    Text* status = window.createText(
        "Waiting..."
    );

    status->setFontSize(20);
    status->setTextColor("yellow");

    // Button
    Button* button = window.createButton(
        "Click Me"
    );

    button->setSize(150, 50);

    button->setBackgroundColorRGB(
        37,
        99,
        235
    );

    button->setTextColorRGB(
        255,
        255,
        255
    );

    button->setPadding(10);

    // Event
    int count = 0;

    button->onClick.connect([status, &count]()
    {
        count++;

        std::cout << "Button clicked: " << count << '\n';

        status->setTextValue(count);
    });

    // Vertical layout
    VerticalLayout layout(
        100,
        100,
        40
    );

    layout.add(title);
    layout.add(status);
    layout.add(button);

    layout.update();

    // Horizontal layout
    HorizontalLayout hLayout(
        100,
        400,
        40
    );

    hLayout.add(subtitle);

    hLayout.update();

    // Add subtitle to window
    window.add(subtitle);

    // Show window
    window.show();

    return app.run();
}
```
