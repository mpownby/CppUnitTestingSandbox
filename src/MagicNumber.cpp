//
// Created by AARXWZZ on 3/5/2021.
//

#include "MagicNumber.h"
#include "UtilMath.h"
#include <stdexcept>

using std::runtime_error;

IMagicNumberSPtr MagicNumber::CreateInstance(IUtilMathPassThrough* pUtilMath, IMagicNumberDependencies* pDeps)
{
	return IMagicNumberSPtr(new MagicNumber(pUtilMath, pDeps), MagicNumber::deleter());
}

int MagicNumber::GetMagicNumber(int a, int b)
{
	while (b > 0)
	{
		a = m_pUtilMath->Multiply(a, b);

		b /= 2;
	}

	b -= a;

	return m_pDeps->MagicNumberHelper(a, b);
}
