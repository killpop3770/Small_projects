package smart;

public class Samurai implements GreetingBehavior
{
	@Override
	public void greeting()
	{
		System.out.println("こんにちは");
	}
}