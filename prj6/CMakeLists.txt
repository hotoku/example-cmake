# プリプロセッサ変数を定義する

cmake_minimum_required(VERSION 3.13)
project(prj6 CXX)

add_executable(prj6 main.cpp)
add_definitions(-DHOTOKU_PRJ6)
