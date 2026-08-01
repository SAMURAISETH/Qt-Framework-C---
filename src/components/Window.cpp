#include "Window.hpp"
#include "Text.hpp"
#include "Button.hpp"

Window::Window(const char* title, int width, int height)
{
    window = new QWidget();

    window->setWindowTitle(title);
    window->resize(width, height);

    layout = new QVBoxLayout;

    window->setLayout(layout);

}

Text* Window::createText(const char* text)
{
    Text* object = new Text(text);

    object->setParent(window);

    objects.push_back(object);

    return object;
}


Button* Window::createButton(const char* text)
{
    Button* object = new Button(text);

    object->setParent(window);

    objects.push_back(object);

    return object;
}




void Window::add(QWidget* widget)
{
    widget->setParent(window);
}

void Window::setVisible(bool visible)
{
    window->setVisible(visible);
}

void Window::show()
{
    window->show();
}
void Window::hide()
{
    window->hide();
}