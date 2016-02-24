#include "gumball_machine.h"

int main()
{
	GumballMachine gm(5);

	gm.InsertQuarter();
	gm.TurnCrank();
	gm.ShowState();

	gm.InsertQuarter();
	gm.EjectQuarter();
	gm.TurnCrank();
	gm.ShowState();

	gm.InsertQuarter();
	gm.TurnCrank();
	gm.InsertQuarter();
	gm.TurnCrank();
	gm.EjectQuarter();
	gm.ShowState();

	gm.InsertQuarter();
	gm.InsertQuarter();
	gm.TurnCrank();
	gm.InsertQuarter();
	gm.TurnCrank();
	gm.InsertQuarter();
	gm.TurnCrank();
	gm.ShowState();


	return 0;
}