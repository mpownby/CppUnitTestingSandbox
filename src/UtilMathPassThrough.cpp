#include "UtilMathPassThrough.h"
#include "UtilMath.h"

IUtilMathPassThroughSPtr UtilMathPassThrough::CreateInstance()
{
	return IUtilMathPassThroughSPtr(new UtilMathPassThrough(), UtilMathPassThrough::deleter());
}

int UtilMathPassThrough::Multiply(int a, int b)
{
	return UtilMath::Multiply(a, b);
}

int UtilMathPassThrough::Subtract(int a, int b)
{
	return UtilMath::Subtract(a, b);
}

int UtilMathPassThrough::Divide(int a, int b)
{
	return UtilMath::Divide(a, b);
}
