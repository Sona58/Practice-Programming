import java.lang.*;

class vehicle
{
	String number,name;
	vehicle(String n, String c)
	{
		number=n;
		name=c;
		System.out.println("\nVehicle Details:");
		System.out.println("Number: "+n);
		System.out.println("Model Name: "+c);
	}
};

class two_wheeler extends vehicle
{
	String company;
	two_wheeler(String n,String c,String co)
	{
		super(n,c);
		company=co;
		System.out.println("Company: "+co);
	}
};

class three_wheeler extends vehicle
{
	int load;
	three_wheeler(String n, String c, int l)
	{
		super(n,c);
		load=l;
		System.out.println("Load Carried: "+l);
	}
};

class four_wheeler extends vehicle
{
	String rc;
	four_wheeler(String n, String c, String r)
	{
		super(n,c);
		rc=r;
		System.out.println("Registration Certificate: "+r);
	}
};

class display
{
	public static void main(String arg[])
	{
		two_wheeler ob=new two_wheeler("HR9CK2015","Activa","Honda");
		three_wheeler ob1=new three_wheeler("HR6GH9545","Bajaj RE",500);
		four_wheeler ob2=new four_wheeler("DL9CK5728","Swift","AI459562534587U");
	}
};