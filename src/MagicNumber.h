//
// Created by AARXWZZ on 3/5/2021.
//

#ifndef CPPUNITTESTING_MAGICNUMBER_H
#define CPPUNITTESTING_MAGICNUMBER_H

#include "IUtilMathPassThrough.h"
#include "IMagicNumberDependencies.h"
#include "IMagicNumber.h"
#include "SmartDeleter.h"

class MagicNumber : public IMagicNumber, public SmartDeleter
{
public:

	class Builder;

	static IMagicNumberSPtr CreateInstance(IUtilMathPassThrough *pUtilMath, IMagicNumberDependencies *pDeps);

	int GetMagicNumber(int a, int b) override;

private:
	MagicNumber(IUtilMathPassThrough *pUtilMath, IMagicNumberDependencies *pDeps) :
			m_pUtilMath(pUtilMath),
			m_pDeps(pDeps)
	{}

	virtual ~MagicNumber() = default;

	void DeleteInstance() override { delete this; }

	IUtilMathPassThrough *m_pUtilMath = nullptr;
	IMagicNumberDependencies *m_pDeps = nullptr;
};

class MagicNumber::Builder
{
public:
	Builder() :
			m_pUtilMath(nullptr),
			m_pDeps(nullptr)
	{
	}

	Builder& SetUtilMath(IUtilMathPassThrough *pSrc) { this->m_pUtilMath = pSrc; return *this; }
	Builder& SetDeps(IMagicNumberDependencies *pSrc) { this->m_pDeps = pSrc; return *this; }

	IMagicNumberSPtr Build() { return MagicNumber::CreateInstance(m_pUtilMath, m_pDeps); }

private:
	IUtilMathPassThrough *m_pUtilMath = nullptr;
	IMagicNumberDependencies *m_pDeps = nullptr;
};

#endif //CPPUNITTESTING_MAGICNUMBER_H
