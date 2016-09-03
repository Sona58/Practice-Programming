import java.util.*;

class q5{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		HashSet hs1=new HashSet();
		hs1.add(new Integer(56));
		hs1.add(new Integer(64));
		hs1.add(new Integer(21));
		hs1.add(new Integer(9));
		hs1.add(new Integer(10));
		System.out.println("Set Elements:");
		System.out.println(hs1);
		System.out.println("Size of set: "+hs1.size());
		System.out.println("Is Set empty: "+hs1.isEmpty());
		System.out.println("Does hashset contains 10: "+hs1.contains(10));
		System.out.println("After removing 2nd element:");
		hs1.remove(10);
		System.out.println(hs1);
		System.out.println("Does hashset contains 10: "+hs1.contains(10));
	}
}