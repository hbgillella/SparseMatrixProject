cmake_minimum_required(VERSION 3.10)
project(SparseMatrixProject)

set(CMAKE_CXX_STANDARD 11)

include_directories(include)

add_executable(SparseMatrixProject main.cpp src/SparseMatrix.cpp) 

set(CMAKE_C_COMPILER "C:/MinGW/bin/gcc.exe")
set(CMAKE_CXX_COMPILER "C:/MinGW/bin/g++.exe")