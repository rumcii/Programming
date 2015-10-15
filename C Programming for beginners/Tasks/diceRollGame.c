/*Задача 2 - Игра на Зарове.*/

/*Във файл, който се казва `dice_game.py`, напишете програма, която прави следното:*/

/** Чете от потребител едно число `N`, което ще е броят на страните на зара*/
/** Чете името на първия играч.*/
/** Чете името на втория играч.*/
/** Хвърля зарове за първия и втория играч.*/

/*Имаме следните условия:*/

/** Играчът с по-голямо число, побежадава в играта. Програмата трябва да отпечата името на победителя"*/
/** Ако хвърлят едно и също число, програмата казва, че има равенство.*/

/***Примерно използване:***/

/*```*/
/*Enter dice side: 10*/
/*Enter player1 name: Rado*/
/*Enter player2 name: Ivo*/
/*Rado rolls 10*/
/*Ivo rolls 1*/
/*Rado wins!*/
/*```*/

#include <stdio.h>

main()
{
	srand(time(NULL));
	int iSides;
	int iDice;
	char cPlayer1[10];
	char cPlayer2[10];
	char *cDice[6];
	cDice[0] = "\n-----\n|   |\n| * |\n|   |\n-----\n";
	cDice[1] = "\n-----\n|*  |\n|   |\n|  *|\n-----\n";
	cDice[2] = "\n-----\n|*  |\n| * |\n|  *|\n-----\n";
	cDice[3] = "\n-----\n|* *|\n|   |\n|* *|\n-----\n";
	cDice[4] = "\n-----\n|* *|\n| * |\n|* *|\n-----\n";
	cDice[5] = "\n-----\n|***|\n|   |\n|***|\n-----\n";
	
	
	printf("\nEnter dice sides: ");
	scanf("%d", &iSides);
	
	printf("\nEnter name for palyer 1: ");
	scanf("%9s", cPlayer1);
	printf("\nEnter name for player 2: ");
	scanf("%9s", cPlayer2);
	
	int iPlayer1Rolled = (iDice = (rand() % iSides) + 1);
	int iPlayer2Rolled = (iDice = (rand() % iSides) + 1);
	
	if (iPlayer1Rolled > iPlayer2Rolled) {
		printf("%s rolled: %s\n",cPlayer1, cDice[iPlayer1Rolled - 1]);
		printf("%s rolled: %s\n",cPlayer2, cDice[iPlayer2Rolled - 1]);
		printf("\nThe winner is %s\n\n", cPlayer1);
	} else if (iPlayer1Rolled < iPlayer2Rolled) {
		printf("Player 1 rolled: %s\n", cDice[iPlayer1Rolled - 1]);
		printf("%s rolled: %s\n",cPlayer2, cDice[iPlayer2Rolled - 1]);
		printf("\nThe winner is %s\n\n", cPlayer2);
	} else {
		printf("\nEquals\n\n");
	}
}
