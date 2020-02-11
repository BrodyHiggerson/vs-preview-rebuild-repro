cmake_minimum_required(VERSION 3.2)
project(vs-rebuild-repro)

add_subdirectory(apps)
add_subdirectory(libs)

SET_PROPERTY(DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR} PROPERTY VS_STARTUP_PROJECT app1)  