// Modify the Concentration Game to use a main menu. The menu
// should allow the user to select a level of difficulty and/or quit
// the game (a sample menu is shown below). The level of difficulty
// could be determined by how many separate numbers the user
// has to concentrate on and/or how many seconds the player has
// to concentrate. Each time the user completes a single game of
// Concentration, the menu should reappear allowing the user to
// continue at the same level, at a new level, or simply quit the
// game.
// 1
// 2
// 3
// 4
// Easy (remember 3 numbers in 5 seconds)
// Intermediate (remember 5 numbers in 5 seconds)
// Difficult (remember 5 numbers in 2 seconds)
// Quit

// #include <stdio.h>
// //#include <stdlib.h>

// main()
// {
// 	char cYesNo = '\0';
// 	int iResp1 = 0;
// 	int iResp2 = 0;

// 	int iResp3 = 0;
// 	int iElaspedTime = 0;
// 	int iCurrentTime = 0;
// 	//int iRandomNum = 0;
// 	int i1 = 0;
// 	int i2 = 0;
// 	int i3 = 0;
// 	//int iCounter = 0;

// 	srand(time(NULL));

// 	printf("\nPlay a game of Concentration? (y or n): ");
// 	scanf("%c", &cYesNo);

// 	if (cYesNo == 'y' || cYesNo == 'Y') {
// 		i1 = rand() % 100;
// 		i2 = rand() % 100;
// 		i3 = rand() % 100;
		
// 		printf("\nConcentrate on the next three numbers\n");
// 		printf("\n%d\t%d\t%d\n", i1, i2, i3);
		
// 		iCurrentTime = time(NULL);
		
// 		do {
		
// 		iElaspedTime = time(NULL);
		
// 		} while ( (iElaspedTime - iCurrentTime) < 3 ); //end do while loop
		
// 		system ("clear");
		
// 		printf("\nEnter each # separated with one space: ");
// 		scanf("%d%d%d", &iResp1, &iResp2, &iResp3);
		
// 		if ( i1 == iResp1 && i2 == iResp2 && i3 == iResp3 )
// 			printf("\nCongratulations!\n");
// 		else
// 			printf("\nSorry, correct numbers were %d %d %d\n", i1, i2, i3);
// 	}
// }


#include <stdio.h>

main()
{
	int iNumber1 = 0;
	int iNumber2 = 0;
	int iNumber3 = 0;
	int iNumber4 = 0;
	int iNumber5 = 0;
	int iInputNumber1 = 0;
	int iInputNumber2 = 0;
	int iInputNumber3 = 0;
	int iInputNumber4 = 0;54
	int iInputNumber5 = 0;
	int iCurrentTime = 0;
	int iElapsedTime = 0;
	int iSelection = 0;
	char cYesNo = '\0';

	srand(time(NULL));

	printf("\nDo you want to play the game? (\"y or n\"): ");
	scanf("%c", &cYesNo);

	if (cYesNo == 'y' || cYesNo == 'Y') {
		printf("\nSelect difficulty: \n");
		printf("1.\tEasy (remember 3 numbers for 5 seconds).\n");
		printf("2.\tIntermediate(remember 5 numbers for 5 seconds).\n");
		printf("3.\tDifficult(remember 5 numbers for 5 seconds).\n");
		scanf("%d", &iSelection);

		if (iSelection == 1) {
			iNumber1 = rand() % 100;
			iNumber2 = rand() % 100;
			iNumber3 = rand() % 100;

			iCurrentTime = time(NULL);

			printf("The numbers are: %d\t%d\t%d\n", iNumber1, iNumber2, iNumber3);

			do {
				iElapsedTime = time(NULL);
			}	while ((iElapsedTime - iCurrentTime) < 5);
			
			system("clear");

			printf("Enter 3 numbers separate with space: ");
			scanf("%d%d%d", &iInputNumber1, &iInputNumber2, &iInputNumber3);

			if (iNumber1 == iInputNumber1 && iNumber2 == iInputNumber2 && iNumber3 == iInputNumber3) {
				printf("\nCongratulations!!!\n");
			}

			else {
				printf("Sorry, correct numbers were: %d    %d\t%d\n", iNumber1, iNumber2, iNumber3);
				printf("Try again\n");
			}
			return 0;
		}

		else if (iSelection == 2) {
			iNumber1 = rand() % 100;
			iNumber2 = rand() % 100;
			iNumber3 = rand() % 100;
			iNumber4 = rand() % 100;
			iNumber5 = rand() % 100;

			iCurrentTime = time(NULL);

			printf("The numbers are: %d\t%d\t%d\t%d\t%d\n", iNumber1, iNumber2, iNumber3, iNumber4, iNumber5);

			do {
				iElapsedTime = time(NULL);
			}	while ((iElapsedTime - iCurrentTime) < 5);
			
			system("clear");

			printf("Enter 5 numbers separate with space: ");
			scanf("%d%d%d%d%d", &iInputNumber1, &iInputNumber2, &iInputNumber3, &iInputNumber4, &iInputNumber5);
		}

		else {
			iNumber1 = rand() % 100;
			iNumber2 = rand() % 100;
			iNumber3 = rand() % 100;
			iNumber4 = rand() % 100;
			iNumber5 = rand() % 100;

			iCurrentTime = time(NULL);

			printf("The numbers are: %d\t%d\t%d\t%d\t%d\n", iNumber1, iNumber2, iNumber3, iNumber4, iNumber5);

			do {
				iElapsedTime = time(NULL);
			}	while ((iElapsedTime - iCurrentTime) < 2);
			
			system("clear");

			printf("Enter 5 numbers separate with space: ");
			scanf("%d%d%d%d%d", &iInputNumber1, &iInputNumber2, &iInputNumber3, &iInputNumber4, &iInputNumber5);
		}

		if (iNumber1 == iInputNumber1 && iNumber2 == iInputNumber2 && iNumber3 == iInputNumber3 && iNumber4 == iInputNumber4 && iNumber5 == iInputNumber5) {
			printf("\nCongratulations!!!\n");
		}

		else {
			printf("Sorry, correct numbers were: %d    %d    %d    %d    %d\n", iNumber1, iNumber2, iNumber3, iNumber4, iNumber5);
			printf("Try again\n");
		}
	}
	return 0;
}
