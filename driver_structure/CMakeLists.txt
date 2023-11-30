cmake_minimum_required(VERSION 3.20)

project(driver)

# this will include all .c files to build from respective folder
file(GLOB_RECURSE SRC_FILES src/*.c)

add_executable(driver main.c ${SRC_FILES})


target_include_directories(driver PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/inc)
