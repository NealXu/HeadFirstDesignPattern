public class SoldState implements State
{
	transient GumballMechine gm;

	public SoldState(GumballMechine gm)
	{
		this.gm = gm;
	}

	public void insertQuarter()
	{
		System.out.println("Please wait, we are already giving you a gumball.");
	}

	public void ejectQuarter()
	{
		System.out.println("Sorry, you already turned the crank.");
	}

	public void turnCrank()
	{
		System.out.println("Turning twice doesn't get you another gumball.");
	}

	public void dispense()
	{
		gm.releaseBall();
		if (0 == gm.getCount())
		{
			System.out.println("Oops, out of gumballs!");
			gm.setState(gm.getSoldOutState());
		}
		else
		{
			gm.setState(gm.getNoQuarterState());
		}
	}

} 