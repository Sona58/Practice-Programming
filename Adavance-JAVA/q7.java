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

class q7{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		LinkedList l1=new LinkedList();
		l1.add(new Student(1,"sonali",90));
		l1.add(new Student(2,"bhanu",80));		
		l1.add(new Student(3,"nisha",70));

		System.out.println(l1);
	}
}