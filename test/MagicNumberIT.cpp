#include "stdafx.h"
#include "../src/MagicNumber.h"
#include "../src/UtilMath.h"
#include "../src/MagicNumberDependencies.h"
#include "../src/UtilMathPassThrough.h"

using ::testing::Return;
using ::testing::_;

TEST(MagicNumberIntegrationTests, Test1)
{
	// ARRANGE

	int a = 3;
	int b = 6;
	int expected = 108;

	// ACT

	UtilMathPassThrough ump;
	MagicNumberDependencies deps(&ump);
	MagicNumber mn(&ump, &deps);
	UtilMath::Initialize();

	int actual = mn.GetMagicNumber(a, b);

	// ASSERT

	ASSERT_EQ(expected, actual);
}
