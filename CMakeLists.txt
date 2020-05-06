cmake_minimum_required(VERSION 3.16)
project(NetWorthCalculator)

set(CMAKE_CXX_STANDARD 17)

add_executable(NetWorthCalculator main.cpp Person.cpp Person.h Address.cpp Address.h)