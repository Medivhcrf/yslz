#include <gtest/gtest.h>
#include "algorithm/max.hpp"

TEST(AlgorithmTest, Max) {
    int a = 10;
    int b = 20;
    EXPECT_EQ(yslz::max(a, b), 20);
}
