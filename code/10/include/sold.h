#ifndef _SOLD_STATE_H_
#define _SOLD_STATE_H_

#include "new_gumball_machine.h"
#include "state.h"

class SoldState
{
public:
	SoldState(GumballMachine *g)
	:pGm(NULL)
	{
		pGm = g;
	}

	void InsertQuarter()
	{
		cout << "Please wait, we are already giving you a gumball." << endl;
	}
	void EjectQuarter()
	{
		cout << "Please wait, we are already giving you a gumball." << endl;
	}
	void TurnCrank()
	{
		cout << "Turning twice doesn't get you another gumball." << endl;
	}
	void Dispense()
	{
		gm->ReleaseBall();
	}
private:
	GumballMachine *gm;
};

#endif
/* end of sold_state.h */