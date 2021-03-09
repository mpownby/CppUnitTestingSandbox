#ifndef CPPUNITTESTING_SMARTDELETER_H
#define CPPUNITTESTING_SMARTDELETER_H

class SmartDeleter
{
protected:
	virtual void DeleteInstance() = 0;

	class deleter;
	friend class deleter;

	class deleter
	{
	public:
		void operator()(SmartDeleter *p)
		{
			p->DeleteInstance();
		}
	};
};

#endif //CPPUNITTESTING_SMARTDELETER_H
