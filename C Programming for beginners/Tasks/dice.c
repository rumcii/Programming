/*Задача 3 - Зарче с N страни. И ще смятаме!*/

/*В файл, който се казва `n_dice_more.py`, напишете програма, която:*/

/** Чете от потребител едно цяло число `N`*/
/** Хвърля зарче с `N` страни и получава число между `1` и `N`*/
/** Хвърля зарчето още 1 път.*/
/** Хвърля зарчето 3ти път.*/

/*Програмата трябва да:*/

/** Отпечатва всеки път на екрана, когато хвърли за число*/
/** Накрая, трябва да отпечата сумата на 3те числа, които е получила след хвърляне на зарче.*/


/***Примерно използване:***/

/*```*/
/*Enter sides: 20*/
/*First roll:*/
/*10*/
/*Second roll:*/
/*5*/
/*Sum is:*/
/*15*/
/*```*/

#include <stdio.h>

main()
{
	int iDice;
	int iSides;
	int iResult = 0;
	srand(time(NULL));
	
	printf("Enter the dise sides: ");
	scanf("%d", &iSides);
	
	iDice = (rand() % 6) + 1;
	
	printf("\nFirst time dice rolled: %d\n", iDice);
	
	iResult += iDice;
	
	iDice = (rand() % 6) + 1;
	
	printf("Second time dice rolled: %d\n", iDice);
	
	iResult += iDice;
	
	iDice = (rand() % 6) + 1;
	
	printf("Third time dice rolled: %d\n\n", iDice);
	iResult += iDice;
	
	printf("The sum of all rolls is: %d\n\n", iResult);
	
	
	
	
	
	
	
	
	
	
	
}
