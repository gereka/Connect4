project(Connect4)
cmake_minimum_required(VERSION 3.10)
set (CMAKE_CXX_STANDARD 11)

set (SRC_DIR "src")
set (SRC_FILES main.cpp board.cpp window.cpp)
string(REGEX REPLACE "([^;]+)" "${SRC_DIR}/\\1" SRC_DIR_FILES "${SRC_FILES}")

add_executable(main ${SRC_DIR_FILES})

find_package(FLTK REQUIRED NO_MODULE)
include_directories(${FLTK_INCLUDE_DIRS})
target_link_libraries(main fltk)
