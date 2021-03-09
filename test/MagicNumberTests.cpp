#include "stdafx.h"
#include "../src/MagicNumber.h"
#include "../src/UtilMath.h"
#include "MockUtilMathPassThrough.h"
#include "MockMagicNumberDependencies.h"

using ::testing::Return;
using ::testing::_;

TEST(MagicNumberTests, GetMagicNumberTest)
{
	// ARRANGE

	int a = 1234;
	int b = 1;	// needed to avoid wildcard usage
	int a_times_b = 3579;
	int expected = 4680;

	MockUtilMathPassThrough mockUtilMathPassThrough;
	MockMagicNumberDependencies mockMagicNumberDependencies;

	// ACT

	EXPECT_CALL(mockUtilMathPassThrough, Multiply(a, b)).WillRepeatedly(Return(a_times_b));
	EXPECT_CALL(mockMagicNumberDependencies, MagicNumberHelper(3579, -3579)).WillOnce(Return(expected));

	IMagicNumberSPtr magicNumber = MagicNumber::Builder()
			.SetUtilMath(&mockUtilMathPassThrough)
			.SetDeps(&mockMagicNumberDependencies)
			.Build();

	IMagicNumber *pMagicNumber = magicNumber.get();
	int actual = pMagicNumber->GetMagicNumber(a, b);

	// ASSERT

	ASSERT_EQ(expected, actual);
}
