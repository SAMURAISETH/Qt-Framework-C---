#pragma once

#include <functional>

class Event
{
    private:
        std::function<void()> callback;

    public:
        void connect(std::function<void()> function)
        {
            callback = function;
        }

        void call()
        {
            if (callback)
            {
                callback();
            }
                
        }
};