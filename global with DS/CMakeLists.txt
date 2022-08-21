cmake_minimum_required(VERSION 3.23)
project(global_with_DS C)

set(CMAKE_C_STANDARD 99)

add_executable(global_with_DS main.c global.h Stack.c Stack.h Queue.c Queue.h)
