cmake_minimum_required(VERSION 3.26)
project(tabs2D C)

set(CMAKE_C_STANDARD 11)

add_executable(tabs2D main.c
        math2d.c)
