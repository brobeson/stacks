/**
 * \file
 * \brief       The main entry point for program execution.
 */

#include <QApplication>
#include "ui/main_window.h"
#include "setup_application.h"

/**
 * \brief       The main entry point for the program.
 * \param[in]   argc    The number of command line arguments provided.
 * \param[in]   argv    The list of command line arguments provided.
 * \return      An integer exit code.
 * \retval      0       Indicates that the program ran successfully.
 * \throws      Unknown
 */
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
