package com.hackbulgaria.programming51.week1;

import java.util.Scanner;

public class IntegerPalindrome {
	
	public static void main(String[] args) {
		
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter number: ");
		int n = input.nextInt();
		int iReverse = 0;
		int m;
		int iSum;
		int iNumber = n;
		int iSumReverse = 0;
		int iNewNumber;
		
		while (iNumber != 0) {
			m = iNumber % 10;
			
			iReverse = iReverse * 10 + m;
			
			iNumber = iNumber / 10;
		}
		
		iSum = iNewNumber = iReverse + n;
		
		while (iNewNumber != 0) {
			m = iNewNumber % 10;
			
			iSumReverse = iSumReverse * 10 + m;
			
			iNewNumber = iNewNumber / 10;
		}

		if (iSum == iSumReverse) {
			System.out.println("YES");
		} else {
			System.out.println("NO");
		}
	}
}
