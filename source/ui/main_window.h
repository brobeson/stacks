#ifndef MAIN_WINDOW_H
#define MAIN_WINDOW_H

#include <QMainWindow>

namespace stacks
{
    namespace ui
    {
        namespace Ui { class main_window; }

        class main_window : public QMainWindow
        {
            Q_OBJECT

            public:
                explicit main_window(QWidget* parent = nullptr);
                ~main_window();

            private slots:
                void on_action_Quit_triggered();

                void on_action_Open_triggered();

                void on_action_About_triggered();

            private:
                Ui::main_window* ui;
        };
    }
}

#endif
