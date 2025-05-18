cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

set(PROJECT_NAME Magic_Village)

project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} /Users/miran/projects/testik/main.cpp)

add_subdirectory(external/glfw)
target_link_libraries(${PROJECT_NAME} glfw)
find_package(OpenGL REQUIRED)
target_link_libraries(${PROJECT_NAME} OpenGL::GL)