cmake_minimum_required(VERSION 3.10)

project(pt)

add_executable("${PROJECT_NAME}" test_file_vector3d.cpp)

find_package(Matplot++ REQUIRED)

target_link_libraries("${PROJECT_NAME}" Matplot++::matplot)

install(TARGETS "${PROJECT_NAME}" DESTINATION bin)