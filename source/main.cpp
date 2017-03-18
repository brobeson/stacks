#include <iostream>
#include <QApplication>
#include "main_window.h"
#include "setup_application.h"


int main(int argc, char* argv[])
{
    // set up the application
    QApplication application(argc, argv);
    stacks::setup_application(application);

    // set up the main window
    main_window m;
    m.showMaximized();

    std::cout << "Welcome to Stacks!\n";
    return application.exec();
}
