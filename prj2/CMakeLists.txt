# ライブラリを作成し、それをリンクする場合

cmake_minimum_required(VERSION 3.13)
project(prj2 CXX)
add_library(greetings STATIC hello.cpp good_morning.cpp)
add_executable(a.out main.cpp)
target_link_libraries(a.out greetings)
