// Create a counting program that prompts the user for three
// inputs (shown next) that determine how and what to count.
// Store the user’s answers in variables. Use the acquired data to
// build your counting program with a for loop and display the
// results to the user.
// • Beginning number to start counting from
// • Ending number to stop counting at
// • Increment number


#include <stdio.h>

main()
{
	int iBeginingNumber, iEndingNumber, iIncrementNumber;

	printf("\nEnter beginning number: ");
	scanf("%d", &iBeginingNumber);
	printf("Enter ending number: ");
	scanf("%d", &iEndingNumber);
	printf("Enter increment number: ");
	scanf("%d", &iIncrementNumber);

	if (iBeginingNumber > iEndingNumber) {
			printf("\nThe program is:\n");

		for (iBeginingNumber; iBeginingNumber >= iEndingNumber; iBeginingNumber -= iIncrementNumber) {
			printf("%d\n", iBeginingNumber);
		}
	}

	else if (iBeginingNumber < iEndingNumber) {
		printf("\nThe program is:\n");

		for (iBeginingNumber; iBeginingNumber <= iEndingNumber; iBeginingNumber += iIncrementNumber) {
			printf("%d\n", iBeginingNumber);
		}
	}

	else {
		printf("\nThe numbers can't be equal!\n");
		printf("Try again.\n");
	}

	return 0;
}