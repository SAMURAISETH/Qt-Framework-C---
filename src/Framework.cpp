#include "Framework.hpp"


App::App()
{
    static int argc = 1;
    static char* argv[] = { (char*)"app" };

    qtApp = new QApplication(argc, argv);
}


void App::run()
{
    qtApp->exec();
}