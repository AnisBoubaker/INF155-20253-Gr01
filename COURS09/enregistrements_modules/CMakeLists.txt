cmake_minimum_required(VERSION 3.26)
project(enregistrements_modules C)

set(CMAKE_C_STANDARD 11)

add_executable(enregistrements_modules main.c
        mod_client.c
        mod_client.h)
