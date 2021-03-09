#ifndef CPPUNITTESTING_UTILMATHPASSTHROUGH_H
#define CPPUNITTESTING_UTILMATHPASSTHROUGH_H

#include "IUtilMathPassThrough.h"
#include "SmartDeleter.h"

class UtilMathPassThrough : public IUtilMathPassThrough, public SmartDeleter
{
public:
	static IUtilMathPassThroughSPtr CreateInstance();

	int Multiply(int a, int b) override;

	int Subtract(int a, int b) override;

	int Divide(int a, int b) override;

private:
	UtilMathPassThrough() = default;

	virtual ~UtilMathPassThrough() = default;

	void DeleteInstance() override { delete this; }
};


#endif //CPPUNITTESTING_UTILMATHPASSTHROUGH_H
