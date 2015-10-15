package com.hackbulgaria.programming51.week1;

import java.util.Scanner;

public class binaryToString {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter binary nmber: ");
		int a = input.nextInt();
		int iCounter = 0;
		int iDigit;
		int Result = 0;
		
		while (a != 0) {
			iDigit = a % 10;
			
			if (iDigit != 0) {
				Result = Result + powerOfTwo(iCounter);
			}
			
			iCounter++;
			a = a / 10;
		}
		
		System.out.println("Then result is: " + Result);

	}

	
	public static int powerOfTwo(int n) {
		int iResult = 1;
		
		if (n == 0) {
			return 1;
		}

		
		while (n > 0) {
			iResult = iResult * 2;
			n--;
		}
				
		return iResult;
	}
	
	//public static int toInt(int n)
}
