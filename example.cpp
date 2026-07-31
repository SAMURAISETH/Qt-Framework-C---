//Libs & Frameworks
#include "Framework.hpp"
#include "Window.hpp"
#include "Text.hpp"
#include "Button.hpp"

// int main(){
//     App app;

//     Window window(
//         "example framework",
//         1000,
//         1000
//     );

//     Text text("Waiting...");
//     text.setPosition(200, 600);
 
//     text.setSize(100, 200);

//     Button button("Click Me");

    

//     button.setPosition(500, 500);
//     button.setSize(200, 50);

//     button.onClick([&](){
//         text.setTextValue("Clicked!");
//     });
    
//     window.add(&text);

//     window.add(&button);

//     window.show();

//     app.run();

//     return 0;
// }
int main(){
    App app;

    Window window("Window", 500, 800);

    window.show();
    window.hide();

    app.run();
    
    return 0;
}