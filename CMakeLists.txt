# Define all source files for the library
set(LIBRARY_SOURCES
    src/AddOperation.cpp
    src/SubtractOperation.cpp
    src/MultiplyOperation.cpp
    src/DivideOperation.cpp
    src/Calculator.cpp
)

# Create the static library
add_library(mylib STATIC ${LIBRARY_SOURCES})

# Include directories
target_include_directories(mylib PUBLIC inc)

# Define the main application
add_executable(MyApp src/main.cpp)
target_link_libraries(MyApp PRIVATE mylib)

# Enable testing
enable_testing()

# Define and add test executables
macro(add_calc_test name)
    add_executable(${name} test/${name}.cpp)
    target_link_libraries(${name} PRIVATE mylib)
    add_test(NAME ${name} COMMAND ${name})
endmacro()

# Add specific tests
add_calc_test(CalculatorTest)
