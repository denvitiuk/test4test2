cmake_minimum_required(VERSION 3.17)
project(exampletest)

set(CMAKE_CXX_STANDARD 14)

add_executable(exampletest
        collection/LinkedList.cpp
        collection/ArrayList.cpp
        exception/IndexOutOfBoundsException.cpp
        main.cpp)