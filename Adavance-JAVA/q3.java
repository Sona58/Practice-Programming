import java.util.*;

class q3{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		LinkedList l1=new LinkedList();
		l1.add("Hello");
		l1.add("Bye");
		l1.add("Hi");

		System.out.println("Linked List elements:");
		System.out.println(l1);
		System.out.println();
		System.out.println("Adding 'Happy' as First element and 'Sad' as Last element.");
		l1.addFirst("Happy");		
		l1.addLast("Sad");
		System.out.println("Linked List after adding new elements:");
		System.out.println(l1);
		System.out.println();
		System.out.println("Removing First Element and Last Element.");
		l1.removeFirst();
		l1.removeLast();
		System.out.println("Linked List after removing elements:");
		System.out.println(l1);
	}
}