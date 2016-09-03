import java.util.*;

class q12{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		Vector v1=new Vector();
		v1.add("orange");
		v1.add("apple");
		v1.add("banana");
		v1.add("grapes");

		System.out.println("Vector: "+v1);
		String[] s1= new String[v1.size()];
		v1.copyInto(s1);
		System.out.println("Copied array : " );
		for (String s2:s1)
			System.out.println(s2);
		Vector v2=(Vector)v1.clone();
		System.out.println("Clone of Vector: "+v2);
		System.out.println("Size of Clone Vector: "+v2.size());
		System.out.println("Capacity of CloneVector: "+v2.capacity());
		v2.add("guava");
		v2.add("pineapple");
		v2.add("leechi");
		v2.add("gooseberry");
		v2.add("raspberry");
		v2.add("cheery");
		System.out.println("Size of Clone Vector: "+v2.size());
		System.out.println("Capacity of CloneVector: "+v2.capacity());
		ArrayList ar=new ArrayList();
		ar.add("guava");
		ar.add("apple");
		System.out.println("List: "+ar);
		System.out.println("Does Clone Vector contains the elements of List: "+v2.containsAll(ar));
		ar.add("strawberry");
		System.out.println("List: "+ar);
		System.out.println("Does Clone Vector contains the elements of List: "+v2.containsAll(ar));

	}
}