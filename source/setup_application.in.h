#ifndef HPP_SETUP_APPLICAITON
#define HPP_SETUP_APPLICAITON

namespace stacks
{
    inline void setup_application(QApplication& application)
    {
        application.setApplicationName(QStringLiteral("${pretty_application_name}"));
        application.setApplicationVersion(QStringLiteral("${PROJECT_VERSION}"));
        application.setOrganizationDomain(QStringLiteral("${organization_domain}"));
        application.setOrganizationName(QStringLiteral("${organization_name}"));
        application.setApplicationDisplayName(QObject::tr("${pretty_application_name}"));
        /// \todo QGuiApplication::setDesktopFileName()
        /// \todo QGuiApplication::setWindowIcon()
        /// \todo research using style sheets for the application
    }
}

#endif
