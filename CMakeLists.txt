cmake_minimum_required(VERSION 3.10)

project(HouseMaker)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(SOURCES 
    src/HouseMaker.cpp
    src/House.cpp
    src/HouseBuilder.cpp
)

add_executable(HouseMaker ${SOURCES})

target_include_directories(HouseMaker 
    PRIVATE 
        ${PROJECT_SOURCE_DIR}/src
)