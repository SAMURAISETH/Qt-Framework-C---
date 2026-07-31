#pragma once

#include <QApplication>


class App
{
private:
    QApplication* qtApp;

public:
    App();

    void run();
};