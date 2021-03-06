/*Задача 2 - Сумата на всички четни числа между 1 и N.*/

/*Във файла `sum_of_evens.py` напишете програма, която:*/

/** Чете едно число `n` от потребителя.*/
/** На екрана изкарва сумата на всички четни числа между 1 и `n` включително.*/

/*Едно число е четно, ако се дели на 2 без остатък:*/

/*```python*/
/*if n % 2 == 0:*/
/*    print("n is even")*/
/*```*/

#include <stdio.h>

main()
{
	int i;
	int number;
	int result = 0;
	
	printf("Enter number: ");
	scanf("%d", &number);
	
	for (i = 1; i <= number; i++) {
		if (i % 2 == 0) {
			result += i;
		}
	}
	printf("\nThe sum of all even numbers in this interval is: %d\n\n", result);
}
