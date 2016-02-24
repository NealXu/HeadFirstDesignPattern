#ifndef _SOLD_OUT_STATE_H_
#define _SOLD_OUT_STATE_H_

#include "new_gumball_machine.h"
#include "state.h"

class SoldOutState
{
public:
	SoldOutState(GumballMachine *g)
	:pGm(NULL)
	{
		pGm = g;
	}

	void InsertQuarter()
	{
		cout << "You can't insert a quarter, the machine is sold out." << endl;
	}
	void EjectQuarter()
	{
		cout << "You can't insert a quarter, the machine is sold out." << endl;
	}
	void TurnCrank()
	{
		cout << "You turned, but there are no gumballs." << endl;
	}
	void Dispense()
	{
		cout << "no gumballs dispensed." << endl;
	}
private:
	GumballMachine *gm;
};

#endif
/* end of sold_out_state.h */