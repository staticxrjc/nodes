cmake_minimum_required(VERSION 3.16)
project(nodes VERSION 1.0.0)
add_subdirectory(inc)
add_subdirectory(src)
include_directories(inc)

add_executable(${PROJECT_NAME} src/main.cpp)
set(SFML_DIR "C:\\sdks\\SFML-2.5.1\\lib\\cmake\\SFML")
find_package(SFML 2.5 COMPONENTS graphics REQUIRED)

add_library(
    nodeLib
    src/gameEngine.cpp
    src/canvas.cpp
    )
    
target_link_libraries(${PROJECT_NAME} nodeLib sfml-system sfml-window sfml-graphics sfml-network sfml-audio)