import java.util.*;

class q18{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		SortedMap sm1=new TreeMap();
		sm1.put("A",new Integer(34));
		sm1.put("B",new Integer(23));
		sm1.put("C",new Integer(15));
		sm1.put("D",new Integer(30));
		sm1.put("E",new Integer(89));
		System.out.println("SortedMap:");
		System.out.println(sm1);
		System.out.println("Head Map: "+sm1.headMap("D"));
		System.out.println("Last Key of SortedMap: "+sm1.lastKey());
		System.out.println("SubMap of SortedMap: "+sm1.subMap("B","D"));
		System.out.println("Tail Map of SortedMap: "+sm1.tailMap("C"));
	}
}