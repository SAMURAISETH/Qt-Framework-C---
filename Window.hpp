#pragma

#include <QWidget>
#include <QVBoxLayout>

class Window
{
    private:
        QWidget* window;
        QVBoxLayout* layout;

    public:
        Window(const char* title, int width, int height);
        
        void add(QWidget* widget);
        void show();
};