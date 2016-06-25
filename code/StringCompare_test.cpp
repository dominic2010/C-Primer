/*
 * Sales_test.cpp
 *
 *  Created on: Jun 24, 2016
 *      Author: xiaoyao
 */

#include "StringCompare.h"

#include<gtest/gtest.h>


TEST(StringCompare,case1)
{
	StringCompare s1("huang");
	std::string  s2 ="huang" ;
	EXPECT_TRUE(s1.compare(s2));
}

TEST(StringCompare,case2)
{
	StringCompare s1("huang");
	std::string  s2 ="huang1" ;
	EXPECT_EQ(s2, s1.compare(s2));
}


