#ifndef HPP_SETUP_APPLICAITON
#define HPP_SETUP_APPLICAITON

/**
 * \file
 * \brief       Provides a utility function to set up the application.
 * \details     ${cmake_generated_file_disclaimer}
 */

namespace stacks
{
    /// \addtogroup group_stacks_application Main Application
    /// \brief      Classes and utilities related to the main application.
    /// \{

    /**
     * \brief       Set up the QApplication that represents the application.
     * \param[in]   application     The QApplication for this program.
     * \throws      Unknown.
     * \details     This is a utility function. It gathers setting all the application details in
     *              one place.
     */
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

    /// \}
}

#endif
