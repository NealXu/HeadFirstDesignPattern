#include "new_gumball_machine.h"
#include "sold_out.h"
#include "sold.h"
#include "no_quarter.h"
#include "has_quarter.h"
#include "winner.h"

GumballMachine::GumballMachine(unsigned int cn)
: noQuarter(NULL), hasQuarter(NULL), soldOut(NULL), 
  sold(NULL), winner(NULL), candyNum(0)
{
	noQuarter = new NoQuarterState(this);
	hasQuarter = new HasQuarterState(this);
	soldOut = new SoldOutState(this);
	sold = new SoldState(this);
	winner = new WinnerState(this);

	currState = soldOut;
	if (cn > 0)
	{
		candyNum = cn;
		currState = noQuarter;
	}
}

/* end of new_gumball_machine.cpp */