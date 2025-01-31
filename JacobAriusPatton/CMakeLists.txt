cmake_minimum_required(VERSION 3.30)
project(JacobAriusPatton)
set(APPLICATION_LIBRARY JacobAriusPattonLib)
set(CMAKE_CXX_STANDARD 17)

set(wxBUILD_PRECOMP OFF)
find_package(wxWidgets COMPONENTS core base xrc html xml REQUIRED)

include(${wxWidgets_USE_FILE})
add_subdirectory(${APPLICATION_LIBRARY})
include_directories(${APPLICATION_LIBRARY})

set(SOURCE_FILES
        main.cpp
        JacobAriusPattonApp.cpp
        JacobAriusPattonApp.h
        pch.h
)

add_executable(${PROJECT_NAME} WIN32 MACOSX_BUNDLE ${SOURCE_FILES})

target_link_libraries(JacobAriusPatton ${wxWidgets_LIBRARIES} ${APPLICATION_LIBRARY})
target_precompile_headers(${PROJECT_NAME} PRIVATE pch.h)