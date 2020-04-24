cmake_minimum_required(VERSION 3.10)

# set the project name
project(parallel_sum)

# add the executable
add_executable(parallel_sum parallel_sum.c)

add_subdirectory(sumlib)

target_link_libraries(parallel_sum sumlib m)

find_package(Threads REQUIRED)
target_link_libraries(parallel_sum Threads::Threads)
# target_link_libraries(parallel m)