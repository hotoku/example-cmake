# ライブラリを探す

cmake_minimum_required(VERSION 3.13)
project(prj5 CXX)
find_package(OpenSSL REQUIRED)
if (OPENSSL_FOUND)
  message(STATUS "OpenSSL found")
  message(STATUS "OpenSSL_INCLUDE_DIR: ${OPENSSL_INCLUDE_DIR}")
  message(STATUS "OpenSSL_LIBRARIES: ${OPENSSL_LIBRARIES}")
  message(STATUS "OpenSSL_VERSION: ${OPENSSL_VERSION}")
else()
  message(FATAL_ERROR "OpenSSL not found")
endif()
