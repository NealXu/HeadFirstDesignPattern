#ifndef _NEW_GUMBALL_MACHINE_H_
#define _NEW_GUMBALL_MACHINE_H_

#include <iostream>
#include "state.h"

using std::cout;
using std::endl;

class GumballMachine
{
public:
	GumballMachine(unsigned int cn);

	~GumballMachine()
	{
		delete noQuarter;
		delete hasQuarter;
		delete soldOut;
		delete sold;
		delete winner;
	}

	void InsertQuarter()
	{
		currState->InsertQuarter();
	}
	void EjectQuarter()
	{
		currState->EjectQuarter();
	}
	void TurnCrank()
	{
		currState->TurnCrank();
		currState->Dispense();
	}
	void SetState(State *s)
	{
		currState = s;
	}
	State * GetSoldOutState()
	{
		return soldOut;
	}
	State * GetSoldState()
	{
		return sold;
	}
	State * GetNoQuarterState()
	{
		return noQuarter;
	}
	State * GetHasQuarterState()
	{
		return hasQuarter;
	}
	State * GetWinnerState()
	{
		return winner;
	}
	unsigned int GetCount()
	{
		return candyNum;
	}

	void ReleaseBall()
	{
		cout << "A gumball comes rolling out the slot." << endl;
		if (0 != candyNum)
		{
			candyNum -= 1;
		}
	}
	void ShowState()
	{
		cout << "The state is " << currState->ShowState() << endl;
	}

private:
	State *noQuarter;
	State *hasQuarter;
	State *soldOut;
	State *sold;
	State *currState;
	State *winner;
	unsigned int candyNum;
};

#endif
/* end of new_gumball_machine.h */