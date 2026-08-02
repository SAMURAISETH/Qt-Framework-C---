#pragma once

#include <QPushButton>
#include <sstream>

#include "Widget.hpp"
#include "Event.hpp"

class Button : public QPushButton, public Widget
{
public:

    Event onClick;
    Event onHover;

    template<typename T>
    Button(T value)
        : QPushButton(),
          Widget()
    {
        object = this;

        setTextValue(value);

        QObject::connect(
            this,
            &QPushButton::clicked,
            [this]()
            {
                onClick.call();
            }
        );
    }


    template<typename T>
    void setTextValue(T value)
    {
        std::stringstream ss;
        ss << value;

        QPushButton::setText(
            QString::fromStdString(ss.str())
        );
    }
};