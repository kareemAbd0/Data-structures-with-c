cmake_minimum_required(VERSION 3.23)
project(Linked_Queue C)

set(CMAKE_C_STANDARD 99)

add_executable(Linked_Queue main.c LinkedQueue.c LinkedQueue.h)
