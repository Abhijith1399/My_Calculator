cmake_minimum_required(VERSION 3.20)
project(My_Calculator LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Create shared core library
add_library(calculator_lib
    src/Calculator.cpp
    src/AddOperation.cpp
    src/SubtractOperation.cpp
    src/MultiplyOperation.cpp
    src/DivideOperation.cpp
)
target_include_directories(calculator_lib PUBLIC ${CMAKE_SOURCE_DIR}/inc)

# Main application executable
add_executable(MyApp
    src/main.cpp
)
target_link_libraries(MyApp PRIVATE calculator_lib)

# Enable testing
enable_testing()
add_subdirectory(test)
