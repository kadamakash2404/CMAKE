cmake_minimum_required(VERSION 3.20)

project(heder)

add_executable(heder main.c)

target_include_directories(heder PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
