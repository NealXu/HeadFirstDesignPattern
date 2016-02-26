#ifndef _NO_QUARTER_H_
#define _NO_QUARTER_H_

#include "new_gumball_machine.h"
#include "state.h"

class NoQuarterState : public State
{
public:
	NoQuarterState(GumballMachine *g)
	:gm(NULL), name("no quarter")
	{
		gm = g;
	}

	void InsertQuarter()
	{
		cout << "You inserted a quarter." << endl;
		gm->SetState(gm->GetHasQuarterState());
	}
	void EjectQuarter()
	{
		cout << "You haven't inserted a quarter." << endl;
	}
	void TurnCrank()
	{
		cout << "You turned but there's no quarter." << endl;
	}
	void Dispense()
	{
		cout << "You need to pay first." << endl;
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
/* end of no_quarter.h */