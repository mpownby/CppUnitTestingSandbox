#ifndef CPPUNITTESTING_IUTILMATHPASSTHROUGH_H
#define CPPUNITTESTING_IUTILMATHPASSTHROUGH_H

#include <memory>
using std::shared_ptr;

class IUtilMathPassThrough
{
public:
	virtual int Multiply(int a, int b) = 0;

	virtual int Subtract(int a, int b) = 0;

	virtual int Divide(int a, int b) = 0;
};

typedef shared_ptr<IUtilMathPassThrough> IUtilMathPassThroughSPtr;

#endif //CPPUNITTESTING_IUTILMATHPASSTHROUGH_H
