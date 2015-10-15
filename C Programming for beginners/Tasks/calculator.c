// In a com.hackbulgaria.programming51.week1 package create a Calculator class, where you:

// read one integer a from the standard input
// read one character oper - the operation of the calculator - from the standard input
// read one more integer b
// output the result from a oper b to the console.
// We are going to cover the following operations:

// Standard arithmetics - +, -, *, /
// Exponentiation - ^. If the input is 2 ^ 8 you should output 256
// A special ? operator, which does the following: a ? b = a! + b! where a! is the factorial of a
// Here is the code to read from the standard input:

// package com.hackbulgaria.programming51.week1;

// import java.util.Scanner;

// public class Calculator {

//   public static void main(String[] args) {
//     Scanner scanner = new Scanner(System.in);
//     int a = scanner.nextInt();
//     char oper = scanner.next().charAt(0);
//     int b = scanner.nextInt();

//     System.out.println(a);
//     System.out.println(oper);
//     System.out.println(b);
//   }

// }
// Examples

// Input:

// 1 + 2
// Output:

// 3
// Input

// 2 ^ 8
// Output

// 256
// Input

// 5 ? 2
// Output

// 122

#include <stdio.h>

int exponentiation(int, int);
int factorial(int);

main()
{
	char oper;
	int a;
	int b;
	int c;

	float fResult = 0;
	
	printf("%d\n", a);

	printf("Enter first number: ");
	scanf("%d", &a);
	c = a;
	printf("Entr second number: ");
	scanf("%d", &b);
	
	printf("%d\n", a);
	
	printf("Enter operation: ");
	scanf("%s", &oper);
	
	printf("%d\n", a);

	if (oper == '+') {
		fResult = c + b;
		printf("The result is: %.0f\n\n", fResult);
	} else if (oper == '-') {
		fResult = c - b;
		printf("The result is: %.0f\n\n", fResult);
	} else if (oper == '*') {
		fResult = c * b;
		printf("The result is: %.0f\n\n", fResult);
	} else if (oper == '/') {
		fResult = c / b;
		printf("The result is: %.2f\n\n", fResult);
	} else if (oper == '^') {
		printf("The result is: %d\n\n", exponentiation(c, b));
	} else if (oper == '!') {
		printf("The result is: %d\n\n", factorial(c) + factorial(b));
	} else {
		printf("You are entered wrong operator.\n\n");
	}
	return 0;
}

int exponentiation(int a, int b)
{
	int iResult = 1;

	while (b != 0) {
		iResult *= a;
		--b;
	}

	return iResult;
}

int factorial(int a)
{
	int iResult = 1;

	while (a != 0) {
		iResult *= a;
		a--;
	}

	return iResult;
}
