// Create a dice game that uses two six-sided dice. Each time the
// program runs, use random numbers to assign values to each die
// variable. Output a “player wins” message to the user if the sum
// of the two dice is 7 or 11. Otherwise output the sum of the two
// dice and thank the user for playing.

#include <stdio.h>

main()
{
	int iDice1, iDice2;

	srand(time(NULL));

	iDice1 = (rand() % 6) + 1;
	iDice2 = (rand() % 6) + 1;

	printf("The first dice rolled: %d\n", iDice1);
	printf("The second dice rolled: %d\n", iDice2);

	int iResult = iDice1 + iDice2;

	if (iResult == 7 || iResult == 11) {
		printf("Player wins!!!\n");
	}

	else {
		printf("The sum of dices is: %d\n", iResult);
		printf("Thank you for playing.\n");
	}

	return 0;
}