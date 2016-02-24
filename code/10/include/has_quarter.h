#ifndef _HAS_QUARTER_H_
#define _HAS_QUARTER_H_

#include "new_gumball_machine.h"
#include "state.h"

class HasQuarter
{
public:
	HasQuarter(GumballMachine *g)
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
/* end of has_quarter_state.h */