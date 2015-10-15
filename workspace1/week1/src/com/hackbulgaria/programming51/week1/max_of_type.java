/*Try to find the maximum value of long, float and double variables.

A long variable can contain numbers without a floating point. 
Guess the difference between int and long
A float variable is a number that has a floating point. Like 2.6 or 45.832
A double variable is also a number with a floating point. 
Try to guess the difference between float and double*/

package com.hackbulgaria.programming51.week1;

public class max_of_type {

	public static void main(String[] args) {
		long a = 0;
		long b = 0;
		long c = 0;
		//long minLongState;
		//long maxLongState;
		long minLong;
		long maxLong;
		
		while (true) {
			a = a + 500000;
			
			if (a < 0) {
				minLong = a;
				break;
			}
			maxLong = a;
		}
		
		//System.out.println("Max is: " + maxLong);
		System.out.println("Min is: " + minLong);

	}

}
