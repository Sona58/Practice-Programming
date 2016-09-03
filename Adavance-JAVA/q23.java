import java.util.*;

class q23
{
	@SuppressWarnings("unchecked")
	public static void main(String args[])
	{
		Dictionary d1=new Hashtable();
		d1.put("A", new Double(3333.333));
		d1.put("B", new Double(6666.666));
		d1.put("C", new Double(5555.555));
		d1.put("D", new Double(7777.777));
		System.out.println("Dictionary list: " + d1);
		System.out.println("Is dictionary Empty: " + d1.isEmpty());
		System.out.println("Size of dictionary: " + d1.size());
		System.out.println("Value of 'C': " + d1.get("C"));
		d1.remove("B");
		System.out.println("Dictionary after removing element: " +d1);
		System.out.println("Visiting elements using enumertion: ");
		Enumeration e1=d1.elements();
		while(e1.hasMoreElements())
			System.out.println(e1.nextElement());
		System.out.println("Visiting keys using enumertion: ");
		Enumeration e2=d1.keys();
		while(e2.hasMoreElements())
			System.out.println(e2.nextElement());
	}
}