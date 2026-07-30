//Libs & Frameworks
#include "Framework.hpp"
#include "Window.hpp"
#include "Text.hpp"
#include "Button.hpp"

int main(){
    App app;

    Window window(
        "example framework",
        600,
        400
    );

    Text text("Hello Window");
    Button button("Click Me");

    window.add(&text);
    window.add(&button);

    window.show();

    app.run();

    return 0;
}