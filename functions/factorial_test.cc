#include <gtest/gtest.h>
#include <iostream>

#include "factorial.h"

namespace functions_test {

  using namespace functions;

  TEST(FactorialTest, HandlesZeroInput) {
    EXPECT_EQ(factorial(0), 1);
  }

  TEST(FactorialTest, HandlesPositiveInput) {
    EXPECT_EQ(factorial(1), 1);
    EXPECT_EQ(factorial(2), 2);
    EXPECT_EQ(factorial(3), 6);
    EXPECT_EQ(factorial(8), 40320);
  }
} // namesapce functions_test
