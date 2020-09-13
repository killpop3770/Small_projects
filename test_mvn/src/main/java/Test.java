package smart;

public class Test implements GreetingBehavior
{
	@Override
	public void greeting()
	{
		System.out.println("Test-Hello!");
	}
}