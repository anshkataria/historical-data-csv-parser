cmake_minimum_required(VERSION 4.1)
project(CSV_Parser)

set(CMAKE_CXX_STANDARD 20)

include_directories(include)
add_executable(csv_parser src/main.cpp
        src/parser.cpp)
