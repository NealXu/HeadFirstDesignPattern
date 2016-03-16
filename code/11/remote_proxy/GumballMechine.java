import java.rmi.*;
import java.rmi.server.*;


public class GumballMechine
	extends UnicastRemoteObject implements GumballMechineRemote
{
	State soldOutState;
	State noQuarterState;
	State hasQuarterState;
	State soldState;

	State state = soldOutState;
	int count = 0;
	String location;

	public GumballMechine(String location, int numberGumballs) throws RemoteException
	{
		soldOutState = new SoldOutState(this);
		noQuarterState = new NoQuarterState(this);
		hasQuarterState = new HasQuarterState(this);
		soldState = new SoldState(this);

		count = numberGumballs;
		if (count > 0)
		{
			state = noQuarterState;
		}

		this.location = location;
	}

	public void insertQuarter()
	{
		state.insertQuarter();
	}
	public void ejectQuarter()
	{
		state.ejectQuarter();
	}
	public void turnCrank()
	{
		state.turnCrank();
		state.dispense();
	}
	void setState(State s)
	{
		this.state = s;
	}
	void releaseBall()
	{
		System.out.println("A gumball comes rolling out the slot.");
		if (0 != count)
		{
			count -= 1;
		}
	}
	public int getCount()
	{
		return this.count;
	}
	public State getState()
	{
		return state;
	}
	public String getLocation()
	{
		return location;
	}
	State getSoldOutState()
	{
		return soldOutState;
	}
	State getSoldState()
	{
		return soldState;
	}
	State getNoQuarterState()
	{
		return noQuarterState;
	}
	State getHasQuarterState()
	{
		return hasQuarterState;
	}
	// State getWinnerState()
	// {
	// 	return winnerState;
	// }
}