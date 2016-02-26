#ifndef _SOLD_OUT_H_
#define _SOLD_OUT_H_

#include <typeinfo>
#include "new_gumball_machine.h"
#include "state.h"

class SoldOutState : public State
{
public:
	SoldOutState(GumballMachine *g)
	:gm(NULL), name("sold out")
	{
		gm = g;
	}

	void InsertQuarter()
	{
		cout << "You can't insert a quarter, the machine is sold out." << endl;
	}
	void EjectQuarter()
	{
		cout << "You can't eject, you haven't inserted a quarter." << endl;
	}
	void TurnCrank()
	{
		cout << "You turned, but there are no gumballs." << endl;
	}
	void Dispense()
	{
		cout << "no gumballs dispensed." << endl;
	}
	string & ShowState()
	{
		return name;
	}
private:
	GumballMachine *gm;
	string name;
};

#endif
/* end of sold_out.h */