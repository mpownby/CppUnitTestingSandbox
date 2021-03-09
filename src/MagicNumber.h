//
// Created by AARXWZZ on 3/5/2021.
//

#ifndef CPPUNITTESTING_MAGICNUMBER_H
#define CPPUNITTESTING_MAGICNUMBER_H

#include "IUtilMathPassThrough.h"
#include "IMagicNumberDependencies.h"

class MagicNumber
{
public:
	MagicNumber(IUtilMathPassThrough *pUtilMath, IMagicNumberDependencies *pDeps) :
		m_pUtilMath(pUtilMath),
		m_pDeps(pDeps)
	{

	}

	int GetMagicNumber(int a, int b);

private:

	IUtilMathPassThrough *m_pUtilMath = nullptr;
	IMagicNumberDependencies *m_pDeps = nullptr;
};


#endif //CPPUNITTESTING_MAGICNUMBER_H
