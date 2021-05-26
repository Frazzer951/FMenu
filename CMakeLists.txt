cmake_minimum_required(VERSION 3.8)
project(FMenu C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
include(ClangFormat)
set(CMAKE_CXX_CLANG_TIDY clang-tidy)
enable_testing()

# Add all files from src/ folder
set( Headers
  include/FMenu.hpp
)
set( Sources
  src/FMenu.cpp
)

include_directories(include)

add_library(${PROJECT_NAME} STATIC ${Sources} ${Headers} )

add_subdirectory(tests)
add_subdirectory(examples)

target_clangformat_setup(${PROJECT_NAME})