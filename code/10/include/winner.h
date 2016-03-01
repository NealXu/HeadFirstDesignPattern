#ifndef _WINNER_H_
#define _WINNER_H_

#include "new_gumball_machine.h"
#include "state.h"

class WinnerState : public State
{
public:
	WinnerState(GumballMachine *g)
	:gm(NULL), name("winner")
	{
		gm = g;
	}

	void InsertQuarter()
	{
		cout << "Please wait, we are already giving you two gumballs." << endl;
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
		cout << "YOU'RE A WINNER! You get two gumballs for your quarter." << endl;
		gm->ReleaseBall();
		if (0 == gm->GetCount())
		{
			cout << "Oops, out of gumballs!" << endl;
			gm->SetState(gm->GetSoldOutState());
			return;
		}

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