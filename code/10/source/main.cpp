// #include "gumball_machine.h"
#include "new_gumball_machine.h"

int main()
{
	GumballMachine gm(10);

	gm.InsertQuarter();
	gm.TurnCrank();
	gm.ShowState();

	cout << endl;

	gm.InsertQuarter();
	gm.EjectQuarter();
	gm.TurnCrank();
	gm.ShowState();

	cout << endl;

	gm.InsertQuarter();
	gm.TurnCrank();
	gm.InsertQuarter();
	gm.TurnCrank();
	gm.EjectQuarter();
	gm.ShowState();

	cout << endl;

	gm.InsertQuarter();
	gm.InsertQuarter();
	gm.TurnCrank();
	gm.InsertQuarter();
	gm.TurnCrank();
	gm.InsertQuarter();
	gm.TurnCrank();
	gm.ShowState();

	cout << endl;

	return 0;
}