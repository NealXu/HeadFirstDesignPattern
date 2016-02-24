#ifndef _NO_QUARTER_H_
#define _NO_QUARTER_H_

#include "new_gumball_machine.h"
#include "state.h"

class NoQuarter
{
public:
	NoQuarter(GumballMachine *g)
	:pGm(NULL)
	{
		pGm = g;
	}

	void InsertQuarter()
	{
		cout << "" << endl;
	}
	void EjectQuarter()
	{
		cout << "" << endl;
	}
	void TurnCrank()
	{
		cout << "" << endl;
	}
	void Dispense()
	{
		cout << "" << endl;
	}
private:
	GumballMachine *gm;
};

#endif
/* end of no_quarter_state.h */