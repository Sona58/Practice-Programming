import java.util.*;

class q2{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		ArrayList ar=new ArrayList();
		ar.add(new Integer(90));
		ar.add(new Integer(35));
		ar.add(new Integer(40));
		ar.add(new Integer(35));
		ar.add(new Integer(43));
		System.out.println(ar);
		System.out.println();
		ArrayList ar1=(ArrayList)ar.clone();
		System.out.println("Is clone empty: "+ar1.isEmpty());
		System.out.println("Cloned ArrayList:");
		System.out.println(ar1);
		ar1.clear();
		System.out.println("Is clone empty: "+ar1.isEmpty());
		System.out.println();
		ar.add(2,new Integer(10));
		System.out.println("After adding 10 at 2nd position");
		System.out.println(ar);
		System.out.println();
		System.out.println("Visiting elements using Iterator");
		Iterator it1=ar.iterator();
		while(it1.hasNext())
			System.out.println(it1.next());
		System.out.println();
		System.out.println("Visiting elements using ListIterator");
		ListIterator lit1=ar.listIterator();
		while(lit1.hasNext())
			System.out.println(lit1.next());
		System.out.println();
		System.out.println("Visiting elements in reverse order using ListIterator");
		while(lit1.hasPrevious())
			System.out.println(lit1.previous());
		System.out.println();
		System.out.println("Converting arraylist to array and printing it: ");	
		Integer arr[]=new Integer[ar.size()];
		ar.toArray(arr);
		for(int el:arr)
			System.out.println(el);	
	}
}