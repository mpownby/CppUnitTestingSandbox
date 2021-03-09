#ifndef CPPUNITTESTING_IMAGICNUMBER_H
#define CPPUNITTESTING_IMAGICNUMBER_H

#include <memory>

using std::shared_ptr;

class IMagicNumber
{
public:

	virtual int GetMagicNumber(int a, int b) = 0;
};

typedef shared_ptr<IMagicNumber> IMagicNumberSPtr;

#endif //CPPUNITTESTING_IMAGICNUMBER_H
