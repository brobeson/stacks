#include <QApplication>
#include "ui/main_window.h"
#include "setup_application.h"

int main(int argc, char* argv[])
{
    // set up the application
    QApplication application(argc, argv);
    stacks::setup_application(application);

    // set up the main window
    stacks::ui::main_window m;
    m.showMaximized();

    return application.exec();
}
