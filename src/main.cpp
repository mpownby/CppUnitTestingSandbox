#include <iostream>
#include "MagicNumber.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
	int a = 0;
	int b = 0;
	MagicNumber mn;

	cout << "Enter value for A: ";
	cin >> a;

	cout << "Enter value for B: ";
	cin >> b;

	cout << "The magic number is: " << mn.GetMagicNumber(a, b) << endl;

	return 0;
}
