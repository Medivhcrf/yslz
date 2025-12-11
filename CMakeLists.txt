cmake_minimum_required(VERSION 3.10)

project(yslz VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(CTest)

add_subdirectory(src)

if(BUILD_TESTING)
    add_subdirectory(test)
endif()
