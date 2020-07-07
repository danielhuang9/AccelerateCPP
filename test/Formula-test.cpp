//
// Created by Yao Huang on 2020-07-03.
//

#include "gtest/gtest.h"
#include "chap01/Formula.h"

TEST(blaTest, test1) {
    Formula::bla(0);
    EXPECT_EQ (Formula::bla(0), 0);
    EXPECT_EQ (Formula::bla(10), 20);
    EXPECT_EQ (Formula::bla(50), 100);
}