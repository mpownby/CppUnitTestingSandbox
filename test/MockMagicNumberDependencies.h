#ifndef CPPUNITTESTING_MOCKMAGICNUMBERDEPENDENCIES_H
#define CPPUNITTESTING_MOCKMAGICNUMBERDEPENDENCIES_H

class MockMagicNumberDependencies : public IMagicNumberDependencies
{
public:
	//virtual int MagicNumberHelper(int a, int b) = 0;
	MOCK_METHOD2(MagicNumberHelper, int(int a, int b));
};

#endif //CPPUNITTESTING_MOCKMAGICNUMBERDEPENDENCIES_H
