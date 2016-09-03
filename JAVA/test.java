import java.lang.*;

class Employee 
{
	String name;
	int salary;
	
	Employee(String n,int s)
	{
		name=n;
		salary=s;
	}

	void tostring() 
	{
		System.out.println("Name : " + name + "\nSalary : " + salary);
	}
};

class Manager extends Employee 
{
	String department;

	Manager(String n,int s,String d)
	{
		super(n,s);
		department=d;
	}

	void tostring() 
	{
		super.tostring();
		System.out.println("Department Named : " + department);
	}
};

class Executive extends Manager 
{
	String subdept;
	Executive(String n,int s,String d,String sd)
	{
		super(n,s,d);
		subdept=sd;
	}

	void tostring() 
	{
		super.tostring();
		System.out.println("Sub Department: "+subdept);	
	}
};

class test 
{
	public static void main(String args[]) 
	{
		Executive e = new Executive("Raj",500000,"Accounts","Executive");
		e.tostring();
	}
};