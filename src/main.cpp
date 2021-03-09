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

	UtilMathPassThrough ump;
	MagicNumberDependencies deps(&ump);
	MagicNumber mn(&ump, &deps);
	UtilMath::Initialize();

	cout << "Enter value for A: ";
	cin >> a;

	cout << "Enter value for B: ";
	cin >> b;

	cout << "The magic number is: " << mn.GetMagicNumber(a, b) << endl;

	return 0;
}
