public class HasQuarterState implements State
{
	transient GumballMechine gm;

	public HasQuarterState(GumballMechine gm)
	{
		this.gm = gm;
	}

	public void insertQuarter()
	{
		System.out.println("You can't insert another quarter.");
	}

	public void ejectQuarter()
	{
		System.out.println("Quarter returned.");
		gm.setState(gm.getNoQuarterState());
	}

	public void turnCrank()	
	{
		System.out.println("You turned ...");
		gm.setState(gm.getSoldState());
	}

	public void dispense()
	{
		System.out.println("No gumballs dispensed.");
	}

} 