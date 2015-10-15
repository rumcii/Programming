package com.hackbulgaria.programming51.week1;

import java.util.Scanner;

public class stringToBinay {

	public static void main(String[] args) {
		Scanner input = new Scanner(System.in);
		
		System.out.println("Enter some number: ");
		int iNumber = input.nextInt();
		
		System.out.println("Number in binary is: " + stringToBinary(iNumber));

	}
	
	public static String stringToBinary(int a) {
		String iToBinary = "";
		int iDivider;
		
		while (a != 0) {
			iDivider = a % 2;
			
			iToBinary = iDivider + iToBinary;
			
			a = a / 2;
		}
		
		return iToBinary;
	}

}
