// Given a = 5 , b = 1 , x = 10 , and y = 5 , create a program that
// outputs the result of the formula f = (a − b)(x − y) using a
// single printf() function.

#include <stdio.h>

main()
{
	int a = 5;
	int b = 1;
	int x = 10;
	int y = 5;

	int iResult;

	iResult = (a - b) * (x - y);

	printf("f = %d", iResult);
}