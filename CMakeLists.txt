cmake_minimum_required(VERSION 3.2)

set(CMAKE_INSTALL_PREFIX ${PROJECT_SOURCE_DIR})

# for YCM
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

# set(DIVISIBLE_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/src/divisible)
# set(DIISIBLE_INCLUDE_DIR ${PROJECT_SOURCE_DIR}/src/divisible)

add_subdirectory(src)
# add_subdirectory(test)

