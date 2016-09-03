import java.util.*;

class q1{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		ArrayList ar=new ArrayList();
		System.out.println("Is list empty: "+ar.isEmpty());
		System.out.println();
		System.out.println("ArrayList1: ");
		ar.add(new Integer(6));
		ar.add(new Integer(56));
		System.out.println(ar);
		System.out.println();
		System.out.println("Size of list: "+ar.size());
		System.out.println();
		System.out.println();
		System.out.println("Is list empty: "+ar.isEmpty());
		System.out.println();
		ar.add(new Integer(4));
		ar.add(new Integer(21));
		ar.add(new Integer(90));
		ar.add(new Integer(56));
		System.out.println("ArrayList1: ");
		System.out.println(ar);
		System.out.println();
		System.out.println("Size of list: "+ar.size());
		System.out.println();
		System.out.println();
		System.out.println("Element at 5th postion: "+ar.get(5));
		System.out.println("Index of  element 4: "+ar.indexOf(4));
		System.out.println("Last index of  element 56: "+ar.lastIndexOf(56)); 
		System.out.println("Hashcode for arraylist1: "+ar.hashCode()); 
		System.out.println("Does the arraylist1 contain 5: "+ar.contains(5));
		System.out.println();
		System.out.println();
		ArrayList l1=new ArrayList();
		l1.add(new Integer(4));
		l1.add(new Integer(21));
		l1.add(new Integer(5));
		l1.add(new Integer(6));
		System.out.println("ArrayList2: ");
		System.out.println(l1);
		System.out.println();
		System.out.println("Does the ArrayList1 contains all the elements of ArrayList2: "+ar.containsAll(l1));
		System.out.println("Is ArrayList2 elements added to ArrayList1: "+ar.addAll(l1));
		System.out.println();
		System.out.println("ArrayList1: ");
		System.out.println(ar);
		System.out.println("Sublist: "+ar.subList(0,4));
		System.out.println();
		ar.remove(3);
		System.out.println("After removing element at 3rd position");
		System.out.println(ar);
	}
}
