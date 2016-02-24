#ifndef _GUMBALL_MACHINE_H_
#define _GUMBALL_MACHINE_H_

#include <iostream>

using std::cout;
using std::endl;

enum E_GB_FSM_STAT
{
	SOLD_OUT = 0,
	NO_QUARTER,
	HAS_QUARTER,
	SOLD,
};

class GumballMachine
{
public:
	GumballMachine(unsigned int cn)
	:state(SOLD_OUT), candyNum(0)
	{
		if (cn > 0)
		{
			candyNum = cn;
			state = NO_QUARTER;
		}
	}

	void InsertQuarter()
	{
		if (SOLD_OUT == state)
		{
			cout << "You can't insert a quarter, the machine is sold out." << endl;
		}
		else if (NO_QUARTER == state)
		{
			state = HAS_QUARTER;
			cout << "You inserted a quarter." << endl;
		}
		else if (HAS_QUARTER == state)
		{
			cout << "You can't insert another quarter." << endl;
		}
		else
		{
			cout << "Please wait, we are already giving you a gumball." << endl;
		}

	}

	void EjectQuarter()
	{
		if (SOLD_OUT == state)
		{
			cout << "You can't insert a quarter, the machine is sold out." << endl;
		}
		else if (NO_QUARTER == state)
		{
			state = HAS_QUARTER;
			cout << "You inserted a quarter." << endl;
		}
		else if (HAS_QUARTER == state)
		{
			cout << "You can't insert another quarter." << endl;
		}
		else
		{
			cout << "Please wait, we are already giving you a gumball." << endl;
		}
	}

	void TurnCrank()
	{
		if (SOLD == state)
		{
			cout << "Turning twice doesn't get you another gumball." << endl;
		}
		else if (NO_QUARTER == state)
		{
			cout << "You turned but there 's no quarter." << endl;
		}
		else if (SOLD_OUT == state)
		{
			cout << "You turned, but there are no gumballs." << endl;
		}
		else if (HAS_QUARTER == state)
		{
			cout << "You turned ..." << endl;
			state = SOLD;
			Dispense();
		}
	}

	void Dispense()
	{
		if (SOLD == state)
		{
			cout << "A gumball comes rolling out the slot." << endl;
			candyNum -= 1;
			if (0 == candyNum)
			{
				cout << "Oops, out of gumballs!" << endl;
				state = SOLD_OUT;
			}
			else
			{
				state = NO_QUARTER;
			}
		}
		else if (NO_QUARTER == state)
		{
			cout << "You need to pay first." << endl;
		}
		else if (SOLD_OUT == state)
		{
			cout << "no gumballs dispensed." << endl;
		}
		else if (HAS_QUARTER == state)
		{
			cout << "no gumballs dispensed." << endl;
		}
	}

	void ShowState()
	{
		switch (state) 
		{
			case SOLD:
			{
				cout << "State is SOLD" << endl;
			}
			break;
			case SOLD_OUT:
			{
				cout << "State is SOLD_OUT" << endl;
			}
			break;
			case NO_QUARTER:
			{
				cout << "State is NO_QUARTER" << endl;
			}
			break;
			case HAS_QUARTER:
			{
				cout << "State is HAS_QUARTER" << endl;
			}
			break;
			default:
			{
				cout << "Unkonwn state : " << state << endl;
				break;
			}
		}
	}

private:
	enum E_GB_FSM_STAT state;
	unsigned int candyNum;
};
#endif
/* end of gumball_machine.h */