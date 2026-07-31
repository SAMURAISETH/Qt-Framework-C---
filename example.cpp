//Libs & Frameworks
#include "Framework.hpp"
#include "Window.hpp"
#include "Text.hpp"
#include "Button.hpp"

int main(){
    App app;

    Window window(
        "example framework",
        400,
        400
    );

    Text text("Waiting...");

    Button button("Click Me");

    button.onClick([&](){
        text.setTextValue("Clicked!");
    });


    window.add(&text);
    /* make features more advance but simple   
        button.onClick([](){
            std::cout << "Clicked!";
        })*/
    window.add(&button);

    window.show();

    app.run();

    return 0;
}