# C++11を使う

cmake_minimum_required(VERSION 3.13)
project(prj4 CXX)
set(CMAKE_CXX_STANDARD 11) # この宣言は、add_executableよりも前に書く必要がある
add_executable(a.out main.cpp)
