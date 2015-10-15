// Write a function prototype for the following components:
// • A function that divides two numbers and returns the
// remainder
// • A function that finds the larger of two numbers and returns
// the result
// • A function that prints an ATM menu—it receives no
// parameters and returns no value

#include <stdio.h>

float dividesNumbers(int, int);

void findLargeNumber(int, int);

void printAtmMenu();

main()
{
	int a;
	int b;

	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);

	printf("\nThe result of divides numbers is: %.2f\n", dividesNumbers(a, b));
	printf("\nThe result of compare numbers is: \n");

	findLargeNumber(a, b);

	printf("Print ATM Menu: \n\n");
	printAtmMenu();

	return 0;
}

float dividesNumbers(int a, int b)
{
	float fResult;

	fResult = (float)a / (float)b;
	return fResult;
}

void findLargeNumber(int a, int b)
{
	if (a < b) {
		printf("%d is smaller than %d\n", a, b);
	} else if (a > b) {
		printf("%d is bigger than %d\n", a, b);
	} else {
		printf("The number are equal.\n");
	}
}

void printAtmMenu()
{
	printf("\nMain function:\n");
	printf("\t1. Display Balance \n");
	printf("\t2. Deposit founds\n");
	printf("\t3. Transfer fountds\n");
	printf("\t4. Withdraw founds:\n");
	printf("\t\t1. Get available balance\n");
	printf("\t\t2. Compare balance to request\n");
	printf("\t\t3. Update account\n");
	printf("\t\t4. Disperse founds:\n");
	printf("\t\t\t1. Verify ample founds exist\n");
	printf("\t\t\t2. Initiate mechanical process\n");
	printf("\t\t\t3. Update bank records\n");
	printf("\t\t5. Reject request\n");
	printf("\t\t6. Print receipt\n");
}