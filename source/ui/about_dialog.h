#ifndef STACKS_ABOUT_DIALOG_H
#define STACKS_ABOUT_DIALOG_H

#include <QDialog>

namespace stacks {

namespace Ui {
class about_dialog;
}

class about_dialog : public QDialog
{
    Q_OBJECT

public:
    explicit about_dialog(QWidget *parent = 0);
    ~about_dialog();

private:
    Ui::about_dialog *ui;
};


} // namespace stacks
#endif // STACKS_ABOUT_DIALOG_H
