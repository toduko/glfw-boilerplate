cmake_minimum_required(VERSION 3.14)
set(CMAKE_CXX_STANDARD 14)
project(${APP_NAME} C CXX)

find_package(OpenGL REQUIRED)
add_subdirectory(lib/glfw)

add_definitions(-DGLEW_STATIC)
add_subdirectory(lib/glew-cmake EXCLUDE_FROM_ALL)

file(GLOB_RECURSE SOURCES RELATIVE ${CMAKE_SOURCE_DIR} "src/*.cpp" "src/*.c")

add_executable(${APP_NAME} ${SOURCES})
target_link_libraries(${APP_NAME} glfw OpenGL::GL libglew_static)