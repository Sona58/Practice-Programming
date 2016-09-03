import java.util.*;

class q21{
	@SuppressWarnings("unchecked")
	public static void main(String args[]){
		LinkedHashMap lhm1=new LinkedHashMap();
		lhm1.put("A",new Double(343.34));
		lhm1.put("B",new Double(121.12));
		lhm1.put("C",new Double(565.56));
		lhm1.put("D",new Double(898.89));
		lhm1.put("E",new Double(474.47));
		System.out.println("LinkedHashMap: "+lhm1);
		System.out.println("Does LinkedHashMap contains B as key: "+lhm1.containsKey("B"));
		System.out.println("Value of D: "+lhm1.get("D"));
		System.out.println("Is TreeSet empty: "+lhm1.isEmpty());
		lhm1.clear();
		System.out.println("Is TreeSet empty: "+lhm1.isEmpty());
	}
}