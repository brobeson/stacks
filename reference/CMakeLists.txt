# check if Doxygen is installed. if it's not found, let the user know, then don't bother with the
# build target for the reference manual.
find_program(doxygen "doxygen")
if (doxygen STREQUAL "doxygen-NOTFOUND")
    message(WARNING "Doxygen was not found. The build target 'reference' will not be available.")
    return()
endif()

# add commands to generate Doxygen as a make target
configure_file(doxyfile.in doxyfile)
add_custom_target(reference
    COMMAND doxygen
    COMMENT "Running Doxygen...")

