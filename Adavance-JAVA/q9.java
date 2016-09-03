import java.util.*; 

class Student{
	int roll,marks;
	String name;
	public Student(int r, String n, int m){
		roll=r;
		name=n;
		marks=m;
	}
	
	public String toString(){
		return "("+roll+" "+name+" "+marks+")";
	}
}

class MyComp implements Comparator{
	public int compare(Object a, Object b){
		Student aOb,bOb;
		Integer aInt,bInt;
		aOb=(Student)a;
		bOb=(Student)b;

		aInt=aOb.marks;
		bInt=bOb.marks;

		return bInt.compareTo(aInt);
	}
}

class q9{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		LinkedList l1=new LinkedList();
		l1.add(new Student(1,"sonali",90));
		l1.add(new Student(2,"bhanu",70));		
		l1.add(new Student(3,"nisha",80));
		System.out.println(l1);
		
		System.out.println("Finding record for nisha:");
		Student s1=new Student(3,"nisha",70);
		int index=Collections.binarySearch(l1,s1,new MyComp());
		System.out.println("Nisha Found at index: "+index);

		System.out.println("Sorted List");
		Collections.sort(l1,new MyComp());		
		System.out.println(l1);
		System.out.println("Finding record for nisha:");
		index=Collections.binarySearch(l1,s1,new MyComp());
		System.out.println("Nisha Found at index: "+index);

	}
}