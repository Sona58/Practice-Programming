import java.util.*;

class q16{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		HashMap hm=new HashMap();
		HashMap hm2=new HashMap();
		System.out.println("Is Hashmap empty: "+hm.isEmpty());
		hm.put(1,"hello");
		hm.put(2,"hi");
		hm.put(3,"Bye");
		hm.put(4,"Good");
		hm.put(5,"Bad");
		System.out.println("Size of Hashmap:"+hm.size());
		System.out.println("Is Hashmap empty: "+hm.isEmpty());
		Set<Map.Entry> set=hm.entrySet();
		System.out.println("Hashmap:");
		for(Map.Entry me:set)
			System.out.println(me.getKey()+": "+me.getValue());
		System.out.println();
		System.out.println("Putting all elements of Hashmap to another hashmap:");
		hm2.putAll(hm);
		System.out.println();
		System.out.println("Hashmap2:");
		set=hm2.entrySet();
		for(Map.Entry me:set)
			System.out.println(me.getKey()+": "+me.getValue());
		System.out.println();
		System.out.println("Does hashmap contain 2 as key: "+hm.containsKey(2));
		System.out.println("Does hashmap contain 'helo' as Value: "+hm.containsValue("hello"));
		System.out.println("Are hashmap  and hashamap2 equal: "+hm.equals(hm2));
		hm.clear();
		System.out.println("After clearing hashmap:");
		System.out.println("Is Hashmap empty: "+hm.isEmpty());
	}
}