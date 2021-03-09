#ifndef CPPUNITTESTING_UTILMATHPASSTHROUGH_H
#define CPPUNITTESTING_UTILMATHPASSTHROUGH_H

#include "IUtilMathPassThrough.h"

class UtilMathPassThrough : public IUtilMathPassThrough
{
public:
	int Multiply(int a, int b) override;

	int Subtract(int a, int b) override;

	int Divide(int a, int b) override;
};


#endif //CPPUNITTESTING_UTILMATHPASSTHROUGH_H
