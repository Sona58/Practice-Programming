import java.util.*;

class Employee{
	int empno,basic_sal,da,hra,pf,net_sal;
	String empname;

	public Employee(int n,String na,int bs,int d,int h, int p){
		empno=n;
		empname=na;
		basic_sal=bs;
		da=d;
		hra=h;
		pf=p;
		net_sal=bs-d+h+p;
	}

	public String toString(){
		return "("+empno+","+empname+","+net_sal+")";
	}
}

class MyComp implements Comparator{
	public int compare(Object a,Object b){
		Employee aEmp, bEmp;
		Integer aInt, bInt;
		
		aEmp=(Employee)a;
		bEmp=(Employee)b;

		aInt=aEmp.net_sal;
		bInt=bEmp.net_sal;

		return aInt.compareTo(bInt);
	}
}
class q28{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		LinkedList l1=new LinkedList();
		l1.add(new Employee(11,"bhawna",100000,300,100,50));
		l1.add(new Employee(2,"nisha",30000,100,100,50));
		l1.add(new Employee(322,"sonali",20000,500,50,50));

		System.out.println(l1);

		System.out.println();
		System.out.println("After Sorting:");

		Collections.sort(l1,new MyComp());
		System.out.println(l1);
		int f=0;
		Iterator it1=l1.iterator();
		while(it1.hasNext()){
			Object o1=it1.next();
			Employee e1=(Employee)o1;
			if((e1.empname).equals("nisha")){
				System.out.println("Employee Found at index: "+l1.indexOf(e1));
				f=1;
			}
		}
		if(f==0)
			System.out.println("Employee Not Found");
	}
}