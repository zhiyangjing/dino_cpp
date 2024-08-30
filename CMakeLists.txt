cmake_minimum_required(VERSION 3.14)
project(Dino CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_COMPILER g++)
add_compile_options(-Werror -Wall -Weffc++ -Wextra)

set(DEV ${CMAKE_CURRENT_SOURCE_DIR}/develop)

find_package(Qt5Widgets REQUIRED)

add_executable(dino_dev ${DEV}/main.cpp)
target_link_libraries(dino_dev Qt5::Widgets)


