#include "Button.hpp"
#include "Widget.hpp"
Button::Button(const char* text)
    : QPushButton(text),
      Widget()
{
    object = this;
    QObject::connect(
        this,
        &QPushButton::clicked,
        [this]()
        {
            onClick.call();
        }
    );
}


void Button::setTextValue(const char* text)
{
    setText(text);
}