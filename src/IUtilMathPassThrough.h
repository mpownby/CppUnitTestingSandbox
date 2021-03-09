#ifndef CPPUNITTESTING_IUTILMATHPASSTHROUGH_H
#define CPPUNITTESTING_IUTILMATHPASSTHROUGH_H

class IUtilMathPassThrough
{
public:
	virtual int Multiply(int a, int b) = 0;

	virtual int Subtract(int a, int b) = 0;

	virtual int Divide(int a, int b) = 0;
};

#endif //CPPUNITTESTING_IUTILMATHPASSTHROUGH_H
