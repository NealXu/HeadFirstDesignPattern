import java.rmi.*;
import java.rmi.server.*;

public class GumballMechineTestDrive
{
	public static void main(String[] args) 
	{
		GumballMechineRemote gm = null;
		int count;
		if (args.length < 2)
		{
			System.out.println("GumballMechine <name> <inventory>");
			System.exit(1);
		}

		try
		{
			count = Integer.parseInt(args[1]);
			gm = new GumballMechine(args[0], count);
			Naming.rebind("rmi://192.168.1.88:1099/" + args[0] + "/gumballmechine", gm);
		}
		catch (Exception e)
		{
			e.printStackTrace();
		}
	}
}