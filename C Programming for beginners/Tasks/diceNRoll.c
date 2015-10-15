/*Задача 2 - Зарче с N страни*/

/*В файл, който се казва `n_dice.py`, напишете програма, която:*/

/** Чете от потребител едно цяло число `N`*/
/** Хвърля зарче с `N` страни и получава число между `1` и `N`*/

/*Програмата трябва да отпечата на екрана резултата от хвърлянето.*/

/*Примерно използване:*/

/*```*/
/*Enter sides: 20*/
/*The dice rolled:*/
/*15*/
/*```*/

#include <stdio.h>

main()
{
	int iSides;
	int iDiceRolled;
	
	srand(time(NULL));
	
	printf("Enter sides for dice: ");
	scanf("%d", &iSides);
	
	iDiceRolled = (rand() % iSides) + 1;
	
	printf("\nThe dice rolled: %d\n\n", iDiceRolled);
}
