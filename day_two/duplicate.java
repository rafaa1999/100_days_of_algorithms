/*
 * write a programme that verify that the array 
 * have a duplicate number
 * */

// i use hashset to verify the existence of duplicate
// witch i do a for loop aand determine if hashset
// contain a duplicate




package duplicate;

import java.util.HashSet;
import java.util.Iterator;
import java.util.Scanner;




public class Find_duplicate_number {
			
	
		public static void main(String[] args) {
			
			int n;
			
			System.out.println("enter the size of list ");
			Scanner sc=new Scanner(System.in);
			n=sc.nextInt();
			
			int[] arr= new int[n];
			
			HashSet<Integer> numbers=new HashSet<>();
			
			for(int i =0;i<arr.length;i++) {
				arr[i]=sc.nextInt();
			};
			
			for(int i =0;i<arr.length;i++) {
				if(numbers.contains(arr[i])) {
					System.out.println("duplicate");;
				};
				numbers.add(arr[i]);
					
			}
			
			
		}
	
}