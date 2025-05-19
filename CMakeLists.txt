cmake_minimum_required(VERSION 3.13 FATAL_ERROR)

set(PROJECT_NAME Magic_Village)

project(${PROJECT_NAME})

add_executable(${PROJECT_NAME} /Users/miran/projects/testik/main.cpp)

set(GLFW_BUILD DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(GLEW_INSTALL OFF CACHE BOOL "" FORCE)

add_subdirectory(external/glfw)
target_link_libraries(${PROJECT_NAME} glfw)


add_subdirectory(external/glad)
target_link_libraries(${PROJECT_NAME} glad)