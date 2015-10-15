/*We denote the "Palindrome score" of an integer by the following function:

P(n) = 1, if n is palindrome
P(n) = 1 + P(s) where s is the sum of n and the reverse of n
In a com.hackbulgaria.51.week1 package, in a PalindromeScore class, implement a program that:

Reads one integer n from the standard input
Output the palindrome score for n*/

package com.hackbulgaria.programming51.week1;

import java.util.Scanner;

public class PalindromeScore {
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter number: ");
		int n = input.nextInt();
		int iReverse = 0;
		int m;
		int iNumber = n;
		int s;
		int iResult = 0;
		int x;
		int y;
		int z;
		
		while (iNumber != 0) {
			m = iNumber % 10;
			
			iReverse = iReverse * 10 + m;
			
			iNumber = iNumber / 10;
		}
		

		if (n == iReverse) {
			iResult = iResult + 1;
		} else {
			y = n;
			
			while (true) {
				s = x = y + iReverse;
				
				iReverse = 0;
				iResult++;
				
				while (x != 0) {
					m = x % 10;
					
					iReverse = iReverse * 10 + m;
					
					x = x / 10;
				};
				z = iReverse;
				System.out.println("print z: " + z);
				y = 0;
				
				while (z != 0) {
					m = z % 10;
					
					y = y * 10 + m;
					
					z = z / 10;
				}
				
				if (s == iReverse) {
					iResult++;
					break;
				}
			}
		}
		System.out.println("The result is: " + iResult);
	}
}
