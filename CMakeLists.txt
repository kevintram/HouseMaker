cmake_minimum_required(VERSION 3.10)

project(HouseMaker)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES 
    src/HouseMaker.cpp
    src/menus/Menu.cpp
    src/navigation/NavController.cpp

    src/menus/StartMenu.cpp
    src/menus/StyleMenu.cpp
)

add_executable(HouseMaker ${SOURCES})

target_include_directories(HouseMaker 
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/src
)