#ifndef CPPUNITTESTING_MAGICNUMBERDEPENDENCIES_H
#define CPPUNITTESTING_MAGICNUMBERDEPENDENCIES_H

#include "IMagicNumberDependencies.h"
#include "IUtilMathPassThrough.h"
#include "SmartDeleter.h"

class MagicNumberDependencies : public IMagicNumberDependencies, public SmartDeleter
{
public:

	class Builder;

	static IMagicNumberDependenciesSPtr CreateInstance(IUtilMathPassThrough *pPassThrough);

	int MagicNumberHelper(int a, int b) override;

private:

	MagicNumberDependencies(IUtilMathPassThrough *pPassThrough)
			: m_pUtilMath(pPassThrough)
	{
	}

	virtual ~MagicNumberDependencies() {}

	void DeleteInstance() override { delete this; }

	IUtilMathPassThrough *m_pUtilMath = nullptr;
};

class MagicNumberDependencies::Builder
{
public:
	Builder() :
			m_pUtilMath(nullptr)
	{
	}

	Builder& SetUtilMath(IUtilMathPassThrough *pSrc) { this->m_pUtilMath = pSrc; return *this; }

	IMagicNumberDependenciesSPtr Build() { return MagicNumberDependencies::CreateInstance(m_pUtilMath); }

private:
	IUtilMathPassThrough *m_pUtilMath = nullptr;
};


#endif //CPPUNITTESTING_MAGICNUMBERDEPENDENCIES_H
