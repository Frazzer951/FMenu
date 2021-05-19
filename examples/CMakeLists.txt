cmake_minimum_required(VERSION 3.0.0)

project(Example)

set(CMAKE_CXX_STANDARD 17)

set( Sources
    example.cpp
)

include_directories(../src)

add_executable(${PROJECT_NAME} ${Sources})
target_link_libraries(${PROJECT_NAME} FMenu)