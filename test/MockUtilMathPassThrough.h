#ifndef CPPUNITTESTING_MOCKUTILMATHPASSTHROUGH_H
#define CPPUNITTESTING_MOCKUTILMATHPASSTHROUGH_H

class MockUtilMathPassThrough : public IUtilMathPassThrough
{
public:
//	virtual int Multiply(int a, int b) = 0;
	MOCK_METHOD2(Multiply, int(int a, int b));

//	virtual int Subtract(int a, int b) = 0;
	MOCK_METHOD2(Subtract, int(int a, int b));

//	virtual int Divide(int a, int b) = 0;
	MOCK_METHOD2(Divide, int(int a, int b));
};

#endif //CPPUNITTESTING_MOCKUTILMATHPASSTHROUGH_H
