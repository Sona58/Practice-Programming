import java.util.*;

class q17{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		HashMap<String, Integer> hm=new HashMap<String,Integer>();

		hm.put("John",new Integer(333));
		hm.put("Tom",new Integer(111));
		hm.put("Jane",new Integer(222));
		hm.put("Tod",new Integer(555));
		hm.put("Ralph",new Integer(-1000));

		Set<Map.Entry<String,Integer>> set=hm.entrySet();

		for(Map.Entry<String,Integer> me:set)
			System.out.println(me.getKey()+": "+me.getValue());
		System.out.println();

		int balance=hm.get("John");
		hm.put("John",balance+1000);

		System.out.println("John's new balance: "+ hm.get("John"));
	}
}