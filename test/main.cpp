#include <gtest/gtest.h>
#include "algorithm/max.hpp"
#include "algorithm/min.hpp"

TEST(AlgorithmTest, Max) {
    int a = 10;
    int b = 20;
    EXPECT_EQ(yslz::max(a, b), 20);
}

TEST(AlgorithmTest, Min) {
    int a = 10;
    int b = 20;
    EXPECT_EQ(yslz::min(a, b), 10);
}
