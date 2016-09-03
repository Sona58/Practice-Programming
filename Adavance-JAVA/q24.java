import java.util.*;

class q24
{
	@SuppressWarnings("unchecked")
	public static void main(String args[])
	{
		Hashtable ht1=new Hashtable();
		ht1.put("A", new Double(3333.333));
		ht1.put("B", new Double(6666.666));
		ht1.put("C", new Double(5555.555));
		ht1.put("D", new Double(7777.777));
		System.out.println("HashTable: " + ht1.toString());
		System.out.println("Is hashtable Empty: " + ht1.isEmpty());
		System.out.println("Size of hashtable: " + ht1.size());
		System.out.println("Value of 'C': " + ht1.get("C"));
		ht1.remove("B");
		System.out.println("Hashtable after removing element: " +ht1);
		System.out.println("Visiting elements using enumertion: ");
		Enumeration e1=ht1.elements();
		while(e1.hasMoreElements())
			System.out.println(e1.nextElement());
		System.out.println("Visiting keys using enumertion: ");
		Enumeration e2=ht1.keys();
		while(e2.hasMoreElements())
			System.out.println(e2.nextElement());
		System.out.println("Does hashtable contains A as key: " + ht1.containsKey("A"));
		System.out.println("Does hashtable contains 15 as value: " + ht1.containsValue(15));
		System.out.println("Is hashtable Empty: " + ht1.isEmpty());
		ht1.clear();
		System.out.println("After clearing hashmap: ");
		System.out.println("Is hashtable Empty: " + ht1.isEmpty());
	}
}