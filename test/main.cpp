#include <gtest/gtest.h>
#include "algorithm/max.hpp"
#include "greeting/hello.hpp"

TEST(AlgorithmTest, Max) {
    int a = 10;
    int b = 20;
    EXPECT_EQ(yslz::max(a, b), 20);
}

TEST(GreetingTest, Hello) {
    EXPECT_EQ(yslz::hello(), "你好");
}
