import java.util.*;

class q20{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		TreeSet ts1=new TreeSet();
		ts1.add("A");
		ts1.add("B");
		ts1.add("C");
		ts1.add("D");
		ts1.add("E");
		System.out.println("TreeSet: "+ts1);
		System.out.println("Size of TreeSet: "+ts1.size());
		System.out.println("First Element of TreeSet: "+ts1.first());
		System.out.println("Last Element of TreeSet: "+ts1.last());
		TreeSet ts2=(TreeSet)ts1.clone();
		System.out.println("TreeSet2: "+ts2);
		System.out.println("Visiting TreeSet2 using Iterator: ");
		Iterator it1=ts2.iterator();
		while(it1.hasNext())
			System.out.println(it1.next());
		ts2.remove("E");
		System.out.println("TreeSet2 after remoing 'E': "+ts2);
		System.out.println("SubSet of TreeSet2: "+ts2.subSet("B","D"));
		System.out.println("TailSet of TreeSet2: "+ts2.tailSet("C"));
		System.out.println("Is TreeSet empty: "+ts1.isEmpty());
		ts1.clear();
		System.out.println("Is TreeSet empty: "+ts1.isEmpty());
	}
}