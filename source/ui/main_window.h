#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

/**
 * \file
 * \brief   Provides the application's main window.
 */

#include <QMainWindow>

namespace stacks
{
    /// \addtogroup group_stacks_ui User Interface
    /// \brief      This module describes the application's user interface.
    /// \{

    /// \brief Encapsulates code related to the user interface.
    namespace ui
    {
        /// \cond
        namespace Ui { class main_window; }
        /// \endcond

        /// \brief Builds the main window of the application.
        class main_window : public QMainWindow
        {
            Q_OBJECT

            public:
                /**
                 * \brief       Construct the main window.
                 * \param[in]   parent  The parent widget of this window.
                 * \throws      Unknown
                 */
                explicit main_window(QWidget* parent = nullptr);

                /**
                 * \brief   Destroy the main window.
                 * \throws  None
                 */
                ~main_window();

            private slots:
                /**
                 * \brief       Handle the quit signal.
                 * \throws      None.
                 * \details     This causes the application to conduct any clean up and then to exit.
                 */
                void on_action_Quit_triggered();

                /**
                 * \brief       Handle the signal to open a file.
                 * \throws      None
                 */
                void on_action_Open_triggered();

                /**
                 * \brief       Handle the signal to show the about dialog.
                 * \throws      None.
                 * \details     This will construct an about dialog and show it.
                 * \see         stacks::ui::about_dialog.
                 */
                void on_action_About_triggered();

            private:
                /// The pointer to the Qt generated UI object.
                Ui::main_window* ui;
        };
    }
    /// \}
}

#endif
