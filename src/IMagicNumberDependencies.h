#ifndef CPPUNITTESTING_IMAGICNUMBERDEPENDENCIES_H
#define CPPUNITTESTING_IMAGICNUMBERDEPENDENCIES_H

#include <memory>
using std::shared_ptr;

class IMagicNumberDependencies
{
public:
	virtual int MagicNumberHelper(int a, int b) = 0;
};

typedef shared_ptr<IMagicNumberDependencies> IMagicNumberDependenciesSPtr;

#endif //CPPUNITTESTING_IMAGICNUMBERDEPENDENCIES_H
