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

		aInt=aOb.roll;
		bInt=bOb.roll;

		return aInt.compareTo(bInt);
	}
}

class q8{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		TreeSet ts1=new TreeSet(new MyComp());
		ts1.add(new Student(1,"sonali",90));
		ts1.add(new Student(2,"bhanu",80));		
		ts1.add(new Student(3,"nisha",70));

		System.out.println(ts1);
	}
}