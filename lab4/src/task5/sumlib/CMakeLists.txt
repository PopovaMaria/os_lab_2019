cmake_minimum_required(VERSION 3.10)

add_library(sumlib SHARED sum.c utils.c include/sum.h include/utils.h)

target_include_directories(sumlib PUBLIC include)