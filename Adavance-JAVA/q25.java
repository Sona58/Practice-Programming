import java.util.*;
import java.io.*;

class q25{
	public static void main(String args[]){
		Properties ln = new Properties();
    		Set fn;
      		String str;
      
      		ln.put("Sonali", "Chawla");
      		ln.put("Bhawna", "Singla");
      		ln.put("Rajan", "Bajaj");
      		ln.put("Vinisha", "Sharma");
    		ln.put("Pooja", "Dudeja");
		ln.list(System.out);
		System.out.println();
      		fn= ln.keySet();
		System.out.println("Visiting elements using enumeration");
		Enumeration e1 = ln.propertyNames();
		while(e1.hasMoreElements()) {
			str = (String) e1.nextElement();
			System.out.println("The last name of " +str + " is " + ln.getProperty(str) + ".");
      		}
		System.out.println();
		System.out.println("Searching for Last name of Vinisha:");
		str = ln.getProperty("Vinisha");
		System.out.println("The last name of Vinisha is "+ str + ".");
		FileOutputStream fout=null;
		try{
			fout=new FileOutputStream("pp.txt");
			ln.store(fout,"First and Last Name");
			fout.close();
		}catch(IOException ex){}
		System.out.println();
		Properties p2=new Properties();
		FileInputStream fin = null;	
		try {	fin = new FileInputStream("pp.txt");
			if(fin != null) {
				p2.load(fin);
				fin.close();	
			}
		} catch(IOException e) {}
		p2.list(System.out);
	}
}