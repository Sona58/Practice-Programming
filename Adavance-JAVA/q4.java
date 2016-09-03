import java.util.*;

class q4{
	public static void main(String args[]){
		Object arr[]=new Object[10];
		for(int i=0;i<10;i++)
			arr[i]=i*-3+2;
		System.out.println("Array Elements: "  );
		for(int i=0;i<10;i++)
			System.out.println(arr[i]);
		System.out.println();
		System.out.println("Searching element using binary search :");
		int index= Arrays.binarySearch(arr,-10);
		System.out.println("Index of -10 is " + index);
		System.out.println();
		System.out.println("Array Elements in Sorted Order : ");
		Arrays.sort(arr);
		for(int i=0;i<10;i++)
			System.out.println(arr[i]);
		System.out.println();
		System.out.println("Creating copy of first three elements of array");
		Object ar1[]=Arrays.copyOf(arr,3);
		for(Object a:ar1)
			System.out.println(a);
		System.out.println();
		System.out.println("Creating copy of elements of array from 3 to 5 position");
		Object ar[]=Arrays.copyOfRange(arr,3,6);
		for(Object a:ar)
			System.out.println(a);
		System.out.println();
		System.out.println("Is two arrays equal: "+Arrays.equals(ar,ar1));
		System.out.println("Is two arrays equal: "+Arrays.deepEquals(ar,ar));
		System.out.println();
		System.out.println("Filling first five array elements with 2");
		Arrays.fill(arr,0,4,2);
		for(int i=0;i<10;i++)
			System.out.println(arr[i]);
		System.out.println();
		System.out.println("Fill all array elements with 2");
		Arrays.fill(arr,2);
		for(int i=0;i<10;i++)
			System.out.println(arr[i]);
	}
}