/*
 * Test.cpp
 *
 *  Created on: 2023Äê5ÔÂ14ÈÕ
 *      Author: Administrator
 */
#include "gtest/gtest.h"

using namespace testing;

class RootTest : public Test
{

};

TEST_F(RootTest, test)
{
    EXPECT_EQ(1, 1);
}

