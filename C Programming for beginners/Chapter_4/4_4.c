// Create a math quiz program that prompts the user for how many
// questions to ask. The program should congratulate the player if
// he or she gets the correct answer or alert the user of the correct
// answer in the event the question is answered incorrectly.
// The math quiz program should also keep track of how many
// questions the player has answered correctly and incorrectly and
// display these running totals at the end of the quiz.

#include <stdio.h>

main()
{
	int iCounter, iAnswer;
	int iCorrect = 0;
	int iIncorrect = 0;
	int x, y;

	srand(time(NULL));

	printf("\nEnter question counter: ");
	scanf("%d", &iCounter);

	while (iCounter > 0) {
		x = rand() % 100;
		y = rand() % 100;

		printf("%d + %d is: ", x, y);
		scanf("%d", &iAnswer);

		if (iAnswer == x + y) {
			printf("Congratulations!!!\n");
			++iCorrect;
		}

		else {
			printf("Your answer is incorrect.\n");
			++iIncorrect;
		}

		--iCounter;
	}

	printf("The number correct answers is: %d\n", iCorrect);
	printf("The number of incorrect answers is: %d\n", iIncorrect);

	return 0;
}