cmake_minimum_required(VERSION 3.24)
project(Parametr)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_HEADERS
        Parametr.hpp
        )
set(PROJECT_SOURCES
        main.cpp
        Parametr.cpp
        )

add_executable(Parametr ${PROJECT_SOURCES} ${PROJECT_HEADERS})
