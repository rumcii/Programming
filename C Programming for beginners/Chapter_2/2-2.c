// Create a program that uses the same formula above to output
// the result; this time, however, prompt the user for the values
// a , b , x , and y . Use appropriate variable names and naming
// conventions.

#include <stdio.h>

main()
{
	int a;
	int b;
	int x;
	int y;

	int iResult;

	printf("Enter an integer number for \'a\': ");
	scanf("%d", &a);
	printf("Enter an integer number for \'b\': ");
	scanf("%d", &b);
	printf("Enter an integer number for \'x\': ");
	scanf("%d", &x);
	printf("Enter an integer number for \'y\': ");
	scanf("%d", &y);

	iResult = (a - b) * (x - y);

	printf("The result is: %d\n", iResult);
}