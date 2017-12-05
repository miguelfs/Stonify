cmake_minimum_required(VERSION 3.9)
project(stonify)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp)
find_package(Qt5Widgets REQUIRED)

add_executable(stonify ${SOURCE_FILES})

target_link_libraries(stonify Qt5::Widgets)