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

	IUtilMathPassThroughSPtr ump = UtilMathPassThrough::CreateInstance();
	IUtilMathPassThrough *pUMP = ump.get();
	IMagicNumberDependenciesSPtr magicNumberDeps = MagicNumberDependencies::CreateInstance(pUMP);
	IMagicNumberDependencies *pMagicNumberDeps = magicNumberDeps.get();
	IMagicNumberSPtr magicNumber = MagicNumber::CreateInstance(pUMP, pMagicNumberDeps);
	IMagicNumber *pMagicNumber = magicNumber.get();
	UtilMath::Initialize();

	int actual = pMagicNumber->GetMagicNumber(a, b);

	// ASSERT

	ASSERT_EQ(expected, actual);
}
