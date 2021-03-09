//
// Created by AARXWZZ on 3/5/2021.
//

#ifndef CPPUNITTESTING_UTILMATH_H
#define CPPUNITTESTING_UTILMATH_H


class UtilMath
{
public:
	static void Initialize();

	static int Multiply(int a, int b);

	static int Subtract(int a, int b);

	static int Divide(int a, int b);

	///////////

private:
	static bool m_initialized;
};


#endif //CPPUNITTESTING_UTILMATH_H
