cmake_minimum_required(VERSION 2.8.3)
project(ecc_iss_282)

find_package(Boost REQUIRED)

include_directories(${Boost_INCLUDE_DIRS})
add_library(foo foo.cpp)
