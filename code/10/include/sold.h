#ifndef _SOLD_H_
#define _SOLD_H_

#include "new_gumball_machine.h"
#include "state.h"

class SoldState : public State
{
public:
	SoldState(GumballMachine *g)
	:gm(NULL), name("sold")
	{
		gm = g;
	}

	void InsertQuarter()
	{
		cout << "Please wait, we are already giving you a gumball." << endl;
	}
	void EjectQuarter()
	{
		cout << "Sorry, you already turned the crank." << endl;
	}
	void TurnCrank()
	{
		cout << "Turning twice doesn't get you another gumball." << endl;
	}
	void Dispense()
	{
		gm->ReleaseBall();
		if (0 == gm->GetCount())
		{
			cout << "Oops, out of gumballs!" << endl;
			gm->SetState(gm->GetSoldOutState());
		}
		else
		{
			gm->SetState(gm->GetNoQuarterState());
		}
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
/* end of sold.h */