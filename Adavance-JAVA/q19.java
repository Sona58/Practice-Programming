import java.util.*;

class q19{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		TreeMap sm1=new TreeMap();
		sm1.put("A",new Integer(34));
		sm1.put("B",new Integer(23));
		sm1.put("C",new Integer(15));
		sm1.put("D",new Integer(30));
		sm1.put("E",new Integer(89));
		System.out.println("TreeMap: "+sm1);
		System.out.println("Ceiling entry for 'D': "+sm1.ceilingEntry("D"));
		System.out.println("Ceiling Key for 'E': "+sm1.ceilingKey("F"));
		System.out.println("Size of TreeMap: "+sm1.size());
		TreeMap sm2=(TreeMap)sm1.clone();
		System.out.println("Clone of TreeMap: ");
		Set<Map.Entry> set=sm2.entrySet();
		for(Map.Entry me:set)
			System.out.println(me.getKey()+": "+me.getValue());
		System.out.println("Does Map contains B as key: "+sm2.containsKey("B"));
		System.out.println("Does Map contains 51 as value: "+sm2.containsValue(51));
		System.out.println("First Entry: "+sm2.firstEntry());
		System.out.println("Last Entry: "+sm2.lastEntry());
		System.out.println("Value of key C: "+sm2.get("C"));
		sm2.remove("A");
		System.out.println("Clone Map after removing A: "+sm2);
		System.out.println("Is Map empty: "+sm1.isEmpty());
		sm1.clear();
		System.out.println("Is Map empty: "+sm1.isEmpty());
	}
}