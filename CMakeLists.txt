cmake_minimum_required(VERSION 3.28)
project(DynamicBag C)

set(CMAKE_C_STANDARD 23)

add_executable(DynamicBag main.c
        Set.h
        New.h
        Object.h
        Set.c
        New.c
        Object.c
)
