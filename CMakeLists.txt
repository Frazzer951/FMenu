cmake_minimum_required(VERSION 3.8)
project(FMenu C CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

if(MSVC)
  add_compile_options(-W4)
  string(REGEX REPLACE "/W3" "/W4" CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS}")
else()
  add_compile_options(-Wall -Wextra -Werror -Wdouble-promotion -Wconversion -fno-common -Wno-sign-compare)
endif()

list(APPEND CMAKE_MODULE_PATH ${PROJECT_SOURCE_DIR}/cmake)
include(ClangFormat)
#set(CMAKE_CXX_CLANG_TIDY clang-tidy)

add_subdirectory(examples)

add_library(${PROJECT_NAME}
    src/FMenu.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC include)

target_clangformat_setup(${PROJECT_NAME})