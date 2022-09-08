cmake_minimum_required(VERSION 3.23)
project(GoblinGobbler)

set(CMAKE_CXX_STANDARD 14)

add_executable(GoblinGobbler main.cpp console.cpp console.h Customer.cpp Customer.h)
