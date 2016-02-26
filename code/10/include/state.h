#ifndef _STATE_H_
#define _STATE_H_

#include <string>

using std::string;

class State
{
public:
	virtual void InsertQuarter() = 0;
	virtual void EjectQuarter() = 0;
	virtual void TurnCrank() = 0;
	virtual void Dispense() = 0;
	virtual string & ShowState() = 0;
};

#endif
/* end of state.h */