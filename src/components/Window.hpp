#pragma once

#include <QWidget>
#include <QVBoxLayout>
#include <vector>


class Text;
class Button;

class Window
{
    private:
        QWidget* window;
        QVBoxLayout* layout;
        std::vector<QWidget*> objects;

    public:
        Window(const char* title, int width, int height);

        Text* createText(const char* text);
        Button* createButton(const char* text);
        
        template<typename T>
        T* add(T* object) 
        {
            object->setParent(window);

            objects.push_back(object);
            return object;
        }
        
        void add(QWidget* widget);
        void show();
        void hide();

        //void setEnable(bool enable);
        void setVisible(bool visible);
        //void WindowTitle();
        
};