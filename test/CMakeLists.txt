# test/CMakeLists.txt
# Uses the library defined in the parent directory

add_executable(CalculatorTest
    CalculatorTest.cpp
)
target_link_libraries(CalculatorTest PRIVATE calculator_lib)

# If you're using GoogleTest, link it here, e.g.:
# find_package(GTest REQUIRED)
# target_link_libraries(CalculatorTest PRIVATE GTest::gtest_main)
# include(GoogleTest)
# gtest_discover_tests(CalculatorTest)

add_test(NAME CalculatorTest COMMAND CalculatorTest)
