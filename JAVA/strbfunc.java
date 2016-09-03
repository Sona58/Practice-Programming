import java.lang.*;
import java.lang.StringBuffer;

class strbfunc
{
	public static void main(String arg[])
	{
		
		StringBuffer s1=new StringBuffer("Hello");
		StringBuffer s2=new StringBuffer();
		String s3=new String("Bye");
		StringBuffer s4=new StringBuffer(s3);
		
		System.out.println("Length of String1: "+s1.length());
		System.out.println("Length of String2: "+s2.length());
		System.out.println("Length of String4: "+s4.length());
		System.out.println("Capacity of String1: "+s1.capacity());
		System.out.println("Capacity of String2: "+s2.capacity());
		System.out.println("Capacity of String4: "+s4.capacity());
		s1.setLength(6);
		s1.ensureCapacity(23);
		System.out.println("Length of String1: "+s1.length());
		System.out.println("Capacity of String1: "+s1.capacity());
		System.out.println("Character at index 0 in String1: "+s1.charAt(0));
		s1.setCharAt(0,'C');
		System.out.println("After Changing Character at index 0 in String1: "+s1);
		System.out.println("Reverse of String1: "+s1.reverse());
		s4.replace(0,2,"Hi");
		System.out.println("Replace 'By' in String4: "+s4);
		s4.deleteCharAt(0);
		System.out.println("String4 After Delete of character at index 1: "+s4);
		System.out.println("Inserting 'll' in String1: "+s1.insert(2,"ll"));
		System.out.println("Appending String4 in String1: "+s1.append(s4));
		
	}
};