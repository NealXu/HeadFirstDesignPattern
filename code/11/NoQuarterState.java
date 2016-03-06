public class NoQuarterState implements State
{
	transient GumballMechine gm;

	public NoQuarterState(GumballMechine gm)
	{
		this.gm = gm;
	}

	public void insertQuarter()
	{
		System.out.println("You inserted a quarter.");
		gm.setState(gm.getHasQuarterState());
	}

	public void ejectQuarter()
	{
		System.out.println("You haven't inserted a quarter.");
	}

	public void turnCrank()
	{
		System.out.println("You turned but there's no quarter.");
	}

	public void dispense()
	{
		System.out.println("You need to pay first.");
	}

} 