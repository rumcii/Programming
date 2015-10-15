/*Try to find the maximum value of int with a while/for cycle:

What will happen if you increase an int variable a lot of times? 
Can you increase a positive int value so many times, that it gets negative? Try to do that in a Java program.*/

package com.hackbulgaria.programming51.week1;

public class max_of_int {

	public static void main(String[] args) {
		int a = 0;
		int maxValue;
		int minValue;
		int b = 0;
		
		
		while (true) {
			++a;
			
			if (a < 0) {
				maxValue = b;
				minValue = a;
				break;
			}
			
			b = a;
		}
		
		System.out.println("Min value of int is: " + a);
		System.out.println("Max value of int is: " + b);

	}

}
