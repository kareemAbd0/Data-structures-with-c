cmake_minimum_required(VERSION 3.23)
project(Array_Queue C)

set(CMAKE_C_STANDARD 99)

add_executable(Array_Queue main.c ArrayQueue.c ArrayQueue.h)
