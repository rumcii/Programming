// Build a number guessing game that uses input validation
// ( isdigit() function) to verify that the user has entered a digit
// and not a non-digit (letter). Store a random number between
// 1 and 10 into a variable each time the program is run. Prompt
// the user to guess a number between 1 and 10 and alert the user
// if he was correct or not.

#include <stdio.h>
#include <ctype.h>
//#include <stdlib.h>

main()
{
	int iRandomNumber;
	char cIncomingNumber;

	srand(time(NULL));

	iRandomNumber = (rand() % 10) + 1;

	printf("\nEnter an integer number: ");
	scanf("%c", &cIncomingNumber);

	if isdigit(cIncomingNumber) {
		if (iRandomNumber == (cIncomingNumber - '0')){
			printf("Excelent!!!\n");
		}

		else {
			printf("Numbers are not the same.\n");
			printf("Number was %d\n", iRandomNumber);
			printf("Try again.\n");
		}
	}

	else {
		printf("You are entered incorrect type.");
		printf("\nPlease enter an integer number!\n");
	}

	return 0;
}