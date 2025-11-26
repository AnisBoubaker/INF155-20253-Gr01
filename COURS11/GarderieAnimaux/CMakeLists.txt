cmake_minimum_required(VERSION 3.26)
project(GarderieAnimaux C)

set(CMAKE_C_STANDARD 11)

add_executable(GarderieAnimaux main.c
        mod_personne.c
        mod_personne.h
        mod_animal.c
        mod_animal.h
        mod_garderie.c
        mod_garderie.h)
