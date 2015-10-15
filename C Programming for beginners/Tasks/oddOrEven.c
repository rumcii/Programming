/*Задача 5 - Четно или нечетно?*/

/*Във файла `evenodd.py`, напишете програма, която:*/

/** Чете от потребителя дадено число*/
/** Отпечатва на екрана дали това число е четнои ли нечетно.*/

/***Едно число е четно (even), ако се дели на 2 без остатък. Иначе е нечетно (odd).***/

/*Примерно използване:*/

/*```*/
/*Enter number: 5*/
/*5 is odd.*/
/*```*/

/*```*/
/*Enter number: 4*/
/*4 is even.*/

#include <stdio.h>

main()
{
	int iNumber;
	
	printf("\nEnter number: ");
	scanf("%d", &iNumber);
	
	if (iNumber % 2 == 0) {
		printf("\n%d is even.\n\n", iNumber);
	} else {
		printf("\n%d is odd.\n\n", iNumber);
	}
}
