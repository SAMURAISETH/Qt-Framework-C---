#include "Window.hpp"

Window::Window(const char* title, int width, int height)
{
    window = new QWidget();

    window->setWindowTitle(title);
    window->resize(width, height);

    layout = new(QVBoxLayout);

    window->setLayout(layout);

}

void Window::add(QWidget* widget)
{
    layout->addWidget(widget);
}

void Window::show()
{
    window->show();
}