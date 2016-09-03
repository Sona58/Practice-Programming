import java.util.*;

class q13{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		Vector v1=new Vector();
		System.out.println("Is vector empty: "+v1.isEmpty());
		v1.add(new Integer(67));
		v1.add(new Integer(23));
		v1.add(new Integer(12));
		v1.add(new Integer(90));
		v1.add(new Integer(12));
		System.out.println("Is vector empty: "+v1.isEmpty());
		System.out.println("First Element of Vector: "+v1.firstElement());
		System.out.println("Last Element of Vector: "+v1.lastElement());
		System.out.println("Element at 2nd position: "+v1.elementAt(2));
		System.out.println("Index of 23: "+v1.indexOf(23));
		System.out.println("Last Index of 12: "+v1.lastIndexOf(12));
		v1.insertElementAt(25,2);
		System.out.println("Vector after adding new element at 2nd position: "+v1);
		v1.removeElementAt(3);
		System.out.println("Vector after removing element at 3rd position: "+v1);
		System.out.println("Size of Vector: "+v1.size());
		System.out.println("Capacity of Vector: "+v1.capacity());
		v1.setSize(6);
		v1.ensureCapacity(6);
		System.out.println("After setting size and capacity of vector:");
		System.out.println("Size of Vector: "+v1.size());
		System.out.println("Capacity of Vector: "+v1.capacity());
		System.out.println("Is vector empty: "+v1.isEmpty());
		v1.removeAllElements();
		System.out.println("After removing all elements from vector: ");
		System.out.println("Is vector empty: "+v1.isEmpty());

	}
}