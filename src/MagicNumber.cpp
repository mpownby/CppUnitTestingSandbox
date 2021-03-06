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
		a = UtilMath::Multiply(a, b);

		b /= 2;
	}

	b -= a;

	return MagicNumberHelper(a, b);
}

int MagicNumber::MagicNumberHelper(int a, int b)
{
	int result = 0;

	switch (a % 3)
	{
	case 0:
		result = UtilMath::Subtract(a, b);
		break;
	case 1:
		result = UtilMath::Multiply(a, b);
		break;
	case 2:
		result = UtilMath::Divide(a, b);
		break;
	default:
		throw runtime_error("Not supported!");
	}

	return result;
}
