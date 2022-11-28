cmake_minimum_required(VERSION 3.10)

project(pt)

add_executable("${PROJECT_NAME}" test_file_vector3d.cpp)

add_subdirectory(matplotplusplus)

target_link_libraries("${PROJECT_NAME}" PUBLIC matplot)

install(TARGETS "${PROJECT_NAME}" DESTINATION bin)