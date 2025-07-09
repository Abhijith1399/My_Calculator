cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 17)

project("My_Calculator")

#include path
include_directories(inc)

#add library

add_library(mylib src/AddOperation.cpp)
add_library(mylib src/DivideOperation.cpp)
add_library(mylib src/MultiplyOperation.cpp)
add_library(mylib src/SubtractOperation.cpp)
add_library(mylib src/CalCulator.cpp)
#main application

add_executable(Myapp src/main.cpp)
target_link_libraries(Myapp mylib)

#Unit test
enable_testing()
#add_executable(MyTests tests/test_add01.cpp)
#target_link_libraries(MyTests mylib)
#add_test(NAME RunMyTests COMMAND MyTests)

macro(add_calc_test name)
add_executable(${name} tests/${name}.cpp)
target_link_libraries(${name} mylib)
add_test(NAME ${name} COMMAND ${name})
endmacro()

#add test case

add_calc_test(CalculatorTest)
