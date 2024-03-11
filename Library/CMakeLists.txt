cmake_minimum_required(VERSION 3.20)
project(Librarys VERSION 1.0 LANGUAGES C)
set (CMAKE_C_STANDARD 11)
set (CMAKE_C_STANDARD_REQUIRED True)
add_compile_options(-Wall -Wextra -pedantic -O0)
add_executable(Librarys_exec src/main.c)

add_library(Library1 STATIC scr/Lib1.c)
target_include_directories(Library1 PUBLIC include)

add_library(Library2 SHARED src/Lib2.c)
target_include_directories(Library2 PUBLIC include)

target_include_directories(Librarys_exec PUBLIC include)
target_link_libraries(Librarys_exec PRIVATE Library1 Library2)