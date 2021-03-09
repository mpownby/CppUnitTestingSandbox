#ifndef CPPUNITTESTING_MAGICNUMBERDEPENDENCIES_H
#define CPPUNITTESTING_MAGICNUMBERDEPENDENCIES_H

#include "IMagicNumberDependencies.h"
#include "IUtilMathPassThrough.h"

class MagicNumberDependencies : public IMagicNumberDependencies
{
public:
	MagicNumberDependencies(IUtilMathPassThrough *pPassThrough)
		: m_pUtilMath(pPassThrough)
	{

	}

	int MagicNumberHelper(int a, int b) override;

private:

	IUtilMathPassThrough *m_pUtilMath = nullptr;
};


#endif //CPPUNITTESTING_MAGICNUMBERDEPENDENCIES_H
