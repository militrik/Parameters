cmake_minimum_required(VERSION 3.24)
project(Parametr)

set(CMAKE_CXX_STANDARD 17)

set(PROJECT_HEADERS
        Parameters.hpp
        )
set(PROJECT_SOURCES
        main.cpp
        Parameters.cpp
        )

add_executable(Parametr ${PROJECT_SOURCES} ${PROJECT_HEADERS})
