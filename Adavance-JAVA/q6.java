import java.util.*;

class q6{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		LinkedList l1=new LinkedList();
		l1.add(new Integer(-8));
		l1.add(new Integer(10));
		l1.add(new Integer(90));
		l1.add(new Integer(1));
		l1.add(new Integer(90));
		l1.add(new Integer(15));
		System.out.println("List:");
		System.out.println(l1);
		System.out.println();
		Comparator comp=Collections.reverseOrder();
		Collections.sort(l1,comp);
		System.out.println("List in sorted order:");
		System.out.println(l1);
		System.out.println();
		Collections.shuffle(l1);
		System.out.println("List after shuffling:");
		System.out.println(l1);
		System.out.println();
		System.out.println("Maximum element in List: "+Collections.max(l1));
		System.out.println("Minimum element in List: "+Collections.min(l1));
		int index=Collections.binarySearch(l1,1);
		System.out.println("Index of 1: "+index);
		System.out.println();
		LinkedList l2=new LinkedList();
		l2.add(new Integer(56));
		l2.add(new Integer(61));
		l2.add(new Integer(72));
		l2.add(new Integer(81));
		l2.add(new Integer(45));
		l2.add(new Integer(32));
		l2.add(new Integer(21));
		System.out.println("List 2:");
		System.out.println(l2);
		System.out.println("Coping list1 into list2:");
		Collections.copy(l2,l1);
		System.out.println(l2);
		System.out.println();
		System.out.println("List2 using Enumeration:");
		Enumeration em=Collections.enumeration(l2);
		while(em.hasMoreElements())
			System.out.println(em.nextElement());
		System.out.println();
		System.out.println("Relacing 90 with 11 in List 2");
		Collections.replaceAll(l2,90,11);
		System.out.println(l2);
		System.out.println();
		System.out.println("Rotating List2 by factor of 2:");
		Collections.rotate(l2,2);
		System.out.println(l2);
		System.out.println();
		System.out.println("Swaping 2nd and 5th element in List 2:");
		Collections.swap(l2,2,5);
		System.out.println(l2);
		System.out.println();
		LinkedList l3=new LinkedList();
		l3.add(new Integer(10));
		l3.add(new Integer(21));
		System.out.println("List3 : " + l3);
		System.out.println();
		System.out.println("index of sublist : " + Collections.indexOfSubList(l1,l2));
		System.out.println("index of sublist : " + Collections.indexOfSubList(l2,l3));
		System.out.println("last index of sublist : " + Collections.lastIndexOfSubList(l2,l1));
		System.out.println();
		System.out.println("Creating 5 copies of an element in list");
		List a1 = Collections.nCopies(5, "bhawna");
		Iterator it1=a1.iterator();
		while(it1.hasNext())
			System.out.println(it1.next());
		System.out.println();
		System.out.println("Filling all elements with 10");
		Collections.fill(l2,10);
		System.out.println(l2);
	}
}