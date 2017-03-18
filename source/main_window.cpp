#include "main_window.h"
#include "ui_main_window.h"
#include "ui/about_dialog.h"

main_window::main_window(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::main_window)
{
    ui->setupUi(this);
    setWindowTitle(static_cast<QGuiApplication*>(qApp)->applicationDisplayName());
}

main_window::~main_window()
{
    delete ui;
}

void main_window::on_action_Quit_triggered()
{
    QCoreApplication::quit();
}

void main_window::on_action_Open_triggered()
{

}

void main_window::on_action_About_triggered()
{
    stacks::ui::about_dialog dialog(this);
    dialog.exec();
}
