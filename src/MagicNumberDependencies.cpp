#include "MagicNumberDependencies.h"
#include <stdexcept>

using std::runtime_error;

int MagicNumberDependencies::MagicNumberHelper(int a, int b)
{
	int result = 0;

	switch (a % 3)
	{
	case 0:
		result = m_pUtilMath->Subtract(a, b);
		break;
	case 1:
		result = m_pUtilMath->Multiply(a, b);
		break;
	case 2:
		result = m_pUtilMath->Divide(a, b);
		break;
	default:
		throw runtime_error("Not supported!");
	}

	return result;
}
