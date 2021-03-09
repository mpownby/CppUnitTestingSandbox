#include <iostream>
#include "MagicNumber.h"
#include "UtilMathPassThrough.h"
#include "UtilMath.h"
#include "MagicNumberDependencies.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a = 0;
	int b = 0;

	IUtilMathPassThroughSPtr ump = UtilMathPassThrough::CreateInstance();
	IUtilMathPassThrough *pUMP = ump.get();
	IMagicNumberDependenciesSPtr magicNumberDeps = MagicNumberDependencies::CreateInstance(pUMP);
	IMagicNumberDependencies *pMagicNumberDeps = magicNumberDeps.get();
	IMagicNumberSPtr magicNumber = MagicNumber::CreateInstance(pUMP, pMagicNumberDeps);
	IMagicNumber *pMagicNumber = magicNumber.get();
	UtilMath::Initialize();

	cout << "Enter value for A: ";
	cin >> a;

	cout << "Enter value for B: ";
	cin >> b;

	cout << "The magic number is: " << pMagicNumber->GetMagicNumber(a, b) << endl;

	return 0;
}
