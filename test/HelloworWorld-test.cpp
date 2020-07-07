//
// Created by Yao Huang on 2020-07-03.
//

#include "gtest/gtest.h"
#include "chap02/HelloWorld.h"

TEST(HelloTest, test2) {
    printHelloWorld();
    EXPECT_EQ (100, 100);
}