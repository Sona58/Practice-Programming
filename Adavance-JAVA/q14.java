import java.util.*;

class q14{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		Stack s1=new Stack();
		s1.push(new Integer(34));
		s1.push(new Integer(50));
		s1.push(new Integer(12));
		s1.push(new Integer(5));
		System.out.println("Stack1: "+s1);
		Integer[] ar=new Integer[s1.size()];
		s1.copyInto(ar);
		System.out.println("Copy of Stack: ");
		for(int p: ar)
			System.out.println(p);
		Stack s2=(Stack)s1.clone();
		System.out.println("Clone of Stack: "+s2);
		s2.push(new Integer(55));
		s2.push(new Integer(60));
		s2.push(new Integer(77));
		System.out.println("Clone of Stack after adding new elements: "+s2);
		System.out.println("Searching element 12: "+s2.search(12));
		System.out.println("Size of Clone: "+s2.size());
		System.out.println("Capacity of Clone: "+s2.capacity());
		s2.pop();
		s2.pop();
		System.out.println("Clone of Stack after removing 2 elements: "+s2);
		System.out.println("Size of Clone: "+s2.size());
		System.out.println("Capacity of Clone: "+s2.capacity());
		System.out.println("Visiting Elements using Iterator: ");
		Iterator it1=s2.iterator();
		while(it1.hasNext())
			System.out.println(it1.next());
		System.out.println("Top most element: "+s2.peek());

	}
}