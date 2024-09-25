cmake_minimum_required(VERSION 3.26)
project(IHDCB131_Exercices C)

set(CMAKE_C_STANDARD 11)

file(GLOB_RECURSE C_FILES "*.c")

foreach(C_FILE ${C_FILES})
    get_filename_component(EXECUTABLE_NAME ${C_FILE} NAME_WLE)
    add_executable(${EXECUTABLE_NAME} ${C_FILE})
endforeach()
