//
// Created by AARXWZZ on 3/5/2021.
//

#include "MagicNumber.h"
#include "UtilMath.h"
#include <stdexcept>

using std::runtime_error;

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
