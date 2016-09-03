import java.util.*;

class q15{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		Stack s1=new Stack();
		System.out.println("Is Stack empty: "+s1.isEmpty());
		s1.push(new Integer(34));
		s1.push(new Integer(50));
		s1.push(new Integer(12));
		s1.push(new Integer(5));
		System.out.println("Stack1: "+s1);
		System.out.println("Is Stack empty: "+s1.isEmpty());
		System.out.println("First Element of Stack1: "+s1.firstElement());
		System.out.println("Last Element of Stack1: "+s1.lastElement());
		System.out.println("Element at 1st position: "+s1.elementAt(1));
		System.out.println("Index of 5: "+s1.indexOf(5));
		s1.setElementAt(10,0);
		System.out.println("Stack after setting 10 at 0: "+s1);	
		s1.insertElementAt(56,3);
		System.out.println("Stack after adding 56 at 3rd position: "+s1);
		System.out.println("Size of Stack: "+s1.size());
		System.out.println("Capacity of Stack: "+s1.capacity());
		s1.setSize(4);
		s1.trimToSize();
		System.out.println("After setting size and capacity:");
		System.out.println("Size of Stack: "+s1.size());
		System.out.println("Capacity of Stack: "+s1.capacity());
		s1.removeElement(10);
		System.out.println("Stack after removing element 10: "+s1);
	}
}