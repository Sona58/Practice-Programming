import java.lang.*;

class box
{
	int l,b,h;
	void setdata(int x, int y, int z)
	{
		l=x;
		b=y;
		h=z;
	}

	void vol()
	{
		int v;
		v=l*b*h;
		System.out.println("Volume: "+v);
	}
};

class volume
{
	public static void main(String ar[])
	{
		box b1=new box();
		b1.setdata(20,30,40);
		b1.vol();
	}
};