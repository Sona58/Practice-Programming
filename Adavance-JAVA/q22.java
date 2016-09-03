import java.util.*;

class q22
{
	@SuppressWarnings("unchecked")
	public static void main(String args[])
	{
		Hashtable h1=new Hashtable();
		h1.put(1,60);
		h1.put(2,70);
		h1.put(3,80);
		int max=0;
		Object oMax=-1;
		System.out.println("Score:");
		Enumeration e=h1.elements();
		while(e.hasMoreElements()){
			System.out.println(e.nextElement());
		}

		Enumeration e1=h1.keys();
		while(e1.hasMoreElements())
		{
			Object ob=e1.nextElement();
			Object ob1=h1.get(ob);
			int obInt=(((Integer)ob1).intValue());
			if(obInt>max){
				max=obInt;
				oMax=ob;
			}
		}

		h1.put(oMax,max+10);
		System.out.println();
		System.out.println("Updated Score:");
		Enumeration e2=h1.elements();
		while(e2.hasMoreElements()){
			System.out.println(e2.nextElement());
		}


	}
}