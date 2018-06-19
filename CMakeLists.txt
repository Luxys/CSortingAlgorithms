cmake_minimum_required(VERSION 3.10)
project(SortingAlgorithms C)

set(CMAKE_C_STANDARD 99)

add_executable(SortingAlgorithms main.c selection.c selection.h bubble.c bubble.h insertion.c insertion.h quick.c quick.h heap.c heap.h main.h)