package com.hackbulgaria.programming51.week1;

public class task {

	public static void main(String[] args) {
		System.out.println(sum(5, 4));
		System.out.println(isEven(8));
	}
	
	public static int sum(int a, int b) {
		return a + b;
	}
	
	public static boolean isEven(int a) {
//		if (a % 2 == 0) {
//			return true;
//		}
		
		return a % 2 == 0;
	}
	
}
