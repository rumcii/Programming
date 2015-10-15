package com.hackbulgaria.programming51.week3;

public class Arr {
	
	public static String toString(int [] a) {
		String result = "";
		for (int i = 0; i < a.length - 1; i++) {
			result += a[i] + ", "; 
		}
		
		result += a[a.length - 1];
		return result;
	}
	
	public static void sort(int [] a) {

		for (int i = 0; i < a.length; i++) {
			int index = i;
			
			for (int j = i; j < a.length; j++) {
				if (a[j] < a[index]) {
					index = j;
				}
			}
			int temp = a[i];
			a[i] = a[index];
			a[index] = temp;
		}
	}
	
	public static int[] reverse(int[] a) {
		int [] result = new int[a.length];
		int j = a.length - 1;
		for (int i = 0; i < a.length; i++) {
			result[j] = a[i];
			j--;
		}
		return result;
	}
	
	public static String join(int[] a, String glue) {
		String result = "";
		
		for (int i = 0; i < a.length - 1; i++) {
			result += a[i] + glue;
		}
		result += a[a.length - 1];
		return result;
	}
	
	public static int sum(int[] a) {
		int result = 0;
		
		for (int i = 0; i < a.length; i++) {
			result += a[i];
		}
		return result;
	}
	
	public static int[] range(int a, int b) {
		int [] result = new int[b - a];
		int j = 0;
		for (int i = a; i < b; i++) {
			result[j] = i;
			j++;
		}
		return result;
	}
	
	public static int oddCount(int[] a) {
		int counter = 0;
		
		for (int i = 0; i < a.length; i++) {
			if (a[i] % 2 != 0) {
				counter++;
			}
		}
		return counter;
	}
	
	public static int[] filterOdd(int[] a) {
		int[] result = new int[oddCount(a)];
		int j = 0;
		
		for (int i = 0; i < a.length; i++) {
			if (a[i] % 2 != 0) {
				result[j] = a[i];
				j++;
			}
		}
		return result;
	}
}
