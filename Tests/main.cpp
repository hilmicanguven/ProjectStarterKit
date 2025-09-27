#include "gtest/gtest.h"
#include <iostream>

#include "log_messages.hpp"

// Assuming your library or submodule has a function called 'add'
int add(int a, int b) {
    return a + b;
}

void init_message_test()
{
    std::cout << initialization_message << "\n";
    // print_init_message();
}

// Project Test
TEST(TestSuite, TestSuiteInit) {
    init_message_test();
}

// Test Suite: CalculatorTest
TEST(CalculatorTest, AddsTwoNumbers) {
    // Expect two numbers to be equal.
    ASSERT_EQ(add(1, 1), 2);
    // You can also use EXPECT_EQ, which allows tests to continue on failure.
    EXPECT_EQ(add(5, 7), 12);
}

// Another Test Suite
TEST(SubmoduleTest, UsesSubmoduleFunctionality) {
    // Here you would test a function from your linked submodule
    // Example: ASSERT_TRUE(my_submodule::is_valid(data));
    ASSERT_TRUE(true); // Placeholder
}

// The main function is handled by gtest_main, so you don't need a custom one.