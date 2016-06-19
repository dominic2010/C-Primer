#include "gtest/gtest.h"
#include "Year.h"

TEST(Year, case1)
{
//Year year = Year(1992,9,27);
	Year year = Year(2000,2,3);
	EXPECT_EQ(34, year.Verify());
}


TEST(Year, case2)
{
	Year year = Year(1992,9,27);

	EXPECT_EQ(271, year.Verify());
}
