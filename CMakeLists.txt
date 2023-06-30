cmake_minimum_required(VERSION 3.24)
project(jpReader)

set(CMAKE_VERBOSE_MAKEFILE ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# Set the module path
set(CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake" ${CMAKE_MODULE_PATH})

set_property(GLOBAL PROPERTY USE_FOLDERS ON)

set(
        MEMENTO_COMPILER_FLAGS
        "-Wall"
        "-Wextra"
#        "-Werror"
        "-Wpedantic"
)

set(
        MEMENTO_INCLUDE_DIRS
        # x86_64 locations
        "/usr/local/opt/qt5/include/"
        "/usr/local/include"
)

list(PREPEND MEMENTO_INCLUDE_DIRS "${PROJECT_SOURCE_DIR}")


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/external/include)
find_package(JsonC REQUIRED)
find_package(libzip REQUIRED)
find_package(MeCab REQUIRED)
find_package(Qt5 COMPONENTS Widgets Network DBus X11Extras Svg Concurrent REQUIRED
)
find_package(SQLite3 REQUIRED)
find_package(mpv REQUIRED)
find_package(X11)

add_subdirectory(util)
add_subdirectory(dict)
add_subdirectory(definition)
add_subdirectory(anki)
add_subdirectory(audio)
add_subdirectory(gui/widgets/common)
add_subdirectory(gui/widgets/settings)
add_subdirectory(mywidgets)

include_directories(${X11_INCLUDE_DIR})
link_libraries(${X11_LIBRARIES})


add_executable(jpReader main.cpp
        mywidgets/TextHolder.cpp
        mainwindow.cpp
        pyScripts.cpp
        keyBinds.cpp
        keyBinds.h
        mywidgets/TranslationHolder.cpp
        TranslationRequestHandler.cpp
        mywidgets/FuriganaCreatorPopup.cpp
        CaptureWindow.cpp TopBar.cpp RightBar.cpp LeftTopBar.cpp SubStringButton.cpp)


target_link_libraries(
        jpReader
        PUBLIC Qt5::Core
        PUBLIC Qt5::Gui
        PUBLIC Qt5::Widgets
        PRIVATE Qt5::X11Extras
        PRIVATE audioplayer
        PRIVATE dictionary_db
        PRIVATE globalmediator
        PRIVATE Qt5::Svg
        PRIVATE definitionwidget
        PRIVATE anki
        PRIVATE overlayWidget
        PRIVATE optionswindow
        /usr/local/lib/libqhotkey.a
        )