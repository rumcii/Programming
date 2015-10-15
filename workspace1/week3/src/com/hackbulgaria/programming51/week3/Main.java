package com.hackbulgaria.programming51.week3;

public class Main {

	public static void main(String[] args) {
		
		int [] a = {5, 2, 6, 9, 1, 0};
		
		System.out.println(Arr.toString(a));
		Arr.sort(a);
		
		System.out.println(Arr.toString(a));
		
		System.out.println(Arr.toString(Arr.reverse(a)));
		
		System.out.println(Arr.join(a, ": "));
		
		System.out.println(Arr.sum(a));
		
		System.out.println(Arr.toString(Arr.range(10, 20)));
		
		System.out.println(Arr.toString(Arr.filterOdd(a)));

	}

}
