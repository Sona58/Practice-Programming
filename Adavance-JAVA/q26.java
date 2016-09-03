import java.util.*;
import java.io.*;

class q26{
	public static void main(String args[]) throws IOException{
		Properties p1 = new Properties();
		BufferedReader br =new BufferedReader(new InputStreamReader(System.in));
		String name, number;
		FileInputStream fin = null;
		boolean changed = false;

		try {
			fin = new FileInputStream("phonebook.dat");
		} catch(FileNotFoundException e) {}

		try {
			if(fin != null) {
				p1.load(fin);
				fin.close();
			}
		} catch(IOException e) {
			System.out.println("Error reading file.");
		}

		do {
			System.out.println("Enter new name" +" ('quit' to stop): ");
			name = br.readLine();
			if(name.equals("quit")) continue;
			System.out.println("Enter number: ");
			number = br.readLine();
			p1.put(name, number);
			changed = true;
		} while(!name.equals("quit"));

		if(changed) {
			FileOutputStream fout = new FileOutputStream("phonebook.dat");
			p1.store(fout, "Telephone Book");
			fout.close();
		}

		do {
			System.out.println("Enter name to find" +" ('quit' to quit): ");
			name = br.readLine();
			if(name.equals("quit")) continue;
			number = (String) p1.get(name);
			System.out.println(number);
		} while(!name.equals("quit"));
	}
}