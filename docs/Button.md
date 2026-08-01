# Button

Creates clickable buttons.

## Example


```c++
Button* play = window.createButton("Play");


play->onClick.connect([](){

    std::cout << "Pressed";

});
```