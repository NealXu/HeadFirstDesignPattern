#ifndef _HAS_QUARTER_H_
#define _HAS_QUARTER_H_

#include "new_gumball_machine.h"
#include "state.h"

class HasQuarterState : public State
{
public:
	HasQuarterState(GumballMachine *g)
	:gm(NULL), name("has quarter")
	{
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
		gm->SetState(gm->GetSoldState());
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
/* end of has_quarter.h */