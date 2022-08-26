cmake_minimum_required(VERSION 3.23)
project(infix_to_post_fix C)

set(CMAKE_C_STANDARD 99)

add_executable(infix_to_post_fix main.c linked_stack.c linked_stack.h)
