# ソースコードがサブディレクトリに分かれている場合

cmake_minimum_required(VERSION 3.13)
project(prj3 CXX)

add_subdirectory(src)
add_subdirectory(test)
