package com.hackbulgaria.programming51.week1;

import java.util.Scanner;

public class Calculator {

	public static void main(String[] args) {
	    Scanner scanner = new Scanner(System.in);
	    System.out.print("Enter first number: ");
	    int a = scanner.nextInt();
	    System.out.print("Enter operation (+, -, *, /, ^): ");
	    char oper = scanner.next().charAt(0);
	    System.out.print("Enter second number: ");
	    int b = scanner.nextInt();
	    
	    int iResult = 1;
	    
	    if (oper == '+') {
	    	iResult = a + b;
	    	System.out.println("The result is: " + iResult);
	    } else if (oper == '-') {
	    	iResult = a - b;
	    	System.out.println("The result is: " + iResult);
	    }	else if (oper == '*') {
	    	iResult = a * b;
	    	System.out.println("The result is: " + iResult);
	    } else if (oper == '/') {
	    	iResult = a / b;
	    	System.out.println("The result is: " + iResult);
	    } else if (oper == '^') {
	    	while (b > 0) {
	    		iResult = iResult * a;
	    		b--;
	    	}
	    	System.out.println("The result is: " + iResult);
	    } else if (oper == '?') {
	    	iResult = 0;
	    	
	    	int factorialA = 1;
	    	int factorialB = 1;
	    	
	    	while (a > 0) {
	    		factorialA = factorialA * a;
	    		a--;
	    	}
	    	
	    	while (b > 0) {
	    		factorialB = factorialB * b;
	    		b--;
	    	}
	    	
	    	iResult = factorialA + factorialB;
	    	System.out.println("The result is: " + iResult);
	    } else {
	    	System.out.println("Wrong operation.");
	    }
	    
	
	}
}
