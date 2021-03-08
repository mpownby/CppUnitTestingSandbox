#include "stdafx.h"
#include "../src/MagicNumber.h"

TEST(MagicNumberTests, GetMagicNumberTest1)
{
	// ARRANGE

	int a = 1234;
	int b = 2468;

	// ACT

	MagicNumber mn;
	int actual = mn.GetMagicNumber(a, b);

	// ASSERT
	int expected = -1223274496;

	ASSERT_EQ(expected, actual);
}

TEST(MagicNumberTests, GetMagicNumberTest2)
{
	// ARRANGE

	int a = 1;
	int b = 0;

	// ACT

	MagicNumber mn;
	int actual = mn.GetMagicNumber(a, b);

	// ASSERT
	int expected = -1;

	ASSERT_EQ(expected, actual);
}

TEST(MagicNumberTests, GetMagicNumberTest3)
{
	// ARRANGE

	int a = 2;
	int b = 0;

	// ACT

	MagicNumber mn;
	int actual = mn.GetMagicNumber(a, b);

	// ASSERT
	int expected = -1;

	ASSERT_EQ(expected, actual);
}