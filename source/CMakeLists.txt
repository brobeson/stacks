project(${application_name} VERSION ${build_year}.${build_month}.${build_day} LANGUAGES CXX)

# require C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED on)

# set up for building with Qt 5
set(CMAKE_AUTOMOC on)
set(CMAKE_AUTOUIC on)
set(CMAKE_INCLUDE_CURRENT_DIR on)
find_package(Qt5Widgets)

set(CMAKE_INCLUDE_CURRENT_DIR on)
configure_file(setup_application.in.h setup_application.h)

add_executable(${PROJECT_NAME} WIN32
    main.cpp
    ui/about_dialog.cpp
    ui/about_dialog.h
    ui/about_dialog.ui
    ui/main_window.cpp
    ui/main_window.h
    ui/main_window.ui)
target_link_libraries(${PROJECT_NAME} Qt5::Widgets)
set_target_properties(${PROJECT_NAME} PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})
