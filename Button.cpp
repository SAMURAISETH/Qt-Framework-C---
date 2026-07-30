#include "Button.hpp"

Button::Button(const char* text)
    : QPushButton(text)
{

}

void Button::setTextValue(const char* text)
{
    setText(text);
}

void Button::onClick(std::function<void()> callback)
{
    QObject::connect(this, 
        &QPushButton::clicked, 
        [callback]()
        {
            callback();
        }
    );
}
