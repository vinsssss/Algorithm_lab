cmake_minimum_required(VERSION 3.17)
project(Algorithm_lab2 C)

set(CMAKE_C_STANDARD 11)

add_executable(Algorithm_lab2 main.c LLGEN.h LLGEN.c LLAPP.h LLAPP.c)