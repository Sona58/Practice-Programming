import java.lang.*;

class simple extends Thread 
{
	int total;
	public void run()
	{
           		System.out.println("Thread Starts");
			synchronized(this)
			{
				for(int i=0; i<100 ; i++)
				{
                			total += i;
           			}
				notify();
			}
	}
};

class thrd
{
	public static void main(String arg[])
	{
		simple s=new simple();
		System.out.println("Status: "+s.isAlive());
		s.start();
		System.out.println("Status: "+s.isAlive());
		System.out.println("Name: "+s.getName());
		s.setName("Thread 1");
		System.out.println("Name: "+s.getName());
		System.out.println("Priority: "+s.getPriority());
		s.setPriority(10);
		System.out.println("Priority: "+s.getPriority());
		synchronized(s)
		{
			try
			{
				System.out.println("Waiting for b to complete...");
				s.wait(1);
			}
			catch(InterruptedException e)
			{
		                e.printStackTrace();
			}
			System.out.println("Total is: " + s.total);
		}
		
	}
};