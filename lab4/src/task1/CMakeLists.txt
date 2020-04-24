cmake_minimum_required(VERSION 3.10)

# set the project name
project(parallel)

# add the executable
add_executable(parallel parallel_min_max.c find_min_max.c find_min_max.h utils.c utils.h)

target_link_libraries(parallel m)

find_package(Threads REQUIRED)
target_link_libraries(parallel Threads::Threads)
# target_link_libraries(parallel m)