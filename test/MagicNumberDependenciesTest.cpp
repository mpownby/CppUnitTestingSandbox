#include "stdafx.h"
#include "../src/MagicNumberDependencies.h"
#include "MockUtilMathPassThrough.h"
#include "MockMagicNumberDependencies.h"
#include <stdexcept>

using std::runtime_error;

using ::testing::Return;
using ::testing::_;

TEST(MagicNumberDependenciesTests, MagicNumberHelperTest)
{
	// ARRANGE

	int b = 2468;

	MockUtilMathPassThrough mockUtilMathPassThrough;

	// ACT

	for (int a = 0; a < 3; a++)
	{
		int expected = 4680 * a;

		switch (a)
		{
		case 0:
			EXPECT_CALL(mockUtilMathPassThrough, Subtract(a, b)).WillRepeatedly(Return(expected));
			break;
		case 1:
			EXPECT_CALL(mockUtilMathPassThrough, Multiply(a, b)).WillRepeatedly(Return(expected));
			break;
		case 2:
			EXPECT_CALL(mockUtilMathPassThrough, Divide(a, b)).WillRepeatedly(Return(expected));
			break;
		default:
			throw runtime_error("Not supported!");
		};

		IMagicNumberDependenciesSPtr magicNumberDependencies = MagicNumberDependencies::Builder()
				.SetUtilMath(&mockUtilMathPassThrough)
				.Build();
		IMagicNumberDependencies *pMagicNumberDependencies = magicNumberDependencies.get();

		int actual = pMagicNumberDependencies->MagicNumberHelper(a, b);

		// ASSERT

		ASSERT_EQ(expected, actual);
	}
}
