import java.lang.*;

class strfunc
{
	public static void main(String arg[])
	{
		String s1=new String("Hello");
		String s2=new String(" World");
		String s3=new String("Bye");
		System.out.println("Length of String1:" +s1.length());
		System.out.println("Length of String2:" +s2.length());
		System.out.println("String1 in Lower Case:" +s1.toLowerCase());
		System.out.println("String2 in Upper Case:" +s2.toUpperCase());
		System.out.println("String3 replaced:" +s3.replace('y','e'));
		System.out.println("String2 after triming:" +s2.trim());
		System.out.println("String1 compared to String2:" +s1.compareTo(s2));
		if(s1.equals(s2))
			System.out.println("String1 matches String2");
		else
			System.out.println("String1 do not matches String2");
		System.out.println("Character at index 3 in String1:" +s1.charAt(3));
		System.out.println("Concat of String1 and String2:" +s1.concat(s2));
		System.out.println("Substring from String 2:" +s2.substring(2));
		System.out.println("Substring from String 2:" +s2.substring(2,4));
	}
};