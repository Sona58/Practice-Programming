import java.util.*;

class Student{
	int roll,marks;
	String name;

	public Student(int r,String n,int m){
		roll=r;
		name=n;
		marks=m;
	}
	public String toString(){
		return "("+roll+", "+name+", "+marks+")";		
	}

	
}

class q11{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		LinkedList l1=new LinkedList();
		l1.add(new Student(1,"bhanu",80));
		l1.add(new Student(2,"sonali",90));
		l1.add(new Student(3,"nisha",70));
		System.out.println("List: "+l1);
		Collections.reverse(l1);
		System.out.println("Reverse: "+l1);
		Collections.rotate(l1,2);
		System.out.println("Rotate: "+l1);
		Collections.shuffle(l1);
		System.out.println("Shuffled: "+l1);
	}
}