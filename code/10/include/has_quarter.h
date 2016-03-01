#ifndef _HAS_QUARTER_H_
#define _HAS_QUARTER_H_

#include <time.h>
#include <stdlib.h>
#include "new_gumball_machine.h"
#include "state.h"

class HasQuarterState : public State
{
public:
	HasQuarterState(GumballMachine *g)
	:gm(NULL), name("has quarter")
	{
		srand((int)time(0));
		gm = g;
	}

	void InsertQuarter()
	{
		cout << "You can't insert another quarter." << endl;
	}
	void EjectQuarter()
	{
		cout << "Quarter returned." << endl;
		gm->SetState(gm->GetNoQuarterState());
	}
	void TurnCrank()
	{
		cout << "You turned ..." << endl;
		
		int winner = rand()%10;
		cout << "winner is " << winner <<endl;
		if ((7 == winner) && (gm->GetCount() > 1))
		{
			gm->SetState(gm->GetWinnerState());
		}
		else
		{
			gm->SetState(gm->GetSoldState());
		}
		
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
	int Random(int end)
	{
		return (rand()%end);
	}
private:
	GumballMachine *gm;
	string name;
};

#endif
/* end of has_quarter.h */