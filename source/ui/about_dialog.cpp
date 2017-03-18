#include "about_dialog.h"
#include "ui_about_dialog.h"

namespace stacks
{
    namespace ui
    {
        about_dialog::about_dialog(QWidget *parent) :
            // the flags passed in to QDialog::QDialog() eliminate the ? help button from the title bar.
            QDialog(parent, Qt::WindowSystemMenuHint | Qt::WindowTitleHint),
            ui(new Ui::about_dialog)
        {
            ui->setupUi(this);
            const auto application = static_cast<QGuiApplication*>(qApp);

            QFont name_font;
            name_font.setBold(true);
            ui->lbl_application_name->setFont(name_font);
            ui->lbl_application_name->setText(application->applicationDisplayName() + " v" + application->applicationVersion());

            ui->lbl_copyright->setText("Copyright 2017 Brendan Robeson");
            ui->lbl_url->setText("<a href='https://" +
                                 application->organizationDomain() +
                                 "'>" +
                                 application->organizationDomain() +
                                 "</a>");
            ui->lbl_bug_url->setText("<a href='htts://" +
                                     application->organizationDomain() +
                                     "/issues'>Bug reports and feature requests.</a>");

            setWindowTitle(tr("About ") + application->applicationDisplayName());
        }


        about_dialog::~about_dialog()
        {
            delete ui;
        }
    }
}
