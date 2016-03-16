import java.lang.reflect.*;

public class MatchMakingTestDrive
{
	public static void main(String[] args) 
	{
		MatchMakingTestDrive test = new MatchMakingTestDrive();
		test.drive();
	}

	public MatchMakingTestDrive()
	{
	}

	public void drive()
	{
		PersonBean joe = new PersonBeanImpl();
		joe.setName("Joe javabean");
		PersonBean ownerProxy = getOwnerProxy(joe);
		System.out.println("Name is " + ownerProxy.getName());
		ownerProxy.setInterests("bowling, Go");
		System.out.println("Interests is " + ownerProxy.getInterests());
		try
		{
			ownerProxy.setHotOrNotRating(10);
		}
		catch (Exception e)
		{
			System.out.println("Can't set rating from owner proxy");
		}
		System.out.println("Rating is " + ownerProxy.getHotOrNotRating());
	}

	private PersonBean getOwnerProxy(PersonBean person)
	{
		return (PersonBean) Proxy.newProxyInstance(
			person.getClass().getClassLoader(),
			person.getClass().getInterfaces(),
			new OwnerInvocationHandler(person));
	}

	private PersonBean getNonOwnerProxy(PersonBean person)
	{
		return (PersonBean) Proxy.newProxyInstance(
			person.getClass().getClassLoader(),
			person.getClass().getInterfaces(),
			new NonOwnerInvocationHandler(person));
	}
}