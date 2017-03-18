cmake_minimum_required(VERSION 3.5)

# set up some variables about the application identity. these are used to
# configure_files for various products.
set(application_name "stacks")          # used for anything I need to type: make target, built binary, etc.
set(pretty_application_name "Stacks")   # used for UI & display in generated products
set(organization_name "brobeson")
set(organization_domain "github.com/${organization_name}")
string(TIMESTAMP build_year "%Y")   # for version, use YYYY.MM.DD
string(TIMESTAMP build_month "%m")
string(TIMESTAMP build_day "%d")

find_program(git "git")
if (git STREQUAL "git-NOTFOUND")
    message(WARNING "Git was not found. The commit SHA-1 will not be used for versioning.")
else()
    execute_process(COMMAND git rev-parse --short HEAD RESULT_VARIABLE git_sha ERROR_QUIET)
endif()

add_subdirectory(source)
