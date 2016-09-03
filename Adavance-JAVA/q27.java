import java.util.*;
import java.io.*;

class q27{
	@SuppressWarnings("unchecked")
	public static void main(String args[]) throws IOException{
		TreeMap ts1=new TreeMap();
		BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
		String roll,marks;
		do{
			System.out.println("Enter 'quit' to quit");
			System.out.println("Enter roll no.");
			roll=br.readLine();
			if(roll.equals("quit")) continue;
			System.out.println("Enter marks");
			marks=br.readLine();
			ts1.put(roll,marks);
		}while(!roll.equals("quit"));
		System.out.println("Record: "+ts1);
		Properties p1=new Properties();
		p1.putAll(ts1);
		try{
			FileOutputStream fout=new FileOutputStream("ts.txt");
			p1.store(fout,"Student Details");
			fout.close();
		}catch(IOException ex){}
	}
}
