cmake_minimum_required(VERSION 3.10)

project(lab_07)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(lab_07 main.cpp npc.cpp Elf.cpp Rouge.cpp Squirrel.cpp)
