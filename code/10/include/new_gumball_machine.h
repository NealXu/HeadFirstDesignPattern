#ifndef _NEW_GUMBALL_MACHINE_H_
#define _NEW_GUMBALL_MACHINE_H_

#include <iostream>
#include "sold_out_state.h"
#include "sold_state.h"
#include "no_quarter_state.h"
#include "has_quarter_state.h"

using std::cout;
using std::endl;

class GumballMachine
{
public:
	GumballMachine(unsigned int cn)
	:noQuarter(NULL), hasQuarter(NULL), soldOut(NULL), sold(NULL), candyNum(0)
	{

		noQuarter = new NoQuarter(this);
		hasQuarter = new HasQuarter(this);
		soldOut = new SoldOut(this);
		sold = new Sold(this);

		currState = soldOut;
		if (cn > 0)
		{
			candyNum = cn;
			currState = noQuarter;
		}
	}

	~GumballMachine()
	{
		delete noQuarter;
		delete hasQuarter;
		delete soldOut;
		delete sold;
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

	void ReleaseBall()
	{
		cout << "A gumball comes rolling out the slot." << endl;
		if (0 != candyNum)
		{
			candyNum -= 1;
		}
	}

private:
	State *noQuarter;
	State *hasQuarter;
	State *soldOut;
	State *sold;
	State *currState;
	unsigned int candyNum;
};
#endif
/* end of new_gumball_machine.h */