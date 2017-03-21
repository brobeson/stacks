#ifndef STACKS_ABOUT_DIALOG_H
#define STACKS_ABOUT_DIALOG_H

/**
 * \file
 * \brief   Provides the about dialog class.
 */

#include <QDialog>

namespace stacks
{
    /// \addtogroup group_stacks_ui
    /// \{

    namespace ui
    {
        /// \cond
        namespace Ui { class about_dialog; }
        /// \endcond

        /// \brief Builds an About dialog when requested.
        class about_dialog : public QDialog
        {
            Q_OBJECT

            public:
                /**
                 * \brief       Construct an About dialog.
                 * \param[in]   parent  A pointer to the parent window of this dialog. Typically,
                 *                      this will be the application's main window.
                 * \throws      Unknown
                 * \details     This will construct the dialog, and fill in all the pertinent
                 *              information. After this, the dialog merely needs to be shown.
                 */
                explicit about_dialog(QWidget* parent = nullptr);

                /**
                 * \brief   Destroy an About dialog.
                 * \throws  None
                 */
                ~about_dialog() noexcept;

            private:
                /// The pointer to the Qt generated UI object.
                Ui::about_dialog* ui;
        };
    }
    /// \}
}

#endif
