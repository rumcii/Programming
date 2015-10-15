/*Задача 4 - Какви са числата в даден интервал. Четни или нечетни?*/

/*Във файл, който се казва `even_odd_interval.py`, напишете програма, която:*/

/*1. Чете две числа от потребителя, които представляват интервал от цели числа.*/
/*2. За всяко число от интервала, изкарва на екрана самото число и съответно текст дали е четно или не.*/

/*Например:*/

/*```*/
/*Enter a: 1*/
/*Enter b: 5*/
/*1 - odd*/
/*2 - even*/
/*3 - odd*/
/*4 - even*/
/*5 - odd*/
/*```*/

#include <stdio.h>

main()
{
	int firstNumber;
	int secondNumber;
	int i;
	
	printf("\nEnter first number: ");
	scanf("%d", &firstNumber);
	printf("Enter second number: ");
	scanf("%d", &secondNumber);
	
	if (firstNumber < secondNumber) {
		for (i = firstNumber; i <= secondNumber; i++) {
			if (i % 2 == 0) {
				printf("%d is even.\n", i);
			} else {
				printf("%d is odd.\n", i);
			}
		}
	} else if (firstNumber > secondNumber) {
		for (i = secondNumber; i <= firstNumber; i++) {
			if (i % 2 == 0) {
				printf("%d is even.\n", i);
			} else {
				printf("%d is odd.\n", i);
			}
		}
	}
}
