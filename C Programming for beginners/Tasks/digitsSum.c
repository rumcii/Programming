/*Задача 7 - Сумата на цифрите на всички числа между N и M*/

/*Във файл `sum_digits_interval.py`, напишете програма, която:*/

/** Чете две цели числа `N` и `M` от потребителя.*/
/** Изкарва на екрана, за всяко число `n` между `N` и `M` включително, сумата на цифрите на `n`*/

/*Например:*/

/*```*/
/*Enter N: 1*/
/*Enter M: 15*/
/*Sum of digits of 1 = 1*/
/*Sum of digits of 2 = 2*/
/*Sum of digits of 3 = 3*/
/*Sum of digits of 4 = 4*/
/*Sum of digits of 5 = 5*/
/*Sum of digits of 6 = 6*/
/*Sum of digits of 7 = 7*/
/*Sum of digits of 8 = 8*/
/*Sum of digits of 9 = 9*/
/*Sum of digits of 10 = 1*/
/*Sum of digits of 11 = 2*/
/*Sum of digits of 12 = 3*/
/*Sum of digits of 13 = 4*/
/*Sum of digits of 14 = 5*/
/*Sum of digits of 15 = 6*/
/*```*/

#include <stdio.h>

int digitSum(int);

main()
{
	int iNumber;
	int i;
	
	printf("Enter number: ");
	scanf("%d", &iNumber);
	
	for (i = 1; i < iNumber; i++) {
		printf("Sum of digits of %d is %d\n\n", i, digitSum(i));
	}
	printf("\n%d\n\n", i);
}

int digitSum(int iNumber)
{
	int iDigit;
	int iResult = 0;
	
	while (iNumber != 0) {
		iDigit = iNumber % 10;
		
		iResult += iDigit;
		
		iNumber /= 10;
	}
	
	return iResult;
}
